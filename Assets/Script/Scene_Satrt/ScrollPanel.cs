using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollPanel : MonoBehaviour
{
    public ScrollRect scrollRect;

    public float horizontalNormalizedPosition;

    [SerializeField]
    public bool ShowCenterItems;
    // Start is called before the first frame update
    void Start()
    {
        //scrollRect = GetComponent<ScrollRect>();

        if (!ShowCenterItems)
        {
            scrollRect.content.GetComponent<GridLayoutGroup>().CalculateLayoutInputVertical();
            //scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();

            scrollRect.horizontalNormalizedPosition = horizontalNormalizedPosition;
        }
    }
    public IEnumerator FixSize()
    {
        if (!ShowCenterItems)
        {
            yield return new WaitForSecondsRealtime(0.2f);

            scrollRect.content.GetComponent<GridLayoutGroup>().CalculateLayoutInputVertical();
            //scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();
            scrollRect.horizontalNormalizedPosition = horizontalNormalizedPosition;
        }
    }

    public float Get_ScrollPosition()
    {
        return scrollRect.horizontalNormalizedPosition;
    }
    public void Set_ScrollPosition(float position)
    {
        if (scrollRect != null)
        {
            scrollRect.content.GetComponent<GridLayoutGroup>().CalculateLayoutInputVertical();
            //scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();

            scrollRect.horizontalNormalizedPosition = position;
        }

        horizontalNormalizedPosition = position;
    }

}
