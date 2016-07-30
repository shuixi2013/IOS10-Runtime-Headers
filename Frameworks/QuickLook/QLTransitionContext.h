//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class QLPreviewController, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface QLTransitionContext : NSObject <NSSecureCoding>
{
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    _Bool _usingViewForZoomTransition;
    UIView *_sourceView;
    double _topNavigationOffset;
    UIView *_sourceViewSnapshot;
    struct CGRect _sourceFrame;
    struct CGRect _uncroppedFrame;
}

+ (id)firstChildNavigationControllerFromViewController:(id)arg1;
+ (_Bool)useViewTransitionForPreviewController:(id)arg1;
+ (_Bool)useImageTransitionForPreviewController:(id)arg1;
+ (_Bool)useZoomTransitionForPreviewController:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;
@property _Bool usingViewForZoomTransition; // @synthesize usingViewForZoomTransition=_usingViewForZoomTransition;
@property double topNavigationOffset; // @synthesize topNavigationOffset=_topNavigationOffset;
@property struct CGRect uncroppedFrame; // @synthesize uncroppedFrame=_uncroppedFrame;
@property struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)setUpTransitionSourceView;
- (id)initWithQLPreviewController:(id)arg1 toViewController:(id)arg2;
- (id)sourceViewSnapshotImage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

