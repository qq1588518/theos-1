//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCPayOfflinePayQueryInfo : NSObject <NSCoding>
{
    unsigned int m_uiInitialMoney;
    unsigned int m_uiFastChangedLimit;
    NSString *_detailText;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int m_uiFastChangedLimit; // @synthesize m_uiFastChangedLimit;
@property(nonatomic) unsigned int m_uiInitialMoney; // @synthesize m_uiInitialMoney;

@end
