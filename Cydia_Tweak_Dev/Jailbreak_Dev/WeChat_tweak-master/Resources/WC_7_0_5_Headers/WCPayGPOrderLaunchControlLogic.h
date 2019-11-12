//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "SessionSelectControllerDelegate.h"
#import "WCPayGPLaunchControlLogicDelegate.h"

@class CContact, NSMutableArray, NSString, WCPayGPLaunchControlLogic;

@interface WCPayGPOrderLaunchControlLogic : WCPayControlLogic <SessionSelectControllerDelegate, WCPayGPLaunchControlLogicDelegate>
{
    _Bool _bHasSelectMemberFinish;
    id <WCPayGPOrderLaunchControlLogicDelegate> _orderLaunchDelegate;
    WCPayGPLaunchControlLogic *_launchLogic;
    NSMutableArray *_recentGroupPayContactList;
    CContact *_currentContact;
}

- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
@property(nonatomic) _Bool bHasSelectMemberFinish; // @synthesize bHasSelectMemberFinish=_bHasSelectMemberFinish;
- (void)contactInBizChatDidSelect:(id)arg1;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
@property(retain, nonatomic) CContact *currentContact; // @synthesize currentContact=_currentContact;
- (void)dealloc;
- (id)initWithData:(id)arg1 orderContact:(id)arg2;
@property(retain, nonatomic) WCPayGPLaunchControlLogic *launchLogic; // @synthesize launchLogic=_launchLogic;
- (long long)numberOfRowInBizChatSession;
- (void)onLaunchControlLogicStop;
@property(nonatomic) __weak id <WCPayGPOrderLaunchControlLogicDelegate> orderLaunchDelegate; // @synthesize orderLaunchDelegate=_orderLaunchDelegate;
@property(retain, nonatomic) NSMutableArray *recentGroupPayContactList; // @synthesize recentGroupPayContactList=_recentGroupPayContactList;
- (id)sectionTitleForBizChatSession;
- (void)setGroupPayOrderLaunchDelegate:(id)arg1;
- (void)setupData;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
