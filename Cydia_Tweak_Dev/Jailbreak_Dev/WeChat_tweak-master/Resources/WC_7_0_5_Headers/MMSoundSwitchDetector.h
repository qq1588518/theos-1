//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface MMSoundSwitchDetector : MMObject
{
    unsigned int _soundId;
    NSMutableArray *_completeHandlers;
    double _beginTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)checkSoundSwitchStatus:(CDUnknownBlockType)arg1;
- (void)complete;
@property(retain, nonatomic) NSMutableArray *completeHandlers; // @synthesize completeHandlers=_completeHandlers;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;

@end
