//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBRegionChangeDistributor;

@protocol TBRegionChangeDistributorDelegate <NSObject>

@optional
- (void)distributor:(TBRegionChangeDistributor *)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(TBRegionChangeDistributor *)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
@end
