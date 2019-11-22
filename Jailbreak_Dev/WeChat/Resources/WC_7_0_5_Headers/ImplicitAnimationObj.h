//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray, UIView;

@interface ImplicitAnimationObj : NSObject
{
    CADisplayLink *m_displayLink;
    NSMutableArray *m_implicitViews;
    unsigned long long m_countOfViewStartAnimation;
    double m_nextTimeToLetNextViewStartAnimation;
    id <ImplicitAnimationControllerDelegate> _delegate;
    unsigned long long _beginPosition;
    long long _animationType;
    CDUnknownBlockType _durationBlock;
    UIView *_animatedBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *animatedBgView; // @synthesize animatedBgView=_animatedBgView;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) unsigned long long beginPosition; // @synthesize beginPosition=_beginPosition;
- (void)dealloc;
@property(nonatomic) __weak id <ImplicitAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType durationBlock; // @synthesize durationBlock=_durationBlock;
- (void)startAnimationWithViews:(id)arg1;
- (void)stopAnimation;
- (void)updateCountOfViewStartAnimationWithCurTime:(double)arg1;
- (void)updateFrame;

@end
