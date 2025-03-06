# AR RAG Application
The project is about the development of an Augmented-Reality Virtual-Assistant Application which have an RAG functionality to answer the user's query based on the provided external data on a Hololens-2 device. 

## Use Cases
The main idea of this application is to create a Virtual Assistant that can help and guide users to operate a system or a machine on an industrial level work-environment. The Virtual Assistant will able to assist the user with the appropriate context from the external data such as the machine's user manual, etc. 

## Technologies
The frontend application uses Unity Engine, with MRTK3 Toolkit as the building components for the AR application. Meanwhile the backend application uses ollama for the LLM inferences and pymilvus for the RAG database. 

## Features
The list of features for this applications are: 
- QnA with the assistant
- Access to external data
- Visual cues to help guide users about the machine
- Keyboard and speech-to-text to interact with the assistant 

# How to Set Up
The repo consist of the necessary MRTK3 Toolkit components, `UnityProjects>MRTKDevTemplate` for the Unity Project Folder, and `rag-system` for the RAG server codes. 

## Requirements

MRTK3 requires Unity 2021.3.21 or higher. In addition, you need the [Mixed Reality Feature Tool for Unity](https://aka.ms/mrfeaturetool) to find, download, and add the packages to your project.




# (NOTE)
All projects under the Mixed Reality Toolkit organization are governed by the Steering Committee. The Steering Committee is responsible for all technical oversight, project approval and oversight, policy oversight, and trademark management for the Organization. To learn more about the Steering Committee, visit this link: https://github.com/MixedRealityToolkit/MixedRealityToolkit-MVG/blob/main/org-docs/CHARTER.md
