using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotSpawner : MonoBehaviour
{
    public enum SpawnState { Spawing,Waiting,Counting,End}

    [System.Serializable]
    public class Wave
    {
        public string name;
        public Transform botTransform;
        public int count;
        public float rate;
    }
    
    [SerializeField]
    private Transform spawnPos;

    public Wave[] waves;
    [HideInInspector]
    public int nextWave = 0;
    public float timeBetweenWaves = 5f;
    public float waveCountdown;

    public Transform[] spawnPoints;

    private float searchCountDown = 1;

    public SpawnState state = SpawnState.Counting;

    private void Start()
    {
        waveCountdown = timeBetweenWaves;
    }
    private void Update()
    {
        if (LevelManager.instance.idleTime > 0)
            return;

        if(state == SpawnState.Waiting)
        {
            if (!EnemyIsAlive())
            {
                //Bein new wave
                //Debug.Log("Startin Round");
            }
            else
            {
                return;
            }
        }
        if(waveCountdown <= 0)
        {
            if(state != SpawnState.Spawing && state != SpawnState.End)
            {
                // Start Spawnin wave
                StartCoroutine(SpawnWave(waves[nextWave]));
            }
        }
        else
        {
            waveCountdown -= Time.deltaTime;
        }
    }

    bool EnemyIsAlive()
    {
       
        searchCountDown -= Time.deltaTime;
        if(searchCountDown <= 0)
        {
            searchCountDown = 1;
            if (GameObject.FindGameObjectsWithTag("Bot").Length == 0)
            {
                WaveCompleted();
                return false;
            }
           
        }
        return true;
    }


    void WaveCompleted()
    {
       // Debug.Log("Wave Completed");

        state = SpawnState.Counting;
        waveCountdown = timeBetweenWaves;

        if(nextWave +1 > waves.Length - 1)
        {
            // nextWave = 0;
            // Debug.Log("All waves completed");
            state = SpawnState.End;
            LevelManager.instance.allwavesCompleted = true;
        }
        else
            nextWave++;
    }

    IEnumerator SpawnWave(Wave _wave)
    {
        Debug.Log("Spawnin Wave: " + _wave.name);
        state = SpawnState.Spawing;
        for (int i = 0; i < _wave.count; i++){
            SpawnEnemy(_wave.botTransform);
            yield return new WaitForSeconds(1f / _wave.rate);
        }

        state = SpawnState.Waiting;

        yield break;
    }
    void SpawnEnemy(Transform _enemy)
    {
        if(spawnPoints.Length <= 0)
        {
            Debug.Log("<color=red>No Transform Avaible for spawn</color>");
            return;
        }

        Transform sp = spawnPoints[Random.Range(0, spawnPoints.Length)];
        Debug.Log("Spawin Enemy");
        Instantiate(_enemy, sp.position, Quaternion.identity);
       
    }
}
