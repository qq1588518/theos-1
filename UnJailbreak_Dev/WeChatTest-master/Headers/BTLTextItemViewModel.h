//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTLBaseItemViewModel.h"

@interface BTLTextItemViewModel : BTLBaseItemViewModel
{
    _Bool m_callFullText;
    _Bool _isFullText;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(nonatomic) _Bool isFullText; // @synthesize isFullText=_isFullText;
- (id)coverImgURL;
- (id)titleLabelStyles;
@property(readonly, nonatomic) _Bool canFullText;
- (struct CGSize)titleSize;
- (double)viewHeight;
- (id)itemViewClassName;

@end

