using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace SimpleDrawing {
  public class DoodleDraw: MonoBehaviour,
  IUpdateSelectedHandler,
  IPointerDownHandler,
  IPointerUpHandler {

    public bool isPressed;

    [SerializeField]
    Color penColor = Color.red;

    [SerializeField]
    int penWidth = 3;

    [SerializeField]
    bool erase = false;

    Vector2 defaultTexCoord = Vector2.zero;
    Vector2 previousTexCoord;

    public GameObject sprayTop;

    public void OnUpdateSelected(BaseEventData data) {
      if (isPressed) {

        Vector3 rayOrigin = new Vector3(0.5f, 0.5f, 0f); // center of the screen
        float rayLength = 100f;

        Ray ray = Camera.main.ViewportPointToRay(rayOrigin);
        Debug.DrawLine(ray.origin, ray.direction * rayLength, Color.red);

        RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo)) {

          if (hitInfo.collider != null && hitInfo.collider is MeshCollider) {
            var drawObject = hitInfo.transform.GetComponent < DrawableCanvas > ();
            if (drawObject != null) {
              Vector2 currentTexCoord = hitInfo.textureCoord;
              if (erase) {
                drawObject.Erase(currentTexCoord, previousTexCoord, penWidth);
              } else {
                drawObject.Draw(currentTexCoord, previousTexCoord, penWidth, penColor);
              }
              previousTexCoord = currentTexCoord;
            }
          }

        } else {
          previousTexCoord = defaultTexCoord;
        }

      }
    }
    public void OnPointerDown(PointerEventData data) {
      isPressed = true;
      //TransformTop( - 0.01f);
    }
    
    public void OnPointerUp(PointerEventData data) {
      isPressed = false;
      Debug.Log("Trigger Data");
      EventManager.TriggerEvent("draw");
      //TransformTop(0.01f);
    }

    public void TransformTop(float displacement) {
      Vector3 startingPos = sprayTop.transform.position;
      Vector3 newPos = new Vector3(sprayTop.transform.position.x, sprayTop.transform.position.y + displacement, sprayTop.transform.position.z);
      sprayTop.transform.position = newPos;
    }
  }
}