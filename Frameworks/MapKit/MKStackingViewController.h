//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMapTable, NSSet, NSString, UIScrollView, UIView, _MKStackView, _MKStackingContentView;
@protocol MKStackingViewControllerDelegate;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, UIScrollViewDelegate>
{
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    _Bool _isScrollDisabled;
    unsigned long long _countOfCurrentLayoutInvocations;
    UIScrollView *_scrollView;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    _Bool _willRelayoutForPreferredContentSizeChange;
    _Bool _isSettingStackedViews;
    _Bool _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    double _stopLoadingAtHeight;
    _Bool _continueOnViewDidAppear;
    _Bool _needsToPerformLayout;
    NSSet *_viewControllersLaidOut;
    NSSet *_viewControllersRemaining;
    UIView *_overlayView;
    UIViewController *_viewControllerAboveOverlayView;
    _Bool _mayWantSpearators;
    _Bool _needToCallViewControllerLayoutDelegate;
    NSArray *_viewControllers;
    id <MKStackingViewControllerDelegate> _stackingDelegate;
}

@property(nonatomic) __weak id <MKStackingViewControllerDelegate> stackingDelegate; // @synthesize stackingDelegate=_stackingDelegate;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (void)_didScroll;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setOverlayViewFrame;
- (void)removeOverlayViewAnimated:(_Bool)arg1;
- (void)setOverlayView:(id)arg1 belowViewController:(id)arg2;
- (void)_tearDownExitingViewController:(id)arg1;
- (void)_setUpEnteringViewController:(id)arg1;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)_updateFixedHeightAwareControllers;
- (double)heightForInitialLayoutWithWidth:(double)arg1 removeWidthConstraintWhenDone:(_Bool)arg2;
- (double)_fittingHeightForView:(id)arg1;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)_setScrollEnabled:(_Bool)arg1 forcedUpdate:(_Bool)arg2;
@property(nonatomic, getter=willContinueLoadOnViewDidAppear) _Bool continueLoadOnViewDidAppear;
@property(nonatomic, getter=initiallyLoadedHeight) double initialLoadHeight;
- (double)_titleHeight;
- (_Bool)_isSafeToPerformLayout;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

