//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface PayMenuRedDotItem : NSObject <PBCoding>
{
    unsigned int expireTime;
    NSString *itemName;
    NSString *wording;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)copyFrom:(id)arg1;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName;
@property(retain, nonatomic) NSString *wording; // @synthesize wording;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

