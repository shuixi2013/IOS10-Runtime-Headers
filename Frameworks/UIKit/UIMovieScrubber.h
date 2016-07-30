//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/UIMovieScrubberTrackViewDataSource-Protocol.h>
#import <UIKit/UIMovieScrubberTrackViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel, UIMovieScrubberEditingView, UIMovieScrubberTrackView;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate>
{
    UIImageView *_thumbView;
    UIMovieScrubberTrackView *_trackView;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    int _timeComponents;
    UIImage *_fillImage;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    UIImage *_shadowImage;
    id <UIMovieScrubberDataSource> _dataSource;
    id <UIMovieScrubberDelegate> _delegate;
    struct CGRect _trackRect;
    double _hitOffset;
    double _zoomDelay;
    _Bool _showTimeViews;
    _Bool _editable;
    double _value;
    double _maximumValue;
    double _minimumValue;
    struct CGPoint _touchLocationWhenTrackPressBegan;
    double _trimStartValue;
    double _trimEndValue;
    double _minTrimmedLength;
    double _maxTrimmedLength;
    double _zoomAnimationDuration;
    double _zoomAnimationDelay;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int creatingSnapshot:1;
        unsigned int needsReload:1;
        unsigned int layoutTimeViews:1;
        unsigned int computeTrackRect:1;
        unsigned int clampingTrimRange;
        unsigned int zoomed:1;
        unsigned int zoomAnimating:1;
        unsigned int trackIsPressed:1;
        unsigned int trackAnimating:1;
        unsigned int thumbIsVisible:1;
        unsigned int handleIsPressed:1;
        unsigned int willBeginEditing:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int rotationDisabled;
        unsigned int isInNavigationBar:1;
        unsigned int delegateValueDidChange:1;
        unsigned int delegateStartValueDidChange:1;
        unsigned int delegateEndValueDidChange:1;
        unsigned int delegateWillBeginRequestingThumbnails:1;
        unsigned int delegateDidFinishRequestingThumbnails:1;
        unsigned int delegateWillBeginEditing:1;
        unsigned int delegateDidBeginEditing:1;
        unsigned int delegateDidCancelEditing:1;
        unsigned int delegateEditingAnimationFinished:1;
        unsigned int delegateWidthDeltaOriginXDelta:1;
        unsigned int delegateDidBeginAnimatingZoom:1;
        unsigned int delegateDidEndAnimatingZoom:1;
        unsigned int delegateWillZoom:1;
        unsigned int dataSourceRequestThumbnailImageIsSummmary:1;
    } _sliderFlags;
    double _edgeInset;
}

+ (id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(_Bool)arg2 isElapsed:(_Bool)arg3;
+ (_Bool)_allowActionsToQueue;
@property(nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic) double minimumTrimLength; // @synthesize minimumTrimLength=_minTrimmedLength;
@property(nonatomic) double maximumTrimLength; // @synthesize maximumTrimLength=_maxTrimmedLength;
@property(nonatomic) _Bool showTimeViews; // @synthesize showTimeViews=_showTimeViews;
@property(nonatomic) double zoomDelay; // @synthesize zoomDelay=_zoomDelay;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isZoomAnimating) _Bool zoomAnimating;
@property(readonly, nonatomic) double zoomMaximumValue;
@property(readonly, nonatomic) double zoomMinimumValue;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(_Bool)arg3;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (_Bool)isAnimatingValueChange;
- (_Bool)_alwaysHandleScrollerMouseEvent;
- (_Bool)cancelTouchTracking;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (int)_editingHandleWithTouch:(id)arg1;
- (_Bool)pointInsideThumb:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)arg1;
- (void)_cancelTrackPress:(_Bool)arg1;
- (void)_beginTrackPressWithTouch:(id)arg1 touchesBegan:(_Bool)arg2;
- (void)_trackPressWasHeld;
- (void)forceUnzoom;
- (_Bool)forceZoom;
- (void)_setZoomAnimating:(_Bool)arg1;
- (void)setRotationDisabled:(_Bool)arg1;
- (double)_valueForTouch:(id)arg1;
- (void)_sendDelayedActions;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
@property(nonatomic) double trimEndValue;
@property(nonatomic) double trimStartValue;
@property(nonatomic) double duration; // @dynamic duration;
- (void)_setValue:(double)arg1 andSendAction:(_Bool)arg2;
- (void)_updateThumbLocation;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double value;
@property(readonly, nonatomic) struct UIEdgeInsets alignmentMargins;
@property(readonly, nonatomic) _Bool isInsideNavigationBar;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_updateTimes;
- (void)_initSubviews;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)thumbRectForValue:(double)arg1;
- (struct CGRect)_editingRectForStartTime:(double)arg1 endTime:(double)arg2;
- (struct CGRect)_editingRect;
- (struct CGRect)trackRect;
- (void)_computeTrackRectForBounds:(struct CGRect)arg1;
- (void)setZoomAnimationDuration:(double)arg1;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)animateCancelEdit;
- (void)animateAfterEdit;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animateAfterEdit:(_Bool)arg1;
@property(nonatomic, getter=isContinuous) _Bool continuous;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) _Bool thumbIsVisible;
@property(nonatomic) id <UIMovieScrubberDelegate> delegate;
- (void)reloadData;
@property(nonatomic) id <UIMovieScrubberDataSource> dataSource;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

