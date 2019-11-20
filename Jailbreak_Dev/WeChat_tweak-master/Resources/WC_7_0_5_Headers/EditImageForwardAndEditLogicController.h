//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EditImageInitialViewDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IMsgRevokeExt.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, EditImageAttr, EditImageIntialView, FavoritesItem, ForwardMessageLogicController, MMLoadingView, NSString, UIImage, UIViewController, WCActionSheet;

@interface EditImageForwardAndEditLogicController : NSObject <EditImageInitialViewDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate, IMsgRevokeExt>
{
    EditImageIntialView *_editImageInitialView;
    MMLoadingView *_loadingView;
    EditImageAttr *_editImageAttr;
    ForwardMessageLogicController *_forwardMessageLogicController;
    WCActionSheet *_actionsheet;
    int _editImageEntrance;
    int _editImageScene;
    id <EditImageForwardAndEditLogicDelegate> _delegate;
    CMessageWrap *_originalMessageWrap;
    UIImage *_originalImage;
    NSString *_originalImagePath;
    UIViewController *_currentViewController;
    FavoritesItem *_favItem;
    UIViewController *_forwardBasedViewController;
    unsigned long long _editImageCompletion;
}

- (void).cxx_destruct;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkNonActionsheetOptionsAfterProcessDone;
- (void)checkValidity;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)dealloc;
@property(nonatomic) __weak id <EditImageForwardAndEditLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editImageActionSheetClickedButtonWithTitle:(id)arg1;
@property(nonatomic) unsigned long long editImageCompletion; // @synthesize editImageCompletion=_editImageCompletion;
@property(nonatomic) int editImageEntrance; // @synthesize editImageEntrance=_editImageEntrance;
@property(nonatomic) int editImageScene; // @synthesize editImageScene=_editImageScene;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) __weak UIViewController *forwardBasedViewController; // @synthesize forwardBasedViewController=_forwardBasedViewController;
- (void)forwardMessage:(id)arg1;
- (id)getCurrentViewController;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (id)getEditImageAttr;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (id)initWithOriginalImage:(id)arg1 atPath:(id)arg2 withDelegate:(id)arg3 withCurrentViewController:(id)arg4;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) NSString *originalImagePath; // @synthesize originalImagePath=_originalImagePath;
@property(retain, nonatomic) CMessageWrap *originalMessageWrap; // @synthesize originalMessageWrap=_originalMessageWrap;
- (void)processEditImage:(CDUnknownBlockType)arg1;
- (void)reloadViews;
- (void)startEditImage;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
