//
//  UBiXRewardedVideoAdModel.h
//  UbiXAdSDK
//
//  Created by fei.li on 2025/12/25.
//

/**
 * 激励视频用户&拓展信息
 */
@interface UBiXRewardedVideoAdModel : NSObject
/// 用户id
@property (nonatomic, copy  ) NSString *userId;

/// 扩展信息: 透传到媒体服务器
@property (nonatomic, copy  ) NSString *extra;

@end
