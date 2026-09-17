//
//  UbiXError.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UBiXAdSDKErrorCode) {
    UBiXAdSDKErrorCodeSDKDisabled         = 10004,  // sdk不可用
    UBiXAdSDKErrorCodeAppIdInvalid        = 10001,  // 无效的appId
    UBiXAdSDKErrorCodePlacementIdInvalid  = 10002,  // 无效的placementId
    UBiXAdSDKErrorCodeAdSizeInvalid       = 10003,  // 无效的adsize
    UBiXAdSDKErrorCodeAdMaterialInvalid   = 10009,  // 无效的adm
    UBiXAdSDKErrorCodeRunThreadInvalid    = 10010,  // 当前线程不可执行
    UBiXAdSDKErrorCodeOSVersionLow        = 10012,  // 系统版本低
    UBiXAdSDKErrorCodeNotFill             = 20001,  // 无填充
    UBiXAdSDKErrorCodeTimeout             = 20003,  // 请求超时
    UBiXAdSDKErrorCodeRenderFail          = 30007,  // 渲染失败
    UBiXAdSDKErrorCodeMaterialError       = 30004,  // 渲染失败,素材下载失败
    UBiXAdSDKErrorCodeCacheError          = 40001,  // 素材缓存失败
    UBiXAdSDKErrorCodeShowFail            = 50001,  // 曝光失败
    UBiXAdSDKErrorCodeAdNotReady          = 50002,  // 广告不可用
    UBiXAdSDKErrorCodeContainerDisabled   = 50003,  // 容器不可用
    UBiXAdSDKErrorCodeVideoPlayError      = 50010,  // 视频播放失败
    UBiXAdSDKErrorCodeRewaredFailError    = 60001,  // 激励视频验证失败
};


NS_ASSUME_NONNULL_END
