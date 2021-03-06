//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class MMTableViewInfo, NSString, UILabel;

@interface MMShowHelpViewController : MMUIViewController <UIAlertViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_userName;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_clearLocalInfo;
}

- (void).cxx_destruct;
- (id)navigationBarBackgroundColor;
- (void)OnClickBackBarButton:(id)arg1;
- (void)onBack;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateProduct;
- (id)getHeaderView;
- (void)reloadTableData;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMemStat;
- (void)clearInitMark;
- (void)onShowClearInitMark;
- (void)showRecoverView;
- (void)showUploadStackView;
- (void)showUploadFileView;
- (void)showUploadLogView;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

