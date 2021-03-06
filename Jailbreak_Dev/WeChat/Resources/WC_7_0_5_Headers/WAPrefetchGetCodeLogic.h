//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "IWALocalCacheMgrExt.h"
#import "WAPackageDownloadUrlFetcherExtension.h"

@class NSMutableArray, NSString;

@interface WAPrefetchGetCodeLogic : MMObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt, CNetworkStatusExt>
{
    NSMutableArray *_arrRequestingCmd;
    NSMutableArray *_arrWaitingCmd;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)addCmdIntoRequestingQueue:(id)arg1;
- (void)addCmdIntoWaitingQueue:(id)arg1;
@property(retain, nonatomic) NSMutableArray *arrRequestingCmd; // @synthesize arrRequestingCmd=_arrRequestingCmd;
@property(retain, nonatomic) NSMutableArray *arrWaitingCmd; // @synthesize arrWaitingCmd=_arrWaitingCmd;
- (_Bool)checkCurrentNetworkValidForCmd:(id)arg1;
- (unsigned long long)checkLocalVersion:(id)arg1;
- (void)checkWaitingQueue;
- (void)dealloc;
- (void)elimilateCmdFromWaitingQueueWhichPkgVersionLowerThanTargetCmd:(id)arg1;
- (_Bool)enqueueCheck:(id)arg1;
- (void)executeGetCodeCmd:(id)arg1;
- (unsigned int)getNetworkType;
- (id)getRequestingCmdForAppInfoData:(id)arg1;
- (id)init;
- (_Bool)isAppInfoDataInDownloadingCode:(id)arg1;
- (_Bool)isCmdReachMaxRetryCount:(id)arg1;
- (_Bool)isNetworkTypeBetter2G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter3G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter4G:(unsigned int)arg1;
- (void)markRequestDidFailedCmd:(id)arg1;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)registerExtensions;
- (void)removeCmd:(id)arg1;
- (void)removeDownloadingCmd:(id)arg1;
- (void)removeDownloadingCmdForInfoData:(id)arg1;
- (void)removeWaitingCmd:(id)arg1;
- (void)resumeLocalData;
- (void)saveLocalData;
- (_Bool)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)startGetCodeWithCmd:(id)arg1;
- (void)unregisterExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

