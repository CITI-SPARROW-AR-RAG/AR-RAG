// Copyright (c) Mixed Reality Toolkit Contributors
// Licensed under the BSD 3-Clause

// Disable "missing XML comment" warning for samples. While nice to have, this XML documentation is not required for samples.
#pragma warning disable CS1591

using MixedReality.Toolkit.Subsystems;
using UnityEngine;
using UnityEngine.Events;

namespace MixedReality.Toolkit.Examples.Demos
{
    /// <summary>
    /// Demonstration script showing how to subscribe to and handle
    /// events fired by <see cref="DictationSubsystem"/>.
    /// </summary>
    [AddComponentMenu("MRTK/Examples/Dictation Handler")]
    public class DictationHandler : MonoBehaviour
    {
        /// <summary>
        /// Wrapper of UnityEvent&lt;string&gt; for serialization.
        /// </summary>
        [System.Serializable]
        public class StringUnityEvent : UnityEvent<string> { }

        /// <summary>
        /// Event raised while the user is talking. As the recognizer listens, it provides text of what it's heard so far.
        /// </summary>
        [field: SerializeField]
        public StringUnityEvent OnSpeechRecognizing { get; private set; }

        /// <summary>
        /// Event raised after the user pauses, typically at the end of a sentence. Contains the full recognized string so far.
        /// </summary>
        [field: SerializeField]
        public StringUnityEvent OnSpeechRecognized { get; private set; }

        /// <summary>
        /// Event raised when the recognizer stops. Contains the final recognized string.
        /// </summary>
        [field: SerializeField]
        public StringUnityEvent OnRecognitionFinished { get; private set; }

        /// <summary>
        /// Event raised when an error occurs. Contains the string representation of the error reason.
        /// </summary>
        [field: SerializeField]
        public StringUnityEvent OnRecognitionFaulted { get; private set; }

        private IDictationSubsystem dictationSubsystem = null;
        private IKeywordRecognitionSubsystem keywordRecognitionSubsystem = null;

        /// <summary>
        /// Start dictation on a DictationSubsystem.
        /// </summary>
        public void StartRecognition()
        {
            // Make sure there isn't an ongoing recognition session
            StopRecognition();

            dictationSubsystem = XRSubsystemHelpers.DictationSubsystem;
            if (dictationSubsystem != null)
            {
                keywordRecognitionSubsystem = XRSubsystemHelpers.KeywordRecognitionSubsystem;
                if (keywordRecognitionSubsystem != null)
                {
                    keywordRecognitionSubsystem.Stop();
                }

                dictationSubsystem.Recognizing += DictationSubsystem_Recognizing;
                dictationSubsystem.Recognized += DictationSubsystem_Recognized;
                dictationSubsystem.RecognitionFinished += DictationSubsystem_RecognitionFinished;
                dictationSubsystem.RecognitionFaulted += DictationSubsystem_RecognitionFaulted;
                dictationSubsystem.StartDictation();
            }
            else
            {
                OnRecognitionFaulted.Invoke("Cannot find a running DictationSubsystem. Please check the MRTK profile settings " +
                    "(Project Settings -> MRTK3) and/or ensure a DictationSubsystem is running.");
            }
        }

        private void DictationSubsystem_RecognitionFaulted(DictationSessionEventArgs obj)
        {
            OnRecognitionFaulted.Invoke("Recognition faulted. Reason: " + obj.ReasonString);
            HandleDictationShutdown();
        }

        private void DictationSubsystem_RecognitionFinished(DictationSessionEventArgs obj)
        {
            //OnRecognitionFinished.Invoke("Recognition finished. Reason: " + obj.ReasonString);
            HandleDictationShutdown();
        }

        private void DictationSubsystem_Recognized(DictationResultEventArgs obj)
        {
            //OnSpeechRecognized.Invoke(obj.Result);
        }

        private void DictationSubsystem_Recognizing(DictationResultEventArgs obj)
        {
            OnSpeechRecognizing.Invoke(obj.Result);
        }

        /// <summary>
        /// Stop dictation on the current DictationSubsystem.
        /// </summary>
        public void StopRecognition()
        {
            if (dictationSubsystem != null)
            {
                dictationSubsystem.StopDictation();
            }
        }

        /// <summary>
        /// Stop dictation on the current DictationSubsystem.
        /// </summary>
        public void HandleDictationShutdown()
        {
            if (dictationSubsystem != null)
            {
                dictationSubsystem.Recognizing -= DictationSubsystem_Recognizing;
                dictationSubsystem.Recognized -= DictationSubsystem_Recognized;
                dictationSubsystem.RecognitionFinished -= DictationSubsystem_RecognitionFinished;
                dictationSubsystem.RecognitionFaulted -= DictationSubsystem_RecognitionFaulted;
                dictationSubsystem = null;
            }

            if (keywordRecognitionSubsystem != null)
            {
                keywordRecognitionSubsystem.Start();
                keywordRecognitionSubsystem = null;
            }
        }
    }
}
#pragma warning restore CS1591
