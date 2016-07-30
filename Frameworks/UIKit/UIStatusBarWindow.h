//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSArray, NSDate, NSMutableArray, NSString, UIStatusBar, UIStatusBarCorners, UIView;

@interface UIStatusBarWindow : UIWindow
{
    UIStatusBar *_statusBar;
    long long _orientation;
    UIStatusBarCorners *_topCorners;
    double _topCornersOffset;
    UIStatusBarCorners *_bottomCorners;
    _Bool _cornersHidden;
    UIView *_droppedFrameIndicatorView;
    NSDate *_droppedFrameIndicatorViewExpiryDate;
    UIView *_droppedFrameTransientIndicatorView;
    NSDate *_droppedFrameTransientIndicatorViewExpiryDate;
    NSString *_likelyDroppedFrameProcessBundleID;
    NSArray *_lastDroppedFramePerformanceInfo;
    NSMutableArray *_lastDroppedFrames;
}

+ (void)_beginListeningToDroppedFrameNotifications;
+ (_Bool)_isSystemWindow;
+ (struct CGRect)statusBarWindowFrame;
+ (struct CGRect)_defaultStatusBarSceneBounds;
+ (struct CGRect)_convertRect:(struct CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2;
+ (struct CGRect)_defaultStatusBarSceneReferenceBounds;
+ (_Bool)isIncludedInClassicJail;
@property(retain, nonatomic) NSMutableArray *_lastDroppedFrames; // @synthesize _lastDroppedFrames;
@property(retain, nonatomic) NSArray *_lastDroppedFramePerformanceInfo; // @synthesize _lastDroppedFramePerformanceInfo;
@property(retain, nonatomic) NSString *_likelyDroppedFrameProcessBundleID; // @synthesize _likelyDroppedFrameProcessBundleID;
@property(retain, nonatomic) NSDate *_droppedFrameTransientIndicatorViewExpiryDate; // @synthesize _droppedFrameTransientIndicatorViewExpiryDate;
@property(retain, nonatomic) UIView *_droppedFrameTransientIndicatorView; // @synthesize _droppedFrameTransientIndicatorView;
@property(retain, nonatomic) NSDate *_droppedFrameIndicatorViewExpiryDate; // @synthesize _droppedFrameIndicatorViewExpiryDate;
@property(retain, nonatomic) UIView *_droppedFrameIndicatorView; // @synthesize _droppedFrameIndicatorView;
- (void).cxx_destruct;
- (void)_fileDroppedFrameRadar:(id)arg1;
- (void)layoutSubviews;
- (void)_dismissTransientDroppedFrameIndicator;
- (void)_dismissDroppedFrameIndicator;
- (void)_indicateDroppedFrameBar;
- (void)_indicateTransientDroppedFrame;
- (void)_indicateDroppedFrame;
- (void)_checkForDroppedFrameTimerExpiry;
- (void)_checkForTransientDroppedFrameTimerExpiry;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (_Bool)_isStatusBarWindow;
- (_Bool)_disableGroupOpacity;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(double)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (void)setCornersHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (long long)orientation;
- (void)_rotate;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)statusBarWindowFrame;
- (struct CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;

@end

