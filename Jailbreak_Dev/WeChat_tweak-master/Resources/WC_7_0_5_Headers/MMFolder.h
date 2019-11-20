//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface MMFolder : NSObject <PBCoding>
{
    int _level;
    NSString *name;
    long long size;
    NSMutableArray *subFiles;
    NSMutableArray *subFolders;
}

+ (void)initialize;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property int level; // @synthesize level=_level;
@property(retain) NSString *name; // @synthesize name;
@property long long size; // @synthesize size;
@property(retain) NSMutableArray *subFiles; // @synthesize subFiles;
@property(retain) NSMutableArray *subFolders; // @synthesize subFolders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
