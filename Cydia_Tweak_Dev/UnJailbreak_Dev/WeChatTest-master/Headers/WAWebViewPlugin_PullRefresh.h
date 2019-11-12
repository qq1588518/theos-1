//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"

@class NSString, WAWebViewPullDownRefreshView;

@interface WAWebViewPlugin_PullRefresh : WAWebViewPluginBase <EGORefreshTableHeaderDelegate>
{
    _Bool _bIsDisablePullDown;
    _Bool _bIsDisablePullUp;
    _Bool _bIsEnablePullRefresh;
    WAWebViewPullDownRefreshView *m_headRefreshView;
    _Bool _isReflashingHead;
    _Bool _isRecoverInsetProcessing;
    double m_fLastY;
    double _offset;
    unsigned long long _triggerTime;
}

@property(readonly, nonatomic) _Bool isRecoverInsetProcessing; // @synthesize isRecoverInsetProcessing=_isRecoverInsetProcessing;
- (void).cxx_destruct;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView:(_Bool)arg1;
- (void)refreshHead;
- (void)processPullDownRefreshWhenEndDragging:(id)arg1;
- (void)processPullDownRefreshWhenBeginDragging;
- (void)pullDownLoadingHeaderRefreshWhenViewWillAppear;
- (void)setDisableWebViewScrollViewPullUp;
- (void)setDisableWebViewScrollViewPullDown;
- (void)realStopAction;
- (void)changePullRefreshMode:(int)arg1;
- (void)stopPullRefresh;
- (void)startPullRefresh;
- (void)disablePullRefresh;
- (void)enablePullRefresh:(double)arg1 mode:(int)arg2;
@property(readonly, nonatomic) _Bool isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
