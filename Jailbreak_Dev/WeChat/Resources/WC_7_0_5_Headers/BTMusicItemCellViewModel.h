//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

@class MMMusicInfo, NSString;

@interface BTMusicItemCellViewModel : BTReaderItemCellViewModel
{
    MMMusicInfo *m_musicInfo;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *artistStr;
- (id)itemViewClassName;
@property(readonly, nonatomic) MMMusicInfo *musicInfo;
- (id)titleLabelStyles;
- (struct CGSize)titleSize;
- (id)titleStr;
- (double)viewHeight;

@end
