using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using easyar;

using SpatialMap_SparseSpatialMap;

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadMapController : MonoBehaviour
{

    //MapSession 加载地图相关
    public SparseSpatialMapController mapTemp;
    private MapSession mapSession;
    //
    public ARSession session;
    public SparseSpatialMapWorkerFrameFilter mapWorker;
    public VideoCameraDevice videoCamera; 

    //手动加载
    //public List<Color32> color32s = new List<Color32>();
    //List<SparseSpatialMapController> MapControllers = new List<SparseSpatialMapController>();


    private void Awake()
    {
#if UNITY_EDITOR
        GameObject.FindObjectOfType<VIOCameraDeviceUnion>().enabled = false;
#endif
        //session = EasyARSession;
        //mapWorker = FindObjectOfType<SparseSpatialMapWorkerFrameFilter>();
        //videoCamera = session.GetComponentInChildren<VideoCameraDevice>();

    }

    private void Start()
    {
        mapSession = new MapSession(mapWorker, MapMetaManager.LoadAll());
        mapSession.LoadMapMeta(mapTemp, false);
        /*
	mapSession.MapLocalized += (MapData) =>
        {
            //识别出来后播放一段声音 提示用户已经加载出来了
            if (aS.isPlaying == false)
            {
                aS.PlayOneShot(aS.clip);
            }
        };
	*/
        videoCamera.DeviceOpened += () =>
        {
            if (videoCamera == null)
            {
                return;
            }
            videoCamera.FocusMode = CameraDeviceFocusMode.Continousauto;
        };
    }

    ///// <summary>
    ///// 手动加载 meta 信息   暂时没有用，此时使用的时 mapSession 来加载地图信息
    ///// </summary>
    //private string mapName;
    //private void LoadMeta(List<MapMeta> mapMetas)
    //{

    //    int i = 0;
    //    foreach (var item in mapMetas)
    //    {
    //        var tempController = Instantiate(mapTemp).GetComponent<SparseSpatialMapController>();

    //        tempController.SourceType = SparseSpatialMapController.DataSource.MapManager;
    //        tempController.MapManagerSource.ID = item.Map.ID;
    //        tempController.MapManagerSource.Name = item.Map.Name;
    //        tempController.MapWorker = mapWorker;

    //        tempController.MapLoad += (arg1, arg2, arg3) =>
    //        {
    //            Debug.Log("\t下载信息：" + (arg2 ? "成功" : "失败：" + arg3) + Environment.NewLine +
    //                "\t名称" + arg1.Name + Environment.NewLine +
    //                "\tID" + arg1.ID + Environment.NewLine);
    //            mapName = arg1.Name;
    //        };
    //        tempController.MapLocalized += () => { Debug.Log("\t定位成功: " + mapName); };
    //        tempController.MapStopLocalize += () => { Debug.Log("\t定位停止 " + mapName); };
    //        tempController.PointCloudParticleParameter.StartColor = color32s[i];
    //        MapControllers.Add(tempController);
    //        i++;
    //    }
    //    mapWorker.Localizer.startLocalization();
    //}



    public void OpenPoint(bool flag)
    {
        foreach (var item in mapSession.Maps)
        {
            item.Controller.ShowPointCloud = flag;
        }
    }

    private void DestroySession()
    {
        if (mapSession != null)
        {
            mapSession.Dispose();
            mapSession = null;
        }
    }

    private void OnDestroy()
    {
        DestroySession();
    }


}
