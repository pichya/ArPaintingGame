using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetToolsParentContainer : MonoBehaviour
{
    private PhotonView PV;

    public string PaintableState;

    void Start()
    {
        // Transpose Local Position into Container game object
        PV = GetComponent<PhotonView>();
        GameObject Container = GameObject.FindWithTag("GameController");
        this.transform.SetParent(Container.transform);
    }

    public void SetPaintState(){
	if (PV.IsMine){
               PV.RPC("UpdateDisplay", RpcTarget.AllBuffered, PaintableState);
         }
    }

    [PunRPC]
    void UpdateDisplay(string state){
         PaintableState = state;
    }
	

}
