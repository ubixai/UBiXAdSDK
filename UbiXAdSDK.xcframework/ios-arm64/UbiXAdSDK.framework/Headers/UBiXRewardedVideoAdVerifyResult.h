//
//  UBiXRewardedVideoAdVerifyResult.h
//  UbiXAdSDK
//
//  Created by fei.li on 2025/12/26.
//
/**
 * 激励视频 服务端验证结果
 * （非服务端验证的，verified将为YES，其他字段无值）
 */
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UBiXRewardedVideoAdVerifyResult : NSObject
/// 验证结果：YES-验证成功；NO-验证失败
@property (nonatomic, assign) BOOL      verified;

/// 平台配置的奖励名称，未配置则为nil或@""
@property (nonatomic, copy  ) NSString *rewardName;

/// 平台配置的奖励数量，未配置则为0
@property (nonatomic, assign) int       rewardAmount;

/// 媒体服务端返回的扩展信息，未返回则为nil或@""
@property (nonatomic, copy  ) NSString *extra;

/// 服务端验证失败时的错误信息
@property (nonatomic, strong) NSError  *error;
@end

NS_ASSUME_NONNULL_END
