//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKCodelessIndexer : NSObject
{
}

+ (_Bool)_codelessSetupTimestampIsValid:(id)arg1;
+ (void)checkCodelessIndexingSession;
+ (id)currentSessionDeviceID;
+ (id)currentViewTree;
+ (id)dimensionOf:(id)arg1;
+ (void)enable;
+ (id)extInfo;
+ (void)loadCodelessSettingWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)recursiveCaptureTree:(id)arg1;
+ (id)requestToLoadCodelessSetup:(id)arg1;
+ (id)screenshot;
+ (void)setupGesture;
+ (void)startIndexing;
+ (void)uploadIndexing;
+ (void)uploadIndexing:(id)arg1;

@end
