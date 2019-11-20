//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassFilter.h"

@class GPUImageFramebuffer, UIImage;

@interface FSStarFilter : GPUImageTwoPassFilter
{
    float starVertex[8];
    float starFragment[8];
    int texWidthSlot;
    int texHeightSlot;
    int starRadiusSlot;
    int maskImageSlot;
    int ratioSlot;
    double _resizeRatio;
    int _starSize;
    UIImage *_starImage;
    GPUImageFramebuffer *_maskImage;
    GPUImageFramebuffer *_starFramebuffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)imageFrameBufferWithImage:(struct CGImage *)arg1;
- (id)init;
@property(retain, nonatomic) GPUImageFramebuffer *maskImage; // @synthesize maskImage=_maskImage;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
@property(retain, nonatomic) GPUImageFramebuffer *starFramebuffer; // @synthesize starFramebuffer=_starFramebuffer;
@property(retain, nonatomic) UIImage *starImage; // @synthesize starImage=_starImage;
@property(nonatomic) int starSize; // @synthesize starSize=_starSize;

@end
