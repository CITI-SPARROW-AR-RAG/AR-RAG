using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class demo : MonoBehaviour
{

    public GameObject objectToSpawn; // The GameObject you want to instantiate
    public float spawnInterval = 5f; // Time interval between spawns

    void Start()
    {
        // Start the coroutine when the game starts
        StartCoroutine(SpawnObjectRoutine());
    }

    IEnumerator SpawnObjectRoutine()
    {
        while (true) // Infinite loop to keep spawning
        {
            // Instantiate the GameObject at the spawner's position and rotation
            Instantiate(objectToSpawn, transform.position, transform.rotation);

            // Wait for the specified interval before spawning again
            yield return new WaitForSeconds(spawnInterval);
        }
    }
}
