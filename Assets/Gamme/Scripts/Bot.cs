using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bot : MonoBehaviour
{
    public Transform[] nodes;
    public int current;

    [Header("Detection")]
    public float detectionValue;
    public bool detecting; 
    public Slider detectionSlider;
    [Header("Gold")]
    public float goldValue;
    public bool taking;
    public Slider goldSlider;

    [Header("Directions")]
    public float changeDirectionTime;
    float nextDirectionTime;
    
    public GameObject left;
    public GameObject right;
    public GameObject up;
    public GameObject down;

    public float speed;

    public Rigidbody2D rb2D;

    public float distanceCheck = 2f;
  
    Vector2 lastPos;
    bool goingBack;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(detecting == true) 
        {
            if (detectionValue >= 100)
            {
                detectionValue = 100;
                speed = 0;
                Debug.LogError("Thief Detected");
            }
            else 
            {
                detectionValue += 24 * Time.deltaTime;
            }

            detectionSlider.value = detectionValue;
        }
        else 
        {
            detectionValue -= 24 * Time.deltaTime;
            if(detectionValue <= 0) 
            {
                detectionValue = 0;
            }
            detectionSlider.value = detectionValue;
        }
    

        lastPos = transform.position;

        float distance = Vector2.Distance(transform.position, nodes[current].position);

        transform.position = Vector3.Lerp(transform.position, nodes[current].position, (Time.deltaTime * speed) / distance);

        if (distance <= distanceCheck && current < nodes.Length - 1 && goingBack == false)
        {
            current++;
        }
        else
        if(current == nodes.Length - 1 || goingBack == true) 
        {
            if(taking == false && goldValue == 100) 
            {
                if (distance <= distanceCheck && current > 0)
                {
                    goingBack = true;
                    current--;
                }
            }
            Debug.Log("going back now");
        }

        Vector2 pos = (Vector2)transform.position - lastPos;

        if (pos.x > 0.01f)
        {
            down.SetActive(false);
            up.SetActive(false);
            right.SetActive(true);
            left.SetActive(false);
        }
        else
        if (pos.x < -0.01f)
        {
            down.SetActive(false);
            up.SetActive(false);
            right.SetActive(false);
            left.SetActive(true);
        }
        else
        if (pos.y > 0.01f)
        {
            up.SetActive(true);
            down.SetActive(false);
            right.SetActive(false);
            left.SetActive(false);
        }
        else
        if (pos.y < -0.01f)
        {
            down.SetActive(true);
            up.SetActive(false);
            right.SetActive(false);
            left.SetActive(false);
        }
    }

    void OnDrawGizmos()
    {
        for(int i = 0; i < nodes.Length; i++)        
        {
            if (i + 1 == nodes.Length) break;
            Gizmos.color = Color.red;
            Gizmos.DrawLine(nodes[i].position, nodes[i+1].position);
        }

        foreach (Transform node in nodes)
        {
          
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.CompareTag("GameController")) 
        {
            taking = true;

            goldValue += 32 * Time.deltaTime;

            if (goldValue >= 100)
            {
                goldValue = 100;
                taking = false;
            }

            goldSlider.value = goldValue;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("GameController"))
        {
            taking = false;
        }
    }
}
