//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandTimelineBaseViewModel.h"

#import "BTLBaseItemViewModelDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface BrandTimelineMultiReaderViewModel : BrandTimelineBaseViewModel <BTLBaseItemViewModelDelegate>
{
    double m_containerViewHeight;
    double m_viewHeight;
    NSMutableArray *m_itemViewModelArr;
    NSMutableArray *m_showMoreLabelStyles;
    struct CGSize m_showMoreSize;
    _Bool m_bHasLastMsgSeparateLine;
}

+ (_Bool)canCreateViewModelWithMessage:(id)arg1 ShowType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)onItemViewModelViewHeightChange:(id)arg1;
- (id)readerWrapForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *arrReaderWraps;
@property(readonly, nonatomic) NSArray *arrItemViewModel;
@property(readonly, nonatomic) struct CGSize showMoreSize;
@property(readonly, nonatomic) NSMutableArray *showMoreLabelStyles;
@property(readonly, nonatomic) _Bool isFold;
- (id)viewModelForIndex:(unsigned int)arg1;
- (double)containerViewHeight;
- (double)viewHeight;
- (void)initItemViewModelArr;
- (_Bool)bHasLastMsgSeparateLine;
- (void)setBHasLastMsgSeparateLine:(_Bool)arg1;
- (id)createBrandTimelineBaseCellView;
- (id)initWithMessage:(id)arg1 ShowType:(unsigned long long)arg2;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

