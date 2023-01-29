using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowARCamera : MonoBehaviour
{
    public GameObject arCamera;

    // Update is called once per frame
    void Update()
    {
        this.transform.position = new Vector3 (arCamera.transform.position.x, arCamera.transform.position.y, arCamera.transform.position.z);

	Vector3 EulerRotation = new Vector3(arCamera.transform.eulerAngles.x, arCamera.transform.eulerAngles.y, arCamera.transform.eulerAngles.z);
        this.transform.rotation = Quaternion.Euler(EulerRotation);
    }
}
