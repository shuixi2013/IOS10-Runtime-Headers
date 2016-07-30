//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage, _UIFocusMapSearchInfo, _UIFocusMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotDebugInfo : NSObject
{
    UIImage *_image;
    _UIFocusMapSnapshot *_snapshot;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    struct CGPoint _imageAnchorPoint;
}

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;
@property(readonly, nonatomic) __weak _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property(readonly, copy, nonatomic) _UIFocusMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;
- (id)_drawImage;
- (struct CGRect)_rectContainingAllFocusRegions;
@property(readonly, nonatomic) struct CGPoint imageAnchorPoint; // @synthesize imageAnchorPoint=_imageAnchorPoint;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;

@end

