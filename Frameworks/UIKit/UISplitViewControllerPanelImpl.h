//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDimmingViewDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIPanelControllerDelegate-Protocol.h>
#import <UIKit/UISplitViewControllerImpl-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIDimmingView, UIPanGestureRecognizer, UIPanelController, UIResponder, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UISplitViewController, UITraitCollection, UIViewController;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl>
{
    UISplitViewController *_svc;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_displayModeButtonItemTitle;
    double _presentationGestureDirection;
    long long _lastNotifiedMode;
    long long _overrideReportedDisplayMode;
    _Bool _lastShouldAllowChange;
    UITraitCollection *_transitioningToTraitCollection;
    struct CGSize _transitioningToSize;
    long long _transitioningToOrientation;
    UITraitCollection *_suspendedTraitCollection;
    struct CGSize _suspendedSize;
    UISlidingBarStateRequest *_suspendedStateRequest;
    long long _suspendedState;
    UIResponder *_postTransitionResponder;
    struct {
        unsigned int usedNewAPI:1;
        unsigned int primaryHidingState:2;
        unsigned int didSetLastShouldAllowChangeDuringUpdate:1;
        unsigned int hasTransitioningSizeAndOrientation:1;
        unsigned int hasPendingPreferredDisplayModeChange:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
    } _flags;
    double _lastUserInitiatedPrimaryWidth;
    _Bool _presentsWithGesture;
    id <UISplitViewControllerDelegate> _delegate;
    long long _preferredDisplayMode;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    UIPanelController *_panelController;
    UIPanGestureRecognizer *__presentationGestureRecognizer;
    UIDimmingView *__dimmingView;
    UIViewController *__preservedDetailController;
}

+ (id)_withDisabledAppearanceTransitions:(_Bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(retain, nonatomic, setter=_setDimmingView:) UIDimmingView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(retain, nonatomic, setter=_setPresentationGestureRecognizer:) UIPanGestureRecognizer *_presentationGestureRecognizer; // @synthesize _presentationGestureRecognizer=__presentationGestureRecognizer;
@property(retain, nonatomic) UIPanelController *panelController; // @synthesize panelController=_panelController;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (_Bool)_iPadShouldUseOverlayInCurrentEnvironment;
- (void)_setPrimaryHidingState:(long long)arg1;
- (long long)_primaryHidingState;
- (long long)_displayModeForState:(id)arg1;
- (id)_childContainingSender:(id)arg1;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateDisplayModeButtonItem;
- (long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1;
- (long long)_effectiveTargetDisplayMode;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_updateDimmingView;
- (void)_setLeadingShownFromGesture:(_Bool)arg1;
- (_Bool)_isLeadingShown;
- (void)_presentationGestureRecognizerChanged:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updatePresentationGestureRecognizer;
- (void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2;
- (id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3;
- (_Bool)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
- (id)primaryViewControllerForExpandingPanelController:(id)arg1;
- (id)primaryViewControllerForCollapsingPanelController:(id)arg1;
- (void)panelController:(id)arg1 didChangeToState:(id)arg2;
- (void)panelController:(id)arg1 willChangeToState:(id)arg2;
- (CDUnknownBlockType)panelControllerWillUpdate:(id)arg1;
- (void)animateToRequest:(id)arg1;
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
@property(retain, nonatomic) UIViewController *trailingViewController;
@property(retain, nonatomic) UIViewController *mainViewController;
@property(retain, nonatomic) UIViewController *leadingViewController;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_allContainedViewControllers;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (id)_primaryContentResponder;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (double)_contentMarginForChildViewController:(id)arg1;
- (void)_updateChildContentMargins;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
- (_Bool)_shouldPersistViewWhenCoding;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)purgeMemoryForReason:(int)arg1;
- (void)unloadViewForced:(_Bool)arg1;
- (void)removeChildViewController:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)toggleMasterVisible:(id)arg1;
- (void)_didEndSnapshotSession;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (_Bool)_isRotating;
- (id)detailViewController;
- (id)masterViewController;
- (_Bool)_isCollapsed;
- (id)_primaryDimmingView;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property(nonatomic) _Bool hidesMasterViewInPortrait;
@property(nonatomic) float gutterWidth;
@property(nonatomic) float masterColumnWidth;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (double)primaryColumnWidth;
- (id)displayModeButtonItem;
- (long long)displayMode;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)encodeWithCoder:(id)arg1;
- (void)_initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithSplitViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

