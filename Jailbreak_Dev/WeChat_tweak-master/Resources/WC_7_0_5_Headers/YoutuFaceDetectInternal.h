//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YoutuFaceDetectInternal : NSObject
{
    struct YtFaceDetParam detectionParam;
    struct YTFaceDetection *_faceDetector;
    int _accuracy;
}

+ (int)GlobalInitWithPath:(id)arg1;
+ (int)GlobalRelease;
- (id).cxx_construct;
@property(nonatomic) int accuracy; // @synthesize accuracy=_accuracy;
- (void)clearDetectorResource;
- (void)dealloc;
- (_Bool)detectStillImage:(id)arg1 result:(struct vector<cv::Rect_<int>, std::__1::allocator<cv::Rect_<int>>> *)arg2;
- (_Bool)detectVideoImage:(id)arg1 result:(struct vector<cv::Rect_<int>, std::__1::allocator<cv::Rect_<int>>> *)arg2;
- (id)init;

@end
