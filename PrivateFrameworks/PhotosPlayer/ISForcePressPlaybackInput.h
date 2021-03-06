//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISGestureInput.h>

#import <PhotosPlayer/UIInteractionProgressObserver-Protocol.h>

@class NSString, UIPreviewForceInteractionProgress;

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver>
{
    _Bool __isTouchActive;
    _Bool __aboveTimeoutThreshold;
    _Bool __forceAboveThresholdLongEnough;
    _Bool __hasCrossedHintThreshold;
    double __forceProgress;
    long long __currentTimeoutRequestId;
    UIPreviewForceInteractionProgress *__interactionProgress;
}

@property(retain, nonatomic, setter=_setInteractionProgress:) UIPreviewForceInteractionProgress *_interactionProgress; // @synthesize _interactionProgress=__interactionProgress;
@property(nonatomic, setter=_setHasCrossedHintThreshold:) _Bool _hasCrossedHintThreshold; // @synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold;
@property(nonatomic, setter=_setCurrentTimeoutRequestId:) long long _currentTimeoutRequestId; // @synthesize _currentTimeoutRequestId=__currentTimeoutRequestId;
@property(nonatomic, setter=_setForceAboveThresholdLongEnough:) _Bool _forceAboveThresholdLongEnough; // @synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough;
@property(nonatomic, setter=_setAboveTimeoutThreshold:) _Bool _aboveTimeoutThreshold; // @synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold;
@property(nonatomic, setter=_setForceProgress:) double _forceProgress; // @synthesize _forceProgress=__forceProgress;
@property(nonatomic, setter=_setTouchActive:) _Bool _isTouchActive; // @synthesize _isTouchActive=__isTouchActive;
- (void).cxx_destruct;
- (void)_updateValue;
- (void)_cancelTimeoutPlayback;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)gestureRecognizerViewDidChange;
- (void)gestureRecognizerDidChange;
- (id)newGestureRecognizer;
- (long long)inputType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

