//
//  UBiXAdReviewParams.h
//  UbiXAdSDK
//
//  Created by fei.li on 2023/1/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class UBiXAdReviewParamsImage, UBiXAdReviewParamsVideo;
@interface UBiXAdReviewParams : NSObject
/// 是否是视频广告
@property (nonatomic, assign) BOOL isVideoAd;
/// 素材地址，注意nil/@[] 容错
@property (nonatomic, strong, nullable) NSArray <NSString *> *mediaUrls;
/// 创意id
@property (nonatomic, copy  , nullable) NSString *creativeId;
/// 标题
@property (nonatomic, copy  , nullable) NSString *title;
/// 描述
@property (nonatomic, copy  , nullable) NSString *desc;
/// 包名
@property (nonatomic, copy  , nullable) NSString *packageName;
/// 图片广告素材，注意nil/@[] 容错
@property (nonatomic, strong, nullable) NSArray <UBiXAdReviewParamsImage *> *images;
/// 视频广告素材
@property (nonatomic, strong, nullable) UBiXAdReviewParamsVideo *video;

/// universal-link
@property (nonatomic, copy  , nullable) NSString *universalLinkUrl;
/// deeplink
@property (nonatomic, copy  , nullable) NSString *deeplinkUrl;
/// h5-url or appstore-url
@property (nonatomic, copy  , nullable) NSString *landingPageUrl;
@end


@interface UBiXAdReviewParamsImage : NSObject
/// 素材地址
@property (nonatomic, copy  , nullable) NSString *imageUrl;
/// 宽
@property (nonatomic, assign) int width;
/// 高
@property (nonatomic, assign) int height;
/// 素材id
@property (nonatomic, copy  , nullable) NSString *materialId;
@end


@interface UBiXAdReviewParamsVideo : NSObject
/// 视频素材地址
@property (nonatomic, copy  , nullable) NSString *videoUrl;
/// 封面图地址
@property (nonatomic, copy  , nullable) NSString *coverImageUrl;
/// 视频时长(s)
@property (nonatomic, assign) float duration;
/// 视频素材宽
@property (nonatomic, assign) int width;
/// 视频素材高
@property (nonatomic, assign) int height;
/// 素材id
@property (nonatomic, copy  , nullable) NSString *materialId;
@end
NS_ASSUME_NONNULL_END
