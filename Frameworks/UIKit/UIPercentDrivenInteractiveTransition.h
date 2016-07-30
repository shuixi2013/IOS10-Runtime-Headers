//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, NSUUID;
@protocol UITimingCurveProvider, UIViewImplicitlyAnimating;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    double _duration;
    _Bool _didCommitAnimations;
    id <UIViewImplicitlyAnimating> _interruptibleAnimator;
    _Bool _wantsInteractiveStart;
    _Bool __transitionInterrupted;
    double _completionSpeed;
    long long _completionCurve;
    id <UITimingCurveProvider> _timingCurve;
    NSString *__originalFillMode;
    NSUUID *__uuid;
}

@property(nonatomic, getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:) _Bool _transitionInterrupted; // @synthesize _transitionInterrupted=__transitionInterrupted;
@property(retain, nonatomic, setter=_setUuid:) NSUUID *_uuid; // @synthesize _uuid=__uuid;
@property(retain, nonatomic, setter=_setOriginalFillMode:) NSString *_originalFillMode; // @synthesize _originalFillMode=__originalFillMode;
@property(nonatomic) _Bool wantsInteractiveStart; // @synthesize wantsInteractiveStart=_wantsInteractiveStart;
@property(retain, nonatomic) id <UITimingCurveProvider> timingCurve; // @synthesize timingCurve=_timingCurve;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)pauseInteractiveTransition;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(CDUnknownBlockType)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)_startInterruptibleTransition:(id)arg1;
- (void)_stopInteractiveTransition;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(_Bool)arg3 didComplete:(_Bool)arg4;
- (void)_continueInterruptibleTransition:(id)arg1 reverse:(_Bool)arg2;
- (void)_setDuration:(double)arg1;
@property(readonly) double duration;
@property(readonly) double percentComplete;
- (void)_resetInteractionController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

