//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface WCPayCreExtInfo : NSObject <NSCoding>
{
    unsigned int _m_needCreidRenewal;
    unsigned int _m_needBirthDate;
    unsigned int _m_needCreExpireDate;
    unsigned int _m_needCreType;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int m_needBirthDate; // @synthesize m_needBirthDate=_m_needBirthDate;
@property(nonatomic) unsigned int m_needCreExpireDate; // @synthesize m_needCreExpireDate=_m_needCreExpireDate;
@property(nonatomic) unsigned int m_needCreType; // @synthesize m_needCreType=_m_needCreType;
@property(nonatomic) unsigned int m_needCreidRenewal; // @synthesize m_needCreidRenewal=_m_needCreidRenewal;

@end

