//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableArray, UIColor;

@interface WCCardCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    UIColor *_sectonColor;
    NSMutableArray *_decorationViewAttrs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *decorationViewAttrs; // @synthesize decorationViewAttrs=_decorationViewAttrs;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
@property(retain, nonatomic) UIColor *sectonColor; // @synthesize sectonColor=_sectonColor;

@end
