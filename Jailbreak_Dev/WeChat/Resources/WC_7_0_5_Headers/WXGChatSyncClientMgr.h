//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WXGImportMessageHelperDelegate.h"

@class NSMutableSet, NSString;

@interface WXGChatSyncClientMgr : MMService <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate, MMKernelExt, WXGImportMessageHelperDelegate, MMService>
{
    NSString *_lastDownloadFileName;
    _Bool _isAuthFinish;
    _Bool _isManualAuth;
    _Bool _isMainDeviceSupportAfterSleep;
    _Bool _isiPadSyncClose;
    unsigned int _timeIntervalFromLastSucceedChatSync;
    unsigned int _timeIntervalFromLastSendChatSyncRequest;
    unsigned int _timeLimitPackageMsg;
    NSMutableSet *_importChatNameSet;
    NSString *_publicKey;
    NSString *_privateKey;
}

+ (void)hexStringToUnsignedChar:(id)arg1 output:(char **)arg2 outputLength:(unsigned int *)arg3;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)checkConfigFromABTest;
- (_Bool)checkRequestAfterSleepFrequent;
- (void)dealloc;
- (id)decryptOriginAesKeyFromAppMsg:(id)arg1 withPrivatekey:(id)arg2;
- (_Bool)filterMsgBeforeAddToDB:(id)arg1;
- (void)genRsaKeyPair;
- (id)getMMKV;
- (id)getRealSyncDataDirFromUnzipDir:(id)arg1;
- (id)getSyncPublicKey;
- (void)importMsgFromSyncFile:(id)arg1;
- (_Bool)isImportMsgCallBackSync;
- (void)loadStatus;
- (void)onAuthOK;
- (void)onImportOneMsgItem:(id)arg1;
- (void)onManulLoginOK;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)onServiceInit;
- (void)parseAppMsg:(id)arg1;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (void)requestChatSyncAfterSleep;
- (void)saveStatus;
- (void)sendChatSyncNewXmlWithAction:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3 sessionName:(id)arg4 identifier:(id)arg5 limit:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
