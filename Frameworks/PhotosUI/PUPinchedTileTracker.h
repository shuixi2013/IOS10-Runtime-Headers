//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PUChangeDirectionValueFilter, PUPinchTracker, PUTileLayoutInfo, PUVelocityFilter, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUPinchedTileTracker : PUInteractiveTileTracker
{
    struct {
        _Bool respondsToInitialAspectRatioForTileWithLayoutInfo;
        _Bool respondsToFinalLayoutInfoForTileWithLayoutInfo;
    } _delegateFlags;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _direction;
    PUChangeDirectionValueFilter *__pinchGestureRecognizerScaleDirectionValueFilter;
    PUPinchTracker *__pinchTracker;
    double __pinchProgress;
    PUTileLayoutInfo *__initialLayoutInfo;
    PUTileLayoutInfo *__targetLayoutInfo;
    PUVelocityFilter *__horizontalVelocityFilter;
    PUVelocityFilter *__verticalVelocityFilter;
    PUVelocityFilter *__angularVelocityFilter;
}

@property(retain, nonatomic, setter=_setAngularVelocityFilter:) PUVelocityFilter *_angularVelocityFilter; // @synthesize _angularVelocityFilter=__angularVelocityFilter;
@property(retain, nonatomic, setter=_setVerticalVelocityFilter:) PUVelocityFilter *_verticalVelocityFilter; // @synthesize _verticalVelocityFilter=__verticalVelocityFilter;
@property(retain, nonatomic, setter=_setHorizontalVelocityFilter:) PUVelocityFilter *_horizontalVelocityFilter; // @synthesize _horizontalVelocityFilter=__horizontalVelocityFilter;
@property(retain, nonatomic, setter=_setTargetLayoutInfo:) PUTileLayoutInfo *_targetLayoutInfo; // @synthesize _targetLayoutInfo=__targetLayoutInfo;
@property(retain, nonatomic, setter=_setInitialLayoutInfo:) PUTileLayoutInfo *_initialLayoutInfo; // @synthesize _initialLayoutInfo=__initialLayoutInfo;
@property(nonatomic, setter=_setPinchProgress:) double _pinchProgress; // @synthesize _pinchProgress=__pinchProgress;
@property(retain, nonatomic, setter=_setPinchTracker:) PUPinchTracker *_pinchTracker; // @synthesize _pinchTracker=__pinchTracker;
@property(retain, nonatomic, setter=_setPinchGestureRecognizerScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter; // @synthesize _pinchGestureRecognizerScaleDirectionValueFilter=__pinchGestureRecognizerScaleDirectionValueFilter;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (void).cxx_destruct;
- (void)_updateTargetLayoutInfoIfNeeded;
- (id)tileControllerToTrack;
- (void)configureTileReattachmentContext:(id)arg1;
- (void)completeTracking;
- (void)updateTileControllerTracking;
- (void)startTileControllerTracking;
- (void)updateGestureRecognizerTracking;
- (void)setDelegate:(id)arg1;
- (id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(long long)arg3;
- (id)initWithTilingView:(id)arg1;

@end

