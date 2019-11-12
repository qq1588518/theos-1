//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNetworkStatusExt.h"
#import "IDownloadImageExt.h"
#import "IMsgExt.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString, SilentDownloadMessageWrap;

@interface MMOnlineSilentDownloadLogicController : NSObject <IMsgExt, IDownloadImageExt, CNetworkStatusExt, PBMessageObserverDelegate>
{
    NSMutableArray *_silentDownloadFileList;
    NSMutableArray *_sentDownloadFileList;
    SilentDownloadMessageWrap *_currentDownloadImage;
    SilentDownloadMessageWrap *_currentDownloadVideo;
    SilentDownloadMessageWrap *_currentDownloadFile;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)allowSilentDownload;
- (_Bool)canMediaDownloadedNow:(unsigned int)arg1;
- (void)checkList;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadFile; // @synthesize currentDownloadFile=_currentDownloadFile;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadImage; // @synthesize currentDownloadImage=_currentDownloadImage;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadVideo; // @synthesize currentDownloadVideo=_currentDownloadVideo;
- (void)dealloc;
- (id)init;
- (_Bool)isExistedInDownloadList:(id)arg1;
- (_Bool)isFileDownloaded:(id)arg1;
- (_Bool)isHDImageDownloaded:(id)arg1;
- (_Bool)isMessageValidForSilentDownload:(id)arg1;
- (_Bool)isTwoMessageEqual:(id)arg1 silent:(id)arg2;
- (_Bool)isWrapMsgInSilentDownloading:(id)arg1;
- (void)preStartSilentDownloadFile:(id)arg1 svrid:(long long)arg2;
- (void)reloadDataFromFile;
- (void)removeMessageWithUsername:(id)arg1;
- (void)saveDataToFile;
- (void)sendSilentDownloadFileToBackDevice:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sentDownloadFileList; // @synthesize sentDownloadFileList=_sentDownloadFileList;
- (void)setAllowSilentDownload:(_Bool)arg1;
@property(retain, nonatomic) NSMutableArray *silentDownloadFileList; // @synthesize silentDownloadFileList=_silentDownloadFileList;
- (_Bool)shouldShowSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
