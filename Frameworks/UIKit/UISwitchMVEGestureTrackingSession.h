//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIGestureRecognizer, UIView;
@protocol UISwitchMVEGestureTrackingSessionElement;

__attribute__((visibility("hidden")))
@interface UISwitchMVEGestureTrackingSession : NSObject
{
    _Bool _displayedOnValue;
    _Bool _pendingDisplayedOnValue;
    _Bool _lastCommitedOnValue;
    UIView<UISwitchMVEGestureTrackingSessionElement> *_visualElement;
    double _naturalLayoutDirection;
    double _movementVectorForPanInitiatedChangeY;
    double _movementVectorForPanInitiatedChangeTargetOnValue;
    UIGestureRecognizer *_pendingDisplayedOnValueInitiatingGesture;
}

+ (_Bool)gestureIsInEndState:(long long)arg1;
@property(readonly, nonatomic) _Bool lastCommitedOnValue; // @synthesize lastCommitedOnValue=_lastCommitedOnValue;
@property(readonly, nonatomic) _Bool pendingDisplayedOnValue; // @synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue;
@property(readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture; // @synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture;
@property(readonly, nonatomic) double movementVectorForPanInitiatedChangeTargetOnValue; // @synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue;
@property(readonly, nonatomic) double movementVectorForPanInitiatedChangeY; // @synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY;
@property(readonly, nonatomic) double naturalLayoutDirection; // @synthesize naturalLayoutDirection=_naturalLayoutDirection;
@property(nonatomic) _Bool displayedOnValue; // @synthesize displayedOnValue=_displayedOnValue;
@property(nonatomic) __weak UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement; // @synthesize visualElement=_visualElement;
- (void).cxx_destruct;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (_Bool)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1;
- (_Bool)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1;
- (void)_sendStateChangeActionsIfNecessary;
- (void)_applyPendingChangesIfNecessary;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (_Bool)canApplyPendingOnValueForGesture:(id)arg1;
- (_Bool)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2;
- (_Bool)pendingDisplayedOnValueIsValid;
- (void)invalidatePendingOnValue;
- (void)setPendingDisplayedOnValue:(_Bool)arg1 forGesture:(id)arg2;
- (void)reset;
- (id)initWithVisualElement:(id)arg1;

@end

