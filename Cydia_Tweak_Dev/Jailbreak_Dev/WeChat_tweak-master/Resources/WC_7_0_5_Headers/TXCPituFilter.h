//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCFilter.h"

@interface TXCPituFilter : TXCFilter
{
    id <TXINotifyDelegate> _notify;
    id <TXCPituFilterDelegate> _delegate;
    unsigned long long _outputAngle;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCPituFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEnable;
@property(nonatomic) __weak id <TXINotifyDelegate> notify; // @synthesize notify=_notify;
@property(nonatomic) unsigned long long outputAngle; // @synthesize outputAngle=_outputAngle;
- (void)setBeautyLevel:(float)arg1;
- (void)setChinLevel:(float)arg1;
- (void)setEyeScaleLevel:(float)arg1;
- (void)setFaceBeautyLevel:(float)arg1;
- (void)setFaceShortLevel:(float)arg1;
- (void)setFaceSlimLevel:(float)arg1;
- (void)setFaceVLevel:(float)arg1;
- (void)setMotionTemplate:(id)arg1;
- (void)setNoseSlimLevel:(float)arg1;

@end
