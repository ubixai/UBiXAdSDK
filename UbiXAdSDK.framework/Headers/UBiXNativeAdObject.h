//
//  UBiXNativeAdObject.h
//  UbiXAdSDK
//
//  Created by fei.li on 2023/1/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UBiXAdSDKDefines.h"
#import "UBiXNativeAdData.h"
#import "UBiXBiddingNoticeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class UBiXNativeAdObject;
@protocol UBiXNativeAdObjectDelegate <NSObject>
/**
 * 广告展示成功: container展示时调用
 */
- (void)ubixNativeAdObjectDidShow:(UBiXNativeAdObject *)nativeAdObject;

/**
 * 2.4.1新增
 * 广告展示失败: 如isValid=NO时进行了广告展示。
 * 无效的曝光。
 */
- (void)ubixNativeAdObjectFailedToShow:(UBiXNativeAdObject *)nativeAdObject withError:(NSError *)error;

/**
 * 广告点击
 */
- (void)ubixNativeAdObjectDidClick:(UBiXNativeAdObject *)nativeAdObject;

/**
 *  广告转化完成
 */
- (void)ubixNativeAdObjectDidFinishConversion:(UBiXNativeAdObject *)nativeAdObject interactionType:(UBiXAdInteractionType)interactionType;
@end

/**
 * 广告返回对象，需被强引用
 */
//@class UBiXNativeAdData;
@interface UBiXNativeAdObject : NSObject <UBiXBiddingNoticeProtocol>
/// 广告素材数据
@property (nonatomic, strong, readonly) UBiXNativeAdData *adData;

/// 广告是否可用；应在container首次将要添加到屏幕上时，检查该状态，否则会产生曝光失败或无效曝光，影响收入
@property (nonatomic, assign, readonly, getter=isValid) BOOL valid;

/// 是否支持摇一摇，YES时需开发者渲染摇一摇组件，并通过shakeOn/Off控制传感器监控
@property (nonatomic, assign, readonly, getter=isSupportCustomShake) BOOL supportCustomShake;

/// 交互回调
@property (nullable, nonatomic, weak) id <UBiXNativeAdObjectDelegate> delegate;

/// @required 展示落地页的ViewController(present方式)
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 * 注册曝光容器和点击view
 * @param clickableViews 可点击的views。开发者需设置userInteractionEnabled=YES
 */
- (void)registerContainer:(__kindof UIView *)container clickableViews:(NSArray <__kindof UIView *> *)clickableViews;

/**
 * 注册曝光容器和点击view、点滑view
 * @param clickableViews 可点击的views。开发者需设置userInteractionEnabled=YES
 * @param slideViews 可响应滑动影响的views。开发者需设置userInteractionEnabled=YES
 */
- (void)registerContainer:(__kindof UIView *)container clickableViews:(NSArray <__kindof UIView *> *)clickableViews slideViews:(NSArray <__kindof UIView *> *)slideViews;

/**
 * 注销view绑定
 */
- (void)unregisterView;

/**
 * 获取广告价格，单位(分)
 */
- (NSInteger)eCPM;

/**
 * 开启监听传摇一摇，主线程调用
 * 仅当supportCustomShake=YES时有效
 */
- (void)shakeOn;

/**
 * 关闭监听摇一摇，主线程调用
 * 仅当supportCustomShake=YES时有效
 */
- (void)shakeOff;
@end

NS_ASSUME_NONNULL_END
