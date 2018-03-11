// Inspired by https://github.com/pwmckenna/react-native-motion-manager
// https://stackoverflow.com/questions/15380632/in-ios-what-is-the-difference-between-the-magnetic-field-values-from-the-core-l

#import <React/RCTBridgeModule.h>
#import <CoreMotion/CoreMotion.h>

@interface Magnetometer : NSObject<RCTBridgeModule> {
    CMMotionManager *_motionManager;
}

- (void) isAvailableWithResolver:(RCTPromiseResolveBlock) resolve
         rejecter:(RCTPromiseRejectBlock) reject;
- (void) setUpdateInterval:(double) interval;
- (void) getUpdateInterval:(RCTResponseSenderBlock) cb;
- (void) getData:(RCTResponseSenderBlock) cb;
- (void) startUpdates;
- (void) stopUpdates;

@end
