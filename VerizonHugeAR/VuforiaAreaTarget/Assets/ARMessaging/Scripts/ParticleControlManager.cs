using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ParticleControlManager : MonoBehaviour
{
    public GameObject particlePrefab;
    public Transform spawnTransform;

     // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
    }
  
    void CreateParticle()
    {
	PhotonNetwork.Instantiate(particlePrefab.name, spawnTransform.position, Quaternion.identity, 0);
    }
}
