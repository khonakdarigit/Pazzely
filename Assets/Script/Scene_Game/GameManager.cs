using Assets.DataLayer;
using Assets.Script;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [SerializeField] GameObject LevelNumber;

    [SerializeField] GameObject CanvasFade;
    [SerializeField] GameObject CanvasYouWin;

    [SerializeField] List<GameObject> Levels;

    [SerializeField] AudioClip audioClip_Click;
    [SerializeField] AudioClip audioClip_BackMusic;
    private AudioSource BackMusic_source_;
    private Action _FadeAndLoadGame;

    internal void FadeAndShowWinner()
    {
        CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
        {
            CanvasYouWin.SetActive(true);
        });
    }

    internal void LevelComplete()
    {
        //LevelNumber.GetComponent<LevelNumber>().LevelComplete();
    }

    // Start is called before the first frame update
    void Start()
    {
        GameElement._gameManager = this;

        StartCoroutine(AfterInitService());


        CanvasFade.SetActive(true);
        CanvasFade.GetComponent<Canvas_Fade>().FadeOut();

        BackMusic_source_ = gameObject.AddComponent<AudioSource>();
        BackMusic_source_.clip = audioClip_BackMusic;
        BackMusic_source_.loop = true;
        StartCoroutine(AudioFadeScript.FadeIn(BackMusic_source_, 0.5f, 0.5f));
    }


    public void PlaySound(AudioClip audioClip)
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 3);
        source_.clip = audioClip;
        source_.volume = 1f;
        source_.Play();
    }
    IEnumerator AfterInitService()
    {
        if (!ApplicationServices.ServiceIsReady || LevelNumber == null)
            yield return new WaitUntil(() => !ApplicationServices.ServiceIsReady || LevelNumber == null);




        //LevelNumber.GetComponent<LevelNumber>().ChaneToLevel(GameData.Level, ApplicationServices.puzzleGameService.GetPuzzleLevel(GameData.Level).IsComplete);
        Levels[GameData.Level - 1].SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            ToMenu();
        }
    }

    public void shufflePuzzle()
    {
        PlaySound(audioClip_Click);
        StartCoroutine(Levels[GameData.Level - 1].GetComponent<Puzzle>().shufflePuzzle(false));
    }


    public void ToMenu(bool fromYouWin = false)
    {
        PlaySound(audioClip_Click);

        Action doThat = new Action(delegate ()
        {
            CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
            {
                SceneManager.LoadScene(0);
            });
        });

        if (fromYouWin)
        {
            MyAdAndRun(delegate ()
            {
                doThat.Invoke();

            });
        }
        else
        {
            doThat.Invoke();

        }


    }



    public void CanvasYouWin_Close()
    {
        FadeBackMusicGroundTo(0.5f);
        PlaySound(audioClip_Click);

        MyAdAndRun(delegate ()
        {
            CanvasYouWin.SetActive(false);
        });


    }

    private void MyAdAndRun(Action value)
    {
        _FadeAndLoadGame = value;
        if (GameData.Level % 2 == 0)
        {
            if (AdsManager.instance.InterstitialAdIsReady(Assets.Script.Ads.Tapsell.InterstitialType.banner))
                AdsManager.instance.ShowInterstitialAd(OnShowComplete, Assets.Script.Ads.Tapsell.InterstitialType.banner);
            else
                _FadeAndLoadGame?.Invoke();
        }
        if (GameData.Level % 4 == 0)
        {
            if (AdsManager.instance.InterstitialAdIsReady(Assets.Script.Ads.Tapsell.InterstitialType.video))
                AdsManager.instance.ShowInterstitialAd(OnShowComplete, Assets.Script.Ads.Tapsell.InterstitialType.video);
            else
                _FadeAndLoadGame?.Invoke();
        }
        else
        {
            _FadeAndLoadGame?.Invoke();
        }

    }
    public void OnShowComplete(bool ShowComplete)
    {
        Log.Add("OnShowComplete");
        //Progress.instance.AddLogWithApi($"{this.GetType().Name}/{MethodBase.GetCurrentMethod().Name}", logLevel.Info, $"ShowInterstitialAd Complete status :{ShowComplete}");
        _FadeAndLoadGame?.Invoke();
    }

    internal void FadeBackMusicGroundTo(float v)
    {
        if (BackMusic_source_.volume > v)
            StartCoroutine(AudioFadeScript.FadeOut(BackMusic_source_, 0.2f, v));
        else
            StartCoroutine(AudioFadeScript.FadeIn(BackMusic_source_, 0.2f, v));
    }

    internal bool InGame()
    {
        return true;
    }
}
