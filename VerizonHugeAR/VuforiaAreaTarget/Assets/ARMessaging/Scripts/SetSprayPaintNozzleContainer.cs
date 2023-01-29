using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetSprayPaintNozzleContainer : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        GameObject Container = GameObject.FindWithTag("Nozzle");
        this.transform.SetParent(Container.transform);
    }
}
