//
//  UbiXAdSDKManager.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/5/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UBiXAdSDKManager : NSObject

#pragma mark - SDK Initialization

/**
 * SDK 初始化接口，请在 app 初始化时调用，请勿频繁初始化。
 * @param appId - UbiX开发者后台创建的appId
 */
+ (void)initWithAppId:(NSString *)appId;

/**
 * 获取 SDK 版本
 */
+ (NSString *)SDKVersion;

/**
 * 设置全局模版广告logo，推荐比例22:10
 * 请勿频繁更换
 */
+ (void)setCustomLogoImage:(UIImage *)logoImage;

@end

