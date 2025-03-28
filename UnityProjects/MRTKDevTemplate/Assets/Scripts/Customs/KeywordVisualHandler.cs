using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;

public class KeywordVisualHandler : MonoBehaviour
{
    public GameObject visual_cue_1_emergency;    // not regonized by the system?
                                                 //  public GameObject gameObjectSpindleSpeed;
                                                 //  public GameObject gameObjectATC;    // place holder for new visual cue
    public void HandleAnswer(string answer)
    {
        List<string> keyword1List = new List<string>
        {
             "emergency stop button",
             "emergency stop buttons",
             "emergency push button",
             "emergency push buttons",
             "emergency stop",
             "emergency button",
             "emergency buttons",
             "e-stop",
             "estop"
        };

        List<string> keyword2List = new List<string>
        {
             "reset emergency button",
             "reset emergency stop"
        };

        List<string> keyword3List = new List<string>
        {
             "spindle speed override dial",
             "spindle override dial"
        };

      


        // Check for each keyword
        foreach (string keyword in keyword1List)
        {
            if (Regex.IsMatch(answer.ToLower(), $@"\b{Regex.Escape(keyword)}\b", RegexOptions.IgnoreCase))
            {
                visual_cue_1_emergency.SetActive(true);
                break;
            }
        }

        // change following "visual_cue_1_emergency" to the new visual cue

        foreach (string keyword in keyword2List)
        {
            if (Regex.IsMatch(answer.ToLower(), $@"\b{Regex.Escape(keyword)}\b", RegexOptions.IgnoreCase))
            {
                visual_cue_1_emergency.SetActive(true);
                break;
            }
        }


        return;
    }
}
