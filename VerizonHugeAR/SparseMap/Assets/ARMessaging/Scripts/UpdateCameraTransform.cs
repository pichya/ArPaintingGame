using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class UpdateCameraTransform : MonoBehaviourPun
{
    
   // public GameObject ARCameraPointer;
    public GameObject ARCameraRotater;
    //public GameObject WorldOriginPoint;

    void Start()
    {
	//ARCameraPointer = GameObject.FindWithTag("Player");
         ARCameraRotater = GameObject.FindWithTag("CameraFollow");
    }

    void Update()
    {
	if (photonView.IsMine == true){
	      this.transform.localPosition = new Vector3 (ARCameraRotater.transform.localPosition.x, ARCameraRotater.transform.localPosition.y, ARCameraRotater.transform.localPosition.z);
               this.transform.localEulerAngles = new Vector3 (ARCameraRotater.transform.localEulerAngles.x, ARCameraRotater.transform.localEulerAngles.y, ARCameraRotater.transform.localEulerAngles.z);
	}
    }

}
