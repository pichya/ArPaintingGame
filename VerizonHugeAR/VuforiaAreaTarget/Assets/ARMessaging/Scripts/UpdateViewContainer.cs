using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateViewContainer : MonoBehaviour
{
    public Transform WorldOrigin;
    public GameObject Photon;
    public Text photonText;

    // Update is called once per frame
    void Update()
    {
	if (WorldOrigin != null)
	{
		if (WorldOrigin.position.x !=0 && WorldOrigin.position.y !=0){
        			this.transform.position = new Vector3(WorldOrigin.position.x, WorldOrigin.position.y, WorldOrigin.position.z);
        			this.transform.rotation = Quaternion.Euler(WorldOrigin.eulerAngles.x, WorldOrigin.eulerAngles.y, WorldOrigin.eulerAngles.z);
			//
			//Photon.SetActive(true);
			photonText.text = "Photon: Active";
		}
	}
    }
}


