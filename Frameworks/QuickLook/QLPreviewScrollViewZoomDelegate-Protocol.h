//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLPreviewScrollView;

@protocol QLPreviewScrollViewZoomDelegate <NSObject>

@optional
- (double)previewScrollView:(QLPreviewScrollView *)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (void)previewScrollView:(QLPreviewScrollView *)arg1 didEndZoomingAtScale:(double)arg2;
- (void)previewScrollViewWillBeginZooming:(QLPreviewScrollView *)arg1;
@end

