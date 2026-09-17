//
//  UBiXBiddingNoticeProtocol.h
//  UbiXAdSDK
//
//  Created by fei.li on 2024/11/27.
//

#import <Foundation/Foundation.h>

#ifndef UBiXBiddingNoticeProtocol_h
#define UBiXBiddingNoticeProtocol_h

/// 竞价失败信息key值
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossInfoKey_LossReason;       // 竞败原因 NSNumber
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossInfoKey_WinPlatform;      // 竞胜方平台 NSString
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossInfoKey_WinPrice;         // 竞胜方价格(eCPM:分) NSNumber(long)
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossInfoKey_WinMaterialURLs;  // 竞胜广告素材地址 NSArray<NSString *>

/// 竞价失败原因（kUBiXBiddingLossInfoKey_LossReason 所对应的value）
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_Error;             // 内部错误
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_Timeout;           // 在有效时间内，未返回广告
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_MaterialFiler;     // ⼴告物料命中素材⿊名单逻辑
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_LessThanFloor;     // 价格低于底价
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_LowerPrice;        // 低于最⾼价
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_BeOccupied;        // 被占量
FOUNDATION_EXTERN NSString *const kUBiXBiddingLossReason_Other;             // 其他原因

/// 广告平台（kUBiXBiddingLossInfoKey_WinPlatform 所对应的value）
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_CSJ;              // 穿山甲
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_KS;               // 快手
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_BD;               // 百度
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_GDT;              // 广点通
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_UBiX;             // UBiX
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_QM;               // 趣盟
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_JD;               // 京东
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_GM;               // gromore
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_iQIYI;            // 爱奇艺
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Tanx;             // TANX
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_YS;               // 优视
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Sigmob;           // sigmob
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_ZHY;              // 章鱼
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_RS;               // 瑞狮
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_iFLY;             // 讯飞
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_MS;               // 美数
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_WM;               // 旺脉
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_BZ;               // 倍孜
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Fancy;            // fancy
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Topon;            // topon
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Tobid;            // tobid
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_AMPS;             // amps
FOUNDATION_EXTERN NSString *const kUBiXBiddingWinPlatform_Other;            // 其他


/// 竞价回传通知，广告填充成功后上报
@protocol UBiXBiddingNoticeProtocol <NSObject>
@required
/**
 * 竞价成功
 * @param secondPrice 二价(eCPM:分)
 */
- (void)sendWinNotice:(long)secondPrice;

/**
 * 竞价失败
 * @param lossInfo key值kUBiXBiddingLossInfoKey, value如例
 * 例：
 * lossInfo = @{
 *   kUBiXBiddingLossInfoKey_LossReason:      kUBiXBiddingLossReason_LowerPrice,
 *   kUBiXBiddingLossInfoKey_WinPlatform:     kUBiXBiddingWinPlatform_KS,
 *   kUBiXBiddingLossInfoKey_WinPrice:        @(2300),
 *   kUBiXBiddingLossInfoKey_WinMaterialURLs: @[@"https://..",@"https://.."]
 * }
 */
- (void)sendLossNotice:(NSDictionary *)lossInfo;
@end

#endif /* UBiXBiddingNoticeProtocol_h */
