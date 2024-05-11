using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Canvas_Fade : MonoBehaviour
{
    [SerializeField] GameObject Panel;
    private Action _action;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void DoAfterFade()
    {
        _action.Invoke();
        FadeOut();
    }
    public void EndFade()
    {
        gameObject.SetActive(false);
    }




    internal void FadeOut()
    {
        GetComponent<Animator>().SetTrigger("FadeOut");
    }

    internal void FadeIn()
    {
        GetComponent<Animator>().SetTrigger("FadeIn");
    }

    internal void Show(Action action)
    {
        _action = action;
        FadeIn();
    }
}
