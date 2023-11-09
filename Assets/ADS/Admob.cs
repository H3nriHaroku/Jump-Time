using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;
using UnityEngine.UI;

public class Admob : MonoBehaviour
{
    private BannerView adBanner;
    private InterstitialAd adInterstitial;
    private string idApp, idBanner, idInterstitial;

    [SerializeField] Button BtnInterstitial;

    // Start is called before the first frame update
    void Start()
    {
        BtnInterstitial.interactable = false;

        
        idBanner = "ca-app-pub-3439278402494015/5997639005";
        idInterstitial = "ca-app-pub-3439278402494015/2399490569";

     
        RequestBannerAd();
        RequestInterstitialAd();
    }

    #region Banner Methods
    public void RequestBannerAd()
    {
        adBanner = new BannerView(idBanner, AdSize.Banner, AdPosition.Bottom);
        AdRequest request = AdRequestBuilt();
        adBanner.LoadAd(request);
    }

    public void DestroyBannerAd()
    {
        if(adBanner != null)
        {
            adBanner.Destroy();
        }
    }
    #endregion

    #region Interstitial methods
    public void RequestInterstitialAd()
    {
        adInterstitial = new InterstitialAd(idInterstitial);
        AdRequest request = AdRequestBuilt();
        adInterstitial.LoadAd(request);

        //attach events
        adInterstitial.OnAdLoaded += this.HandleOnAdLoaded;
        adInterstitial.OnAdOpening += this.HandleOnAdOpening;
        adInterstitial.OnAdClosed += this.HandleOnAdClosed;


    }       

    public void ShowInterstitialAd()
    {
        if(adInterstitial.IsLoaded())
        {
            adInterstitial.Show();
        }
    }

    public void DestroyInterstitialAd()
    {
        adInterstitial.Destroy();
    }

    //Interstitial Ad Events
    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        //this metod executes when interstitial ad is Loaded and ready to show
        BtnInterstitial.interactable = true;
    }
    public void HandleOnAdOpening(object sender, EventArgs args)
    {
        //this metod executes when interstitial ad is show
        BtnInterstitial.interactable = false;
    }
    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        //this metod executes when interstitial ad is closed
        adInterstitial.OnAdLoaded -= this.HandleOnAdLoaded;
        adInterstitial.OnAdOpening -= this.HandleOnAdOpening;
        adInterstitial.OnAdClosed -= this.HandleOnAdClosed;

        RequestInterstitialAd();
    }
    #endregion

    AdRequest AdRequestBuilt()
    {
        return new AdRequest.Builder().Build();
    }

    void OnDestroy()
    {
        DestroyBannerAd();
        DestroyInterstitialAd();

        //dettach event
        adInterstitial.OnAdLoaded -= this.HandleOnAdLoaded;
        adInterstitial.OnAdOpening -= this.HandleOnAdOpening;
        adInterstitial.OnAdClosed -= this.HandleOnAdClosed;
    }
}
