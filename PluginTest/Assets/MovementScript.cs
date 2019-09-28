using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;



public class MovementScript : MonoBehaviour
{

    //define the dll
    const string DLL_NAME = "PLUGINSOLUTION";
    [DllImport(DLL_NAME)]

    //SAVING FUNCTION SAVES THE POSITION OF THE CUBE, SPECIFICALLY X, Y, Z
    private static extern void savingFunction(string nameFile, float x, float y, float z);
   


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //MOVEMENT, LEFT, RIGHT AND FORWARD
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.position += Vector3.left;
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.position += Vector3.right;
        }
        if (Input.GetKey(KeyCode.UpArrow))
        {
            transform.position += Vector3.forward;
        }
      

        //SAVING POSITION
        if (Input.GetKeyDown(KeyCode.S))
        {
            Vector3 position = transform.position;
            savingFunction("HOWDY.txt", position.x, position.y, position.z);

        }
        //LOADING POSITION
        if (Input.GetKeyDown(KeyCode.L))
        {

        }

    }
}
