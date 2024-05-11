using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{
    [SerializeField] Image LevelImage;
    [SerializeField] Image LockImage;

    internal void Active()
    {
        LevelImage.color = new Color(1f, 1f, 1f, 1f);
        this.GetComponent<Button>().interactable = true;
        LockImage.gameObject.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
