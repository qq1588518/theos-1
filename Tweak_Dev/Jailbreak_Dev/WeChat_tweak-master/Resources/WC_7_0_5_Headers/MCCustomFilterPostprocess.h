//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCCommonFilter.h"

@class MCCustomFilter;

@interface MCCustomFilterPostprocess : MCCommonFilter
{
    MCCustomFilter *_customFilter;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1;
@property(retain, nonatomic) MCCustomFilter *customFilter; // @synthesize customFilter=_customFilter;
- (id)faceAnalyzers;
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2;
- (void)removeAllTargets;
- (void)setFaceAnalyzers:(id)arg1;
- (void)setTmplItem:(id)arg1;
- (id)tmplItem;

@end
