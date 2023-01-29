using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateViewContainer : MonoBehaviour
{
    public GameObject WorldOrigin;
    public GameObject Photon;
    //public Text photonText;

    // Update is called once per frame
    void Update()
    {
	if (WorldOrigin != null)
	{
		if (WorldOrigin.transform.position.x !=0 && WorldOrigin.transform.position.y !=0){
        			this.transform.position = new Vector3(WorldOrigin.transform.position.x, WorldOrigin.transform.position.y, WorldOrigin.transform.position.z);
        			this.transform.rotation = Quaternion.Euler(WorldOrigin.transform.eulerAngles.x, WorldOrigin.transform.eulerAngles.y, WorldOrigin.transform.eulerAngles.z);
			//
			//Photon.SetActive(true);
			//photonText.text = "Photon: Active";
		}
	}else{
		WorldOrigin = GameObject.FindWithTag("WorldOrigin");
	}
    }
}


