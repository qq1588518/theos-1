//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager;

@interface MMRotationDetector : NSObject
{
    long long _orientation;
    CMMotionManager *_motionMgr;
}

+ (id)sharedDetector;
- (void).cxx_destruct;
- (void)beginRotationDetection;
- (void)endRotationDetection;
- (id)init;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (long long)orientationFromAccelerometerData:(CDStruct_39925896)arg1;

@end
