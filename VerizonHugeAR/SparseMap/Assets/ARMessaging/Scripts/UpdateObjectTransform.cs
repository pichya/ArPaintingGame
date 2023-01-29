using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class UpdateObjectTransform : MonoBehaviourPunCallbacks, IPunObservable
{
    
    public Transform WorldTransform;
    public Transform ObjectTransform;
    //
    public Vector3 RoomPosition;
    public Quaternion RoomRotation;

    // Start is called before the first frame update
    void Start()
    {
        ObjectTransform = this.transform;
    }

    void FixedUpdate()
    {
	RoomPosition = ObjectTransform.position - WorldTransform.position;
	RoomRotation = Quaternion.Inverse(ObjectTransform.rotation) * WorldTransform.rotation;
    }


    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(stream.IsWriting)
	{
		stream.SendNext(RoomPosition);
		//stream.SendNext(RoomRotation);
	}
	else
	{
		this.RoomPosition = (Vector3)stream.ReceiveNext();
		//this.RoomRotation = (Quaternion)stream.ReceiveNext();
                 this.transform.position = RoomPosition + WorldTransform.position;
                 //this.transform.rotation = RoomRotation * WorldTransform.rotation;
	}
    }
}
