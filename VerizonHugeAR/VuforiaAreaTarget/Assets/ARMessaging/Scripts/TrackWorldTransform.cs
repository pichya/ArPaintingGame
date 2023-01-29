using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TrackWorldTransform : MonoBehaviour
{
    public Text WToutput;
    public Text CToutput;
  
    public GameObject Axis;
    public GameObject ARcamera;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        WToutput.text = "WorldTransform - X:"+ Axis.transform.position.x + " Y:" +Axis.transform.position.y + " Z:"+Axis.transform.position.z;
        CToutput.text = "CameraTransform - X:"+ ARcamera.transform.position.x + " Y:" + ARcamera.transform.position.y + " Z:"+ ARcamera.transform.position.z;
    }

}
