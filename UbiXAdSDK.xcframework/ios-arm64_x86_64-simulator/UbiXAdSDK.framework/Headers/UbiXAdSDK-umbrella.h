#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "UBiXBannerAdView.h"
#import "UBiXInterstitialAd.h"
#import "UBiXNativeAd.h"
#import "UBiXNativeAdData.h"
#import "UBiXNativeAdObject.h"
#import "UBiXNativeAdRelatedView.h"
#import "UBiXNativeAdVideoReporter.h"
#import "UBiXNativeAdVideoView.h"
#import "UBiXNativeExpressAd.h"
#import "UBiXNativeExpressAdView.h"
#import "UBiXRewardedVideoAd.h"
#import "UBiXRewardedVideoAdModel.h"
#import "UBiXRewardedVideoAdVerifyResult.h"
#import "UBiXSplashAd.h"
#import "UBiXAdReviewParams.h"
#import "UbiXAdSDK.h"
#import "UBiXAdSDKDefines.h"
#import "UBiXAdSDKErrorCode.h"
#import "UBiXAdSDKManager.h"
#import "UBiXBiddingNoticeProtocol.h"
#import "UBiXLogger.h"
#import "UBiXPrivacyConfig.h"

FOUNDATION_EXPORT double UbiXAdSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char UbiXAdSDKVersionString[];

