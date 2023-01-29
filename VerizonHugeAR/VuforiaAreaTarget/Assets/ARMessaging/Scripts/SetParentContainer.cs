using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetParentContainer : MonoBehaviour
{
    private PhotonView PV;

    public GameObject SprayEffect;
    public bool SprayToggle;

    void Start()
    {
        PV = GetComponent<PhotonView>();
        GameObject Container = GameObject.FindWithTag("GameController");
        this.transform.SetParent(Container.transform);
	
         SprayToggle = false;
	 SprayEffect.SetActive(false);
    }

    public void ToggleSprayPaintState(){
	if (PV.IsMine){
               SprayToggle = !SprayToggle;
               PV.RPC("UpdateSprayPaintDisplay", RpcTarget.AllBuffered, SprayToggle);
         }
    }

    [PunRPC]
    void UpdateSprayPaintDisplay(bool toggle){
         SprayToggle = toggle;
	SprayEffect.SetActive(SprayToggle);
    }
	

}
