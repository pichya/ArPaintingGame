using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    static private bool _isPressed;
    static public bool IsPressed { 
	get { return _isPressed;}  
	set { _isPressed = value; }
    }

    static private bool _isUpdating;
    static public bool IsUpdating { 
	get { return _isUpdating;}  
	set { _isUpdating = value; }
    }
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
