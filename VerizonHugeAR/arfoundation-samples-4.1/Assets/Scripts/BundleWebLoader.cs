using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;

public class BundleWebLoader : MonoBehaviour
{
	public string bundleUrl = "http://localhost/assetbundles/testbundle";
	public string assetName = "BundledObject";
	
	public GameObject energyBall;

    // Start is called before the first frame update
    IEnumerator Start()
    {
   	 string url = bundleUrl;        
   	 var request = UnityEngine.Networking.UnityWebRequestAssetBundle.GetAssetBundle(url, 0);
   	 yield return request.Send();
    	AssetBundle bundle = UnityEngine.Networking.DownloadHandlerAssetBundle.GetContent(request);
    	GameObject AssetLoaded = bundle.LoadAsset<GameObject>(assetName);
         AssetLoaded.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
         AssetLoaded.transform.position = new Vector3(energyBall.transform.position.x, energyBall.transform.position.y, energyBall.transform.position.z);
    	Instantiate(AssetLoaded);
         //
	energyBall.SetActive(false);
    }


}

