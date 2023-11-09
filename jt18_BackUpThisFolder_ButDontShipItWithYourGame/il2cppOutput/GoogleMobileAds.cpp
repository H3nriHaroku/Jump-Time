#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6;
// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300 
{
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_3;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::_type
	int32_t ____type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::_orientation
	int32_t ____orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::_width
	int32_t ____width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::_height
	int32_t ____height_3;
};

// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// System.Action GoogleMobileAds.Api.BannerView::OnBannerAdLoaded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBannerAdLoaded_0;
	// System.Action`1<GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.BannerView::OnBannerAdLoadFailed
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___OnBannerAdLoadFailed_1;
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.BannerView::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_2;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_3;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_4;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_5;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_10;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_11;
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::_client
	RuntimeObject* ____client_12;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.InterstitialAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_11;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_12;
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::_client
	RuntimeObject* ____client_13;
	// System.String GoogleMobileAds.Api.InterstitialAd::_adUnitId
	String_t* ____adUnitId_14;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::_canShowAd
	bool ____canShowAd_15;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5  : public RuntimeObject
{
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction_0;
};

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::_client
	RuntimeObject* ____client_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// GoogleMobileAds.Api.AdError

// GoogleMobileAds.Api.AdError

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdRequest

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// GoogleMobileAds.Api.AdSize

// GoogleMobileAds.Api.AdValue

// GoogleMobileAds.Api.AdValue

// GoogleMobileAds.Api.BannerView

// GoogleMobileAds.Api.BannerView

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// GoogleMobileAds.Api.InitializationStatus

// GoogleMobileAds.Api.InitializationStatus

// GoogleMobileAds.Api.InterstitialAd

// GoogleMobileAds.Api.InterstitialAd

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields
{
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* ___instance_2;
};

// GoogleMobileAds.Api.MobileAds

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0

// GoogleMobileAds.Common.AdErrorClientEventArgs

// GoogleMobileAds.Common.AdErrorClientEventArgs

// GoogleMobileAds.Api.AdErrorEventArgs

// GoogleMobileAds.Api.AdErrorEventArgs

// GoogleMobileAds.Api.AdFailedToLoadEventArgs

// GoogleMobileAds.Api.AdFailedToLoadEventArgs

// GoogleMobileAds.Api.AdValueEventArgs

// GoogleMobileAds.Api.AdValueEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// GoogleMobileAds.Api.LoadAdError

// GoogleMobileAds.Api.LoadAdError

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<GoogleMobileAds.Api.AdError>

// System.Action`1<GoogleMobileAds.Api.AdError>

// System.Action`1<GoogleMobileAds.Api.AdValue>

// System.Action`1<GoogleMobileAds.Api.AdValue>

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>

// System.Action`1<GoogleMobileAds.Api.LoadAdError>

// System.Action`1<GoogleMobileAds.Api.LoadAdError>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.Action

// System.Action
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9 (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___0_sender, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.LoadAdError>::Invoke(T)
inline void Action_1_Invoke_m53B66B17CE3490A35AE80626192D1662CFAF9E25_inline (Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___0_sender, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::get_AdValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.AdValue>::Invoke(T)
inline void Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline (Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64 (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* __this, RuntimeObject* ___0_sender, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*, RuntimeObject*, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.AdError>::Invoke(T)
inline void Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline (Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*, AdError_tA3BF7518349885A73447524367693A096B3DD1AE*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3 (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(T)
inline void Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_client;
		__this->____client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_0), (void*)L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mD2183315C9A1F6504900AD43F22BB385765FA9F9 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___0_value, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___0_value;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___0_value, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___0_value;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___0_adUnitId, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___1_adSize, int32_t ___2_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_12), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_12;
		String_t* L_3 = ___0_adUnitId;
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_4 = ___1_adSize;
		int32_t L_5 = ___2_position;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158*, int32_t >::Invoke(14 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
		__this->____client_12 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_12), (void*)(RuntimeObject*)NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___0_request;
		NullCheck(L_1);
		InterfaceActionInvoker1< AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(15 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_12;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_3, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_12;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_9, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClicked(System.Action) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->____client_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdImpressionRecorded(System.Action) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_7;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_7;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnBannerAdLoaded_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnBannerAdLoaded_0;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___0_sender, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___1_args;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = __this->___OnAdFailedToLoad_8;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_8;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_9 = __this->___OnBannerAdLoadFailed_1;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_10 = __this->___OnBannerAdLoadFailed_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m53B66B17CE3490A35AE80626192D1662CFAF9E25_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_5;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_5;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_10;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_6;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_6;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___0_sender, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_11;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_11;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_2;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_2;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___1_args;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_3;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdImpressionRecorded_4;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_client;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___0_adUnitId, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_adUnitId;
		__this->____adUnitId_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_14), (void*)L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m9BDE013724D1AC139CB1BA5B926342F70BF677D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m1ACD7753DE0DF8499C6BB968EF86274F0D57B1C2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_13), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_13;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_4, __this, (intptr_t)((void*)InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = __this->____client_13;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_6, __this, (intptr_t)((void*)InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->____client_13;
		String_t* L_8 = __this->____adUnitId_14;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_9 = ___0_request;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____client_13;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->____canShowAd_15;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(__this, NULL);
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_15 = (bool)0;
		RuntimeObject* L_1 = __this->____client_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_13;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_15 = (bool)0;
		RuntimeObject* L_1 = __this->____client_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(19 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdClicked(System.Action) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_13;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_13;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_11, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<LoadAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_15 = (bool)1;
		InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309(__this, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_6;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<LoadAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___1_error;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = __this->___OnAdFailedToLoad_7;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_7;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_4;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_11;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdImpressionRecorded_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdImpressionRecorded_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__6(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_0 = ___1_error;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_0, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = __this->___OnAdFailedToShow_10;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_10;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = __this->___OnAdFullScreenContentFailed_5;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_10 = __this->___OnAdFullScreenContentFailed_5;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__7(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___0_sender, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___1_args, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_12;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_12;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___1_args;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___1_args;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_client;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_client;
		__this->____client_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_1), (void*)L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mC2DBA6C870EEBF993492FF04A29F4AE567D45C53 (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14(NULL);
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_1 = (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5*)il2cpp_codegen_object_new(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10(L_1, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2), (void*)L_1);
	}

IL_0014:
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_2 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___0_initCompleteAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_0 = (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E*)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_1 = V_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_2 = ___0_initCompleteAction;
		NullCheck(L_1);
		L_1->___initCompleteAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___initCompleteAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_5 = V_0;
		Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* L_6 = (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*)il2cpp_codegen_object_new(Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3(L_6, L_5, (intptr_t)((void*)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE(NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = il2cpp_codegen_get_type(L_3, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		V_1 = L_4;
		Type_t* L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_5, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, RuntimeObject* ___0_initStatusClient, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = __this->___initCompleteAction_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = __this->___initCompleteAction_0;
		RuntimeObject* L_2 = ___0_initStatusClient;
		InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* L_3 = (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*)il2cpp_codegen_object_new(InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline(L_1, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLoadAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___0_value, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___0_value;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) 
{
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_0 = __this->___U3CAdValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___0_value, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___0_value;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
