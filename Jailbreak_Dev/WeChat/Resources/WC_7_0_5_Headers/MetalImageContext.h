//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MetalImageTextureCache, NSObject<OS_dispatch_queue>, NSString;

@interface MetalImageContext : NSObject
{
    struct __CVMetalTextureCache *_coreVideoTextureCache;
    MetalImageTextureCache *_textureCache;
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSString *_metalContextQueueKey;
}

+ (id)sharedContextQueue;
+ (id)sharedImageProcessingContext;
+ (id)sharedTextureCache;
- (void).cxx_destruct;
- (id)contextKey;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (struct __CVMetalTextureCache *)coreVideoTextureCache;
- (void)dealloc;
- (id)init;
- (id)initWithProcessingQueueName:(id)arg1;
@property(retain, nonatomic) NSString *metalContextQueueKey; // @synthesize metalContextQueueKey=_metalContextQueueKey;
- (id)textureCache;

@end

