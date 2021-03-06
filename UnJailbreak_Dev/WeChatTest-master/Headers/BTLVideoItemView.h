//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTLBaseItemView.h"

#import "MMVideoPlayerViewDelegate-Protocol.h"

@class CALayer, MMUILabel, NSString, UIImageView, WAStreamPlayerView;

@interface BTLVideoItemView : BTLBaseItemView <MMVideoPlayerViewDelegate>
{
    CALayer *m_maskLayer;
    UIImageView *m_playBtnView;
    MMUILabel *m_timeLabel;
    WAStreamPlayerView *_streamPlayerView;
}

- (void).cxx_destruct;
- (void)onControllerDismiss;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (id)configPlayView;
- (void)onVideoIconClick:(id)arg1;
- (void)layoutItemNormal;
- (void)layoutItemTop;
- (void)layoutSubviews;
- (void)initTimeLabel;
- (void)initPlayBtnView;
- (void)initCoverMaskLayer;
- (void)initVideoItemNormal;
- (void)initVideoItemtop;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

