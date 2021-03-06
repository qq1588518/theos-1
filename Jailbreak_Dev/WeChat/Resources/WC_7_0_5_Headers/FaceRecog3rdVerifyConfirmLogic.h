//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSDictionary, NSMutableArray, NSString;

@interface FaceRecog3rdVerifyConfirmLogic : MMObject <PBMessageObserverDelegate>
{
    _Bool _bDefaultConfirm;
    unsigned int _checkAliveType;
    float _lightThreshold;
    id <FaceRecog3rdVerifyConfirmLogicDelegate> _delegate;
    NSMutableArray *_confirmInfos;
    NSDictionary *_prompts;
    NSString *_bizNickName;
    NSString *_headerPromptWording;
    NSString *_feedbackUrl;
    NSString *_feedbackUrlForConfirmView;
    NSString *_businessTip;
    NSString *_businessHeadUrl;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) _Bool bDefaultConfirm; // @synthesize bDefaultConfirm=_bDefaultConfirm;
@property(retain, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(retain, nonatomic) NSString *businessHeadUrl; // @synthesize businessHeadUrl=_businessHeadUrl;
@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(retain, nonatomic) NSMutableArray *confirmInfos; // @synthesize confirmInfos=_confirmInfos;
- (void)dealloc;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(retain, nonatomic) NSString *feedbackUrlForConfirmView; // @synthesize feedbackUrlForConfirmView=_feedbackUrlForConfirmView;
- (void)handleGetConfirmInfo:(id)arg1;
@property(retain, nonatomic) NSString *headerPromptWording; // @synthesize headerPromptWording=_headerPromptWording;
- (id)init;
@property(nonatomic) float lightThreshold; // @synthesize lightThreshold=_lightThreshold;
@property(retain, nonatomic) NSDictionary *prompts; // @synthesize prompts=_prompts;
- (void)resetLogicState;
- (_Bool)startGetConfirmInfo:(id)arg1 verifyInfo:(id)arg2;

@end

