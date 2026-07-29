#import <Foundation/Foundation.h>
#import <floo-ios/floo_proxy.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdaptiveVideoConfig : NSObject

@property(nonatomic, assign, readonly) BOOL enabled;
@property(nonatomic, assign, readonly) BMXVideoProfile initialProfile;
@property(nonatomic, copy, readonly) NSArray<NSNumber *> *profileLadder;
@property(nonatomic, assign, readonly) NSInteger degradeEventCount;
@property(nonatomic, assign, readonly) NSTimeInterval upgradeStableMs;
@property(nonatomic, assign, readonly) NSTimeInterval switchCooldownMs;
@property(nonatomic, assign, readonly) NSTimeInterval failureCooldownMs;

- (instancetype)initWithEnabled:(BOOL)enabled
                 initialProfile:(BMXVideoProfile)initialProfile
                   profileLadder:(NSArray<NSNumber *> *)profileLadder
              degradeEventCount:(NSInteger)degradeEventCount
                upgradeStableMs:(NSTimeInterval)upgradeStableMs
               switchCooldownMs:(NSTimeInterval)switchCooldownMs
              failureCooldownMs:(NSTimeInterval)failureCooldownMs NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
