using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class AdsManagment : MonoBehaviour
{
    private BannerView bannerAd;
    private InterstitialAd interstitial;

    public static AdsManagment instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    void Start()
    {
        MobileAds.Initialize(InitializationStatus => { });
        this.RequestBanner();
    }

    private AdRequest CreateAdRequest()
    {
        return new AdRequest.Builder().Build();
    }

    private void RequestBanner()
    {
        string adUnitId = "ca-app-pub-3439278402494015/5997639005";
        this.bannerAd = new BannerView(adUnitId, AdSize.SmartBanner, AdPosition.Bottom);
        this.bannerAd.LoadAd(this.CreateAdRequest());
    }

    public void RequestInterstitial()
    {
        string adUnitId = "ca-app-pub-3439278402494015/2399490569";

        if(this.interstitial != null)
           this.interstitial.Destroy();

        this.interstitial = new InterstitialAd(adUnitId);

        this.interstitial.LoadAd(this.CreateAdRequest());
    }

    public void ShowInterstitial()
    {
        if (this.interstitial.IsLoaded())
        {
            interstitial.Show();
        }
        else
        {
            Debug.Log("Interstitial Ad is not ready yet");
        }
    }

    void Update()
    {

    }
}