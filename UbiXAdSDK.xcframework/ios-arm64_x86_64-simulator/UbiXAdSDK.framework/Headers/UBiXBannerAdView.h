//
//  UBiXBannerAdView.h
//  UbiXAdSDK
//
//  Created by fei.li on 2023/1/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UBiXAdSDKDefines.h"
#import "UBiXBiddingNoticeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class UBiXBannerAdView;
@protocol UBiXBannerAdViewDelegate <NSObject>
/**
 * 广告请求成功，并且素材加载完成。设置了自动刷新时，会被多次调用
 */
- (void)ubixBannerAdViewDidLoad:(UBiXBannerAdView *)bannerAdView;

/**
 * 广告请求失败
 * @param error 失败原因
 */
- (void)ubixBannerAdViewFailedToLoad:(UBiXBannerAdView *)bannerAdView withError:(NSError *)error;

/**
 * 广告展示成功，新的广告被展示后也会调用
 */
- (void)ubixBannerAdViewDidShow:(UBiXBannerAdView *)bannerAdView;

/**
 * 2.4.1新增
 * 广告展示失败: 如isValid=NO时进行了广告展示。
 * 无效的曝光。
 */
- (void)ubixBannerAdViewFailedToShow:(UBiXBannerAdView *)bannerAdView withError:(NSError *)error;

/**
 * 广告点击
 */
- (void)ubixBannerAdViewDidClick:(UBiXBannerAdView *)bannerAdView;

/**
 * 广告关闭，代表的是点击了关闭按钮
 */
- (void)ubixBannerAdViewDidClose:(UBiXBannerAdView *)bannerAdView;

/**
 * 广告转化完成：关闭落地页或者跳转到其他应用
 */
- (void)ubixBannerAdViewDidFinishConversion:(UBiXBannerAdView *)bannerAdView interactionType:(UBiXAdInteractionType)interactionType;
@end
/**
 * banner广告对象，需被强引用
 */
@class UBiXAdReviewParams;
@interface UBiXBannerAdView : UIView <UBiXBiddingNoticeProtocol>
/// 当前广告的广告位id
@property (nonatomic, copy, readonly) NSString *placementId;

/// 广告是否可用；应在首次将要添加到屏幕上时，检查该状态，否则会产生曝光失败或无效曝光，影响收入
@property (nonatomic, assign, readonly, getter=isValid) BOOL valid;

/// 回调委托对象
@property (nonatomic, weak) id<UBiXBannerAdViewDelegate> delegate;

/// @required 用于打开落地页，确保ta当前无presentedVC，否则将无法打开落地页
@property (nonatomic, weak) UIViewController *rootViewController;

/// 当前创意素材（刷新后会改变）
@property (nonatomic, strong, readonly) UBiXAdReviewParams *reviewParams;

/**
 * 初始化
 * @param placementId 广告位id
 * @param adSize 广告size 建议比例320x50
 */
- (instancetype)initWithPlacementId:(NSString *)placementId
                             adSize:(CGSize)adSize;

/**
 *  加载广告
 */
- (void)loadAd;

/**
 * 获取当前曝光的广告价格，单位(分)
 */
- (NSInteger)eCPM;

/**
 * 在不在使用banner时调用
 *   [bannerView removeFromSuperview];
 *   [bannerView destoryAd]
 */
- (void)destoryAd;
@end

NS_ASSUME_NONNULL_END
