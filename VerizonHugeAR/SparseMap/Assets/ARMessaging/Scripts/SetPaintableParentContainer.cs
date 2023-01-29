using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SetPaintableParentContainer : MonoBehaviour
{
    private PhotonView PV;

    public string PaintableState;

    void Start()
    {
        // Transpose Local Position into Container game object
        PV = GetComponent<PhotonView>();
        GameObject Container = GameObject.FindWithTag("GameController");
        this.transform.SetParent(Container.transform);
        //
	if (PV.IsMine == true){
	      this.transform.localPosition = new Vector3 (0f, 0f, 3f);
	      this.transform.localEulerAngles = new Vector3 (0f, 0f, 0f);
	}
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
