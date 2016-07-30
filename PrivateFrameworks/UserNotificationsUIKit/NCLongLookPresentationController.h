//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UserNotificationsUIKit/NCLongLookAnimator-Protocol.h>

@class NSString, UIView, UIViewController, _UIBackdropView, _UIBackdropViewSettings, _UITapticEngine;
@protocol NCLongLookAnimatorDelegate, NCLongLookPresentationControllerDelegate, NCViewControllerAnimatedTransitioningDelegate, UIViewControllerContextTransitioning;

@interface NCLongLookPresentationController : UIPresentationController <NCLongLookAnimator>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewController *_sourceViewController;
    UIView *_sourceView;
    _UIBackdropView *_backgroundBlurView;
    _UIBackdropViewSettings *_presentedBackgroundBlurSettings;
    UIView *_revealShortLook;
    UIView *_backgroundDarkeningView;
    _UITapticEngine *_currentTapticEngine;
    _Bool _presenting;
    id <NCLongLookAnimatorDelegate> _transitionAnimatorDelegate;
    id <NCLongLookPresentationControllerDelegate> _longLookPresentationControllerDelegate;
}

+ (struct CGSize)_sizeOfViewWithPreferredContentSize:(struct CGSize)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
+ (struct CGSize)_sizeOfViewWithPreferredContentSize:(struct CGSize)arg1 inUseableContainerViewBounds:(struct CGRect)arg2;
+ (struct CGRect)useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect)arg1;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <NCLongLookPresentationControllerDelegate> longLookPresentationControllerDelegate; // @synthesize longLookPresentationControllerDelegate=_longLookPresentationControllerDelegate;
@property(nonatomic) __weak id <NCViewControllerAnimatedTransitioningDelegate> transitionAnimatorDelegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)hintDismissalWithProgress:(double)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)_actuateFeedbackForPresentation:(_Bool)arg1;
- (void)_endUsingTapticFeedbackIfNecessary;
- (void)_prepareUsingTapticFeedback;
- (void)_animatePreviewPresentation:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_animationFactoryForLongLookPresentation:(_Bool)arg1;
- (id)_presentedAnimatableBlurringView;
- (id)_presentedBackgroundBlurSettings;
- (id)_initialBackgroundBlurSettings;
- (id)_presentedNotificationViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

