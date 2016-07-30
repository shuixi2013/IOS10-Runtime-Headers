//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerContextTransitioning;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    _Bool _interactive;
    _Bool _startedInteractively;
    double _interactiveProgress;
}

+ (id)interactionControllerForAnimationController:(id)arg1;
@property(nonatomic) _Bool startedInteractively; // @synthesize startedInteractively=_startedInteractively;
@property(nonatomic, setter=_setInteractiveProgress:) double interactiveProgress; // @synthesize interactiveProgress=_interactiveProgress;
@property(nonatomic, getter=isInteractive, setter=_setInteractive:) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (struct CGRect)finalToViewFrame;
- (struct CGRect)finalFromViewFrame;
- (struct CGRect)initialToViewFrame;
- (struct CGRect)initialFromViewFrame;
- (id)containerView;
- (id)toViewController;
- (id)fromViewController;
- (id)transitionContext;
- (id)interactiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (id)_newInteractiveTransition;
- (id)initWithDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

