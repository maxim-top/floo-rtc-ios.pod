#import <Foundation/Foundation.h>
#import <floo-ios/floo_proxy.h>
#import "AdaptiveVideoConfig.h"

typedef enum : NSUInteger {
    kMaxEngine = 0x1,
//    kUCloudEngine,
} ERtcEngineType;

@interface RTCEngineManager : NSObject

/**
 创建手机工厂

 @param type 工厂类别
 @return 返回工厂对象
 */
+ (BMXRTCEngine *)engineWithType:(ERtcEngineType)type;
+ (void)setAdaptiveVideoConfig:(AdaptiveVideoConfig *)config type:(ERtcEngineType)type;
+ (void)setAdaptiveVideoEnabled:(BOOL)enabled type:(ERtcEngineType)type;
+ (BOOL)isAdaptiveVideoEnabledWithType:(ERtcEngineType)type;

@end
