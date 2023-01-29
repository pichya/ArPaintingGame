using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class PhotonPlayer : MonoBehaviour
{
    private PhotonView PV;
    public GameObject myAvatar;

    // Start is called before the first frame update
    void Start()
    {
        PV = GetComponent<PhotonView>();
	Debug.Log("INSTA");
	if (PV.IsMine)
	{
		Debug.Log("INSTA -- Q");
		myAvatar = PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "SprayPaintAvatar"), new Vector3(0f, 1.5f, 0f), Quaternion.identity, 0);
		
	}
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
