using Assets.DataLayer;
using Assets.Script;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.AdaptivePerformance;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class Scene_Start : MonoBehaviour
{
    [SerializeField] GameObject CanvasFade;
    [SerializeField] GameObject LevelsButton_Panel;
    [SerializeField] GameObject LevelsButton_Content;

    [SerializeField] List<UnityEngine.UI.Image> GameLevelsButton;
    [SerializeField] TextMeshProUGUI text_Version;
    [SerializeField] AudioClip audioClip_Click;
    [SerializeField] AudioClip audioClip_BackMusic;

    public static PulishFor polishFor = PulishFor.Bazar;

    // Start is called before the first frame update
    void Start()
    {
        GameElement.Scene_Start = this;
        text_Version.text = $"v : {Application.version}";

        StartCoroutine(AfterInitService());

        CanvasFade.SetActive(true);
        CanvasFade.GetComponent<Canvas_Fade>().FadeOut();

        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        source_.clip = audioClip_BackMusic;
        source_.loop = true;
        StartCoroutine(AudioFadeScript.FadeIn(source_, 0.5f, 0.7f));

    }

    void CLick_PlaySound()
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 3);
        source_.clip = audioClip_Click;
        source_.volume = 1f;
        source_.Play();
    }

    public void CloseApp()
    {
        CLick_PlaySound();
        StartCoroutine(runActionAfter(0.3f, delegate ()
        {
            Application.Quit();
        }));
    }

    public IEnumerator runActionAfter(float s, Action action)
    {
        yield return new WaitForSeconds(s);
        action.Invoke();
    }

    IEnumerator AfterInitService()
    {
        if (!ApplicationServices.ServiceIsReady)
            yield return new WaitUntil(() => !ApplicationServices.ServiceIsReady);

        var Levels = ApplicationServices.puzzleGameService.GetPuzzleLevels();

        var GameLevelsButton = LevelsButton_Content.GetComponentsInChildren<LevelButton>().ToList();


        for (int i = 0; i < GameLevelsButton.Count; i++)
        {
            if (GameLevelsButton[i] == null) continue;
            var _levelButton = GameLevelsButton[i];

            //if (Levels[i].IsComplete)
            //levelImage.color = UnityData.green;

            if (i > 0 && Levels[i - 1].IsComplete)
            {
                _levelButton.Active();

            }
        }

        var PlayerInfo = ApplicationServices.playerInfoService.GetPlayerInfo();
        LevelsButton_Panel.GetComponent<ScrollPanel>().Set_ScrollPosition(PlayerInfo.Setting.ScrollPosition);
    }

    public void GoToLLevel(int LevelId)
    {

        var position = LevelsButton_Panel.GetComponent<ScrollPanel>().Get_ScrollPosition();

        var PlayerInfo = ApplicationServices.playerInfoService.GetPlayerInfo();
        PlayerInfo.Setting.ScrollPosition = position;

        ApplicationServices.playerInfoService.UpdatePlayerInfo(PlayerInfo);

        GameData.Level = LevelId;

        CLick_PlaySound();

        CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
        {
            SceneManager.LoadScene(1);
        });


    }


    public void Contact()
    {
        try
        {


            Application.OpenURL(Helper.AppContactUrl());

        }
        catch (Exception ex)
        {

            //lblerror.text = ex.Message;
        }



    }

    // Update is called once per frame
    void Update()
    {

    }
}
