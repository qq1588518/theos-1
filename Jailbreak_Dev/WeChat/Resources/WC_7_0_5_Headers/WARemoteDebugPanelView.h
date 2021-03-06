//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UISwitch;

@interface WARemoteDebugPanelView : UIView
{
    struct CGPoint _priorPoint;
    UIImageView *_connectImageView;
    UILabel *_connectLabel;
    UIImageView *_serverImageView;
    UILabel *_serverLabel;
    UILabel *_noConfirmedLabel;
    UILabel *_noSendLabel;
    UILabel *_sendoutLabel;
    UILabel *_recvinLabel;
    UIView *_splitLine;
    UIButton *_stopButton;
    UIButton *_shrinkButton;
    UIButton *_expandButton;
    UISwitch *_showLogSwitch;
    UILabel *_showLogLabel;
    UIView *_containerView;
    NSMutableArray *_labelList;
}

- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)onExpandButtonChanged:(id)arg1;
- (void)onShrinkButtonChanged:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)refreshPanelHeight;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
- (void)setupSubviews;
- (void)updateConnectState:(id)arg1;
- (void)updateNoConfirmedCount:(unsigned int)arg1;
- (void)updateNoSendCount:(unsigned int)arg1;
- (void)updatePrintItemList:(id)arg1;
- (void)updateRecvLength:(id)arg1 recvCount:(unsigned int)arg2;
- (void)updateSendLength:(id)arg1 sendCount:(unsigned int)arg2;
- (void)updateServerState:(id)arg1;

@end

