//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INetworkStatusMgrExt.h"
#import "IWAMsgNodeRequestMgrExt.h"
#import "JSApiScopeConfirmWindowDelegate.h"

@class JSApiScopeConfirmWindow, JSContext, NSArray, NSCondition, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSThread, WAMsgNodeJSCoreData;

@interface WAMsgNodeJSCore : NSObject <IWAMsgNodeRequestMgrExt, INetworkStatusMgrExt, JSApiScopeConfirmWindowDelegate>
{
    _Bool _hasInjected;
    _Bool _shouldShowJSLog;
    unsigned int _coreId;
    unsigned int _schedulingReqCount;
    unsigned long long _state;
    id <IWAMsgNodeJSCoreDelegate> _delegate;
    WAMsgNodeJSCoreData *_coreData;
    NSString *_reqCallbackId;
    JSContext *_context;
    NSThread *_thread;
    NSCondition *_condition;
    NSMutableDictionary *_timerObjs;
    NSMutableArray *_logList;
    NSDateFormatter *_formatter;
    NSString *_cpKey;
    NSMutableDictionary *_eventId2TapCallback;
    NSArray *_arrConfirmScope;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSDictionary *_confirmUserInfo;
    NSString *_lastDrawEventParam;
    unsigned long long _lastDrawTimeInMs;
}

- (void).cxx_destruct;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (unsigned long long)appstate;
@property(retain, nonatomic) NSArray *arrConfirmScope; // @synthesize arrConfirmScope=_arrConfirmScope;
- (void)authorize:(id)arg1 event:(unsigned int)arg2;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSDictionary *confirmUserInfo; // @synthesize confirmUserInfo=_confirmUserInfo;
@property(retain, nonatomic) JSApiScopeConfirmWindow *confirmWindow; // @synthesize confirmWindow=_confirmWindow;
@property(retain) JSContext *context; // @synthesize context=_context;
- (id)convertBoolToString:(_Bool)arg1;
@property(retain) WAMsgNodeJSCoreData *coreData; // @synthesize coreData=_coreData;
@property(readonly, nonatomic) unsigned int coreId; // @synthesize coreId=_coreId;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (id)createIDKeyReportItem;
- (void)createThread;
- (void)dealloc;
@property(nonatomic) __weak id <IWAMsgNodeJSCoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyThread;
- (void)drawCanvas:(id)arg1 event:(unsigned int)arg2;
- (void)endRunloop;
- (void)endWithResult:(id)arg1;
- (void)endWithResult:(id)arg1 callbackID:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableDictionary *eventId2TapCallback; // @synthesize eventId2TapCallback=_eventId2TapCallback;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
- (id)getImageWithUrl:(id)arg1;
- (id)getJSLogList;
- (void)getNetworkType:(id)arg1 event:(unsigned int)arg2;
- (void)getSystemInfo:(id)arg1 event:(unsigned int)arg2;
@property _Bool hasInjected; // @synthesize hasInjected=_hasInjected;
- (_Bool)hasPermissionWithJSApi:(id)arg1;
- (id)initWithCoreId:(unsigned int)arg1 cpKey:(id)arg2;
- (void)injectJSWithCoreData:(id)arg1;
@property(retain, nonatomic) NSString *lastDrawEventParam; // @synthesize lastDrawEventParam=_lastDrawEventParam;
@property(nonatomic) unsigned long long lastDrawTimeInMs; // @synthesize lastDrawTimeInMs=_lastDrawTimeInMs;
- (void)log:(id)arg1 event:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *logList; // @synthesize logList=_logList;
- (void)mainThreadClear;
- (void)mainThreadWriteToJSLog:(id)arg1;
- (void)makePhoneCall:(id)arg1 event:(unsigned int)arg2;
- (void)notifyEventEndWithResult:(id)arg1;
- (void)notifyOnTapAtPoint:(struct CGPoint)arg1 forEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onAuthorizeConfirmRequest:(id)arg1 debugMode:(unsigned long long)arg2 responseWithRet:(int)arg3 error:(id)arg4 userInfo:(id)arg5;
- (void)onAuthorizeRequest:(id)arg1 debugMode:(unsigned long long)arg2 responseWithRet:(int)arg3 error:(id)arg4 appName:(id)arg5 iconUrl:(id)arg6 scopeList:(id)arg7 userInfo:(id)arg8;
- (void)onNetworkStatusChange:(int)arg1;
- (void)onRequestMgrSendRequest:(id)arg1 callbackId:(id)arg2 resp:(id)arg3 nextReqTime:(unsigned int)arg4;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onTapCallback:(id)arg1 event:(unsigned int)arg2;
- (void)onTimer:(id)arg1;
- (void)openApp:(id)arg1 event:(unsigned int)arg2;
- (void)pause;
- (void)removeAllTimer;
- (void)reportIDKey:(id)arg1 event:(unsigned int)arg2;
- (void)reportKeyValue:(id)arg1 event:(unsigned int)arg2;
- (_Bool)reportPublicJSInsideIDKeyInfo:(unsigned int)arg1 withKey:(unsigned int)arg2 andValue:(unsigned int)arg3;
- (_Bool)reportPublicJSInsideKVInfo:(unsigned int)arg1 andValue:(id)arg2;
@property(retain) NSString *reqCallbackId; // @synthesize reqCallbackId=_reqCallbackId;
- (void)resume;
@property unsigned int schedulingReqCount; // @synthesize schedulingReqCount=_schedulingReqCount;
- (void)sendAuthorizeResponse:(int)arg1 errorMsg:(id)arg2 event:(unsigned int)arg3 forScopes:(id)arg4;
- (_Bool)sendJSEventToService:(id)arg1 param:(id)arg2;
@property(nonatomic) _Bool shouldShowJSLog; // @synthesize shouldShowJSLog=_shouldShowJSLog;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
- (void)setWidgetSize:(id)arg1 event:(unsigned int)arg2;
- (void)setupJSContext:(id)arg1;
- (void)showDatePickerView:(id)arg1 event:(unsigned int)arg2;
- (void)showPickerView:(id)arg1 event:(unsigned int)arg2;
- (void)start;
- (void)startRunloop:(id)arg1;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void)stop;
- (void)subThreadEvaluateScriptWithJsContent:(id)arg1;
- (void)subThreadStartCore;
- (void)suspendCurrentThread;
- (void)testDrawStr:(id)arg1;
- (void)tryLogAction:(int)arg1;
- (void)updateLogicData:(id)arg1;
- (void)waitForWakeup;
- (void)wakeUpCurrentThread:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
