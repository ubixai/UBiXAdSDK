//
//  UBiXAdReviewParams.h
//  UbiXAdSDK
//
//  Created by fei.li on 2023/1/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UBiXAdReviewParams : NSObject
/// 是否是视频广告
@property (nonatomic, assign) BOOL isVideoAd;
/// 素材地址
@property (nonatomic, strong) NSArray <NSString *> *mediaUrls;
/// 创意id
@property (nonatomic, copy  ) NSString *creativeId;
/// 标题
@property (nonatomic, copy  ) NSString *title;
/// 描述
@property (nonatomic, copy  ) NSString *desc;

@end

NS_ASSUME_NONNULL_END
