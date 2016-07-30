//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>
#import <UIKit/UIPreviewInteractionDelegate-Protocol.h>
#import <UIKit/_UIForcePresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIGestureRecognizer, UIInteractionProgress, UIPanGestureRecognizer, UIPresentationController, UIPreviewInteraction, UIView, UIViewController, UIWindow, _UIPreviewGestureRecognizer, _UIRevealGestureRecognizer, _UISystemSoundPlayer;
@protocol UIForcePresentationController, UIForceTransitioningDelegate, UIPreviewInteractionControllerDelegate;

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate>
{
    _Bool _isCommitting;
    _Bool _statusBarWasHidden;
    id <UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    UIInteractionProgress *_interactionProgressForCommit;
    _UIRevealGestureRecognizer *_revealGestureRecognizer;
    _UIPreviewGestureRecognizer *_previewGestureRecognizer;
    UIPanGestureRecognizer *_modalPanGestureRecognizer;
    UIGestureRecognizer *_touchObservingGestureRecognizer;
    UIViewController *_currentPreviewViewController;
    UIPresentationController<UIForcePresentationController> *_currentPresentationController;
    id <UIForceTransitioningDelegate> _currentTransitionDelegate;
    UIWindow *_windowForPreviewPresentation;
    UIView *_touchSelectionWorkaroundSnapshotView;
    id _currentCommitTransition;
    _UISystemSoundPlayer *_feedbackBehavior;
    UIInteractionProgress *_interactionProgressForPresentation;
    struct CGPoint _location;
}

@property(retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation=_interactionProgressForPresentation;
@property(retain, nonatomic) _UISystemSoundPlayer *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property(retain, nonatomic) id currentCommitTransition; // @synthesize currentCommitTransition=_currentCommitTransition;
@property(retain, nonatomic) UIView *touchSelectionWorkaroundSnapshotView; // @synthesize touchSelectionWorkaroundSnapshotView=_touchSelectionWorkaroundSnapshotView;
@property(nonatomic) _Bool statusBarWasHidden; // @synthesize statusBarWasHidden=_statusBarWasHidden;
@property(retain, nonatomic) UIWindow *windowForPreviewPresentation; // @synthesize windowForPreviewPresentation=_windowForPreviewPresentation;
@property(retain, nonatomic) id <UIForceTransitioningDelegate> currentTransitionDelegate; // @synthesize currentTransitionDelegate=_currentTransitionDelegate;
@property(retain, nonatomic) UIPresentationController<UIForcePresentationController> *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
@property(retain, nonatomic) UIGestureRecognizer *touchObservingGestureRecognizer; // @synthesize touchObservingGestureRecognizer=_touchObservingGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer; // @synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer;
@property(retain, nonatomic) _UIPreviewGestureRecognizer *previewGestureRecognizer; // @synthesize previewGestureRecognizer=_previewGestureRecognizer;
@property(retain, nonatomic) _UIRevealGestureRecognizer *revealGestureRecognizer; // @synthesize revealGestureRecognizer=_revealGestureRecognizer;
@property(retain, nonatomic) UIInteractionProgress *interactionProgressForCommit; // @synthesize interactionProgressForCommit=_interactionProgressForCommit;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) __weak id <UIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)_panningRecognizerDidFire:(id)arg1;
- (_Bool)_usesPreviewPresentationController;
- (_Bool)_usesPreviewInteraction;
- (void)_deactivateFeedbackIfNeeded;
- (void)_activateFeedbackInCoordinateSpace:(id)arg1;
- (void)_finalizeInteractivePreview;
- (void)_resetCustomPresentationHooks;
- (id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (id)_insertTouchSelectionWorkaroundSnapshotViewToView:(id)arg1 presentationController:(id)arg2;
- (void)_setCalloutBarHidden:(_Bool)arg1;
- (void)_setStatusBarHidden:(_Bool)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
- (void)initGestureRecognizers;
- (void)forcePresentationControllerWantsToCommit:(id)arg1;
- (void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)forcePresentationControllerDidDismiss:(id)arg1;
- (void)forcePresentationControllerWillDismiss:(id)arg1;
- (void)forcePresentationTransitionWillBegin:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)commitInteractivePreview;
- (void)cancelInteractivePreview;
- (_Bool)startInteractivePreviewWithGestureRecognizer:(id)arg1;
- (void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(struct CGPoint)arg2 inView:(id)arg3 containerView:(id)arg4;
- (_Bool)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)startInteractivePreviewAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)_previewingIsPossibleForView:(id)arg1;
- (_Bool)_viewControllerIsChildOfExpandedSplitViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @dynamic gestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

