//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCPayMaskViewMatrix : NSObject
{
    char *data;
    CDStruct_73b5d383 _max;
}

- (void)dealloc;
- (void)fillWithValue:(BOOL)arg1;
- (BOOL)getValueWithCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (id)initWithMax:(CDStruct_73b5d383)arg1;
- (id)initWithMaxX:(unsigned long long)arg1 MaxY:(unsigned long long)arg2;
@property(nonatomic) CDStruct_73b5d383 max; // @synthesize max=_max;
- (void)setValue:(BOOL)arg1 forCoordinates:(unsigned long long)arg2 y:(unsigned long long)arg3;
- (BOOL)valueForCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;

@end

