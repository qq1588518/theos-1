//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "FaceRecogPayHandlerDelegate.h"
#import "IWCPayControlLogicExt.h"
#import "WCPayGetUserExInfoCgiDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayRealnameInfoViewControllerDelegate.h"
#import "WCPayRealnameSuccessViewControllerDelegate.h"

@class FaceRecogPayHandler, GetRealnameWordingRsp, NSString, WCPayGetUserExInfoCgi, WCPayRealnameAuthenReq, WCPayRealnameAuthenResp, WCPaySetUserExInfoCgi;

@interface WCPayRealnameVerifyLogic : WCPayControlLogic <WCPayRealnameSuccessViewControllerDelegate, FaceRecogPayHandlerDelegate, WCPayGetUserExInfoCgiDelegate, IWCPayControlLogicExt, WCPayRealnameInfoViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    GetRealnameWordingRsp *_wording;
    WCPayGetUserExInfoCgi *_getUserExInfoCgi;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
    WCPayRealnameAuthenResp *_authenResp;
    WCPayRealnameAuthenReq *_authenReq;
    FaceRecogPayHandler *_faceHandler;
}

- (void).cxx_destruct;
- (void)FillRealnameInfoCancel;
- (_Bool)FillRealnameInfoLayoutV2;
- (void)FillRealnameInfoLayoutV2ClickConfirm:(id)arg1;
- (void)FillRealnameInfoNext:(id)arg1;
- (id)FillRealnameInfoWording;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnRealnameAuthen:(id)arg1 Error:(id)arg2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
@property(retain) WCPayRealnameAuthenReq *authenReq; // @synthesize authenReq=_authenReq;
@property(retain) WCPayRealnameAuthenResp *authenResp; // @synthesize authenResp=_authenResp;
- (void)dealloc;
@property(retain) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
@property(retain, nonatomic) WCPayGetUserExInfoCgi *getUserExInfoCgi; // @synthesize getUserExInfoCgi=_getUserExInfoCgi;
- (void)getUserExInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getUserExInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onWCPayBindCardConfirmViewControllerBack;
- (void)onWCPayBindCardConfirmViewControllerConfirm:(_Bool)arg1;
- (void)onWCPayRealnameSuccessViewControllerDone;
- (void)passwordInit;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
@property(retain) GetRealnameWordingRsp *wording; // @synthesize wording=_wording;
- (void)startFaceReg;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
