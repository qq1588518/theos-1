//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCStoryCloseContact : NSObject <WCTTableCoding>
{
    unsigned int _lastContactTime;
    NSString *_contactUserName;
}

+ (void)__wcdb_column_constraint_20:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)contactUserName;
+ (const struct WCTProperty *)lastContactTime;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contactUserName; // @synthesize contactUserName=_contactUserName;
- (id)description;
@property(nonatomic) unsigned int lastContactTime; // @synthesize lastContactTime=_lastContactTime;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

