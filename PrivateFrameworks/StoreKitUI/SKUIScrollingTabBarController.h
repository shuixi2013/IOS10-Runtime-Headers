//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDynamicBarAnimatorDelegate-Protocol.h>
#import <StoreKitUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollViewDelegateObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarContentCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarControllerItemContextDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarPaletteDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarController-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUICrossFadingTabBar, SKUIDynamicBarAnimator, SKUIProxyScrollView, SKUIScrollingTabBarBackgroundView, SKUIScrollingTabBarContentCollectionView, SKUIScrollingTabBarControllerItemContext, SKUIScrollingTabBarPalette, UINavigationController, UIScrollView, UIView, UIViewController;
@protocol SKUITabBarControllerDelegate;

@interface SKUIScrollingTabBarController : SKUIViewController <SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController>
{
    unsigned long long _activePaletteTransitions;
    CDStruct_efaabef7 _additionalPositionOffsetsUpdateRecord;
    unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;
    _Bool _canHideBarsOnSwipe;
    struct CGSize _contentCollectionViewItemSize;
    SKUIScrollingTabBarContentCollectionView *_contentCollectionView;
    SKUIDynamicBarAnimator *_dynamicBarAnimator;
    UIScrollView *_focusedContentScrollView;
    UIViewController *_focusedViewController;
    _Bool _focusedScrollViewIsDragging;
    long long _indexOfViewControllerWithUpdatedContentSize;
    _Bool _isDelegatingPresentedViewControllerLogicToSelectedViewController;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    unsigned long long _referenceCountForIgnoringContentOffsetUpdateRequests;
    _Bool _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;
    _Bool _shouldShowBarsAfterDraggingDownward;
    SKUICrossFadingTabBar *_tabBar;
    UIView *_tabBarContainerView;
    struct UIOffset _tabBarExplicitHidingOffset;
    _Bool _tabBarExplicitlyHidden;
    SKUIScrollingTabBarBackgroundView *_tabBarExtendedBackgroundView;
    SKUIScrollingTabBarPalette *_tabBarPalette;
    UIViewController *_topLevelFocusedViewController;
    SKUIScrollingTabBarControllerItemContext *_transientViewControllerItemContext;
    NSMapTable *_viewControllerToItemContext;
    _Bool _chargeEnabledOnTabBarButtonsContainer;
    _Bool _scrollEnabled;
    id <SKUITabBarControllerDelegate> _delegate;
    UIViewController *_transientViewController;
    NSArray *_viewControllers;
    struct UIOffset _additionalTabBarButtonsContainerPositionOffset;
    struct UIOffset _additionalTabBarPalettePositionOffset;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)areScrollingTabsAllowed;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool chargeEnabledOnTabBarButtonsContainer; // @synthesize chargeEnabledOnTabBarButtonsContainer=_chargeEnabledOnTabBarButtonsContainer;
@property(nonatomic) struct UIOffset additionalTabBarPalettePositionOffset; // @synthesize additionalTabBarPalettePositionOffset=_additionalTabBarPalettePositionOffset;
@property(nonatomic) struct UIOffset additionalTabBarButtonsContainerPositionOffset; // @synthesize additionalTabBarButtonsContainerPositionOffset=_additionalTabBarButtonsContainerPositionOffset;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *transientViewController; // @synthesize transientViewController=_transientViewController;
@property(nonatomic) id <SKUITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg1;
- (CDStruct_17994511)_viewControllerContentScrollViewContentInsetDescriptor;
- (void)_updateViewControllerContentScrollViewInset;
- (void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateTabBarButtons;
- (void)_updateTabBarBackgroundsAndHairlines;
- (void)_updateStatusBarPositionForcingVisible:(_Bool)arg1;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_updateNavigationBarsForVerticalLayoutChange;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_updateLayoutOfTabBar;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateHorizontalScrollingAvailability;
- (void)_updateHidesBarsOnSwipeAvailability;
- (void)_updateForHorizontalLayoutChange;
- (void)_updateFocusedViewControllerWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;
- (void)_updateDynamicBarGeometry;
- (void)_updateAdditionalPositionOffsetsWithUpdateRecord:(CDStruct_efaabef7)arg1;
- (id)_tabBarBackdropGroupName;
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(CDUnknownBlockType)arg2 forFinalTearDown:(_Bool)arg3;
- (void)_selectTabAtIndex:(unsigned long long)arg1 shouldFallbackToPoppingToTabRootContent:(_Bool)arg2;
- (void)_setFocusedViewController:(id)arg1 showBarsIfNeeded:(_Bool)arg2 animated:(_Bool)arg3 notifyDelegate:(_Bool)arg4;
- (struct UIOffset)_roundedOffsetFromOffset:(struct UIOffset)arg1;
- (void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_animatePaletteWithSetup:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_parentCellForViewController:(id)arg1;
- (void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1 indexOfViewControllerWithUpdatedContentSize:(unsigned long long)arg2;
- (_Bool)_focusedContentScrollViewIsScrolledToOrPastBottom;
- (double)_effectiveTopBarHeight;
- (double)_effectiveBottomBarOffset;
- (void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg1;
- (void)_tabBarButtonTapped:(id)arg1;
- (void)showBarWithTransition:(int)arg1;
- (void)hideBarWithTransition:(int)arg1;
- (void)updateTabBarComponentPositionOffsetsWithPresentationValues;
- (void)didUpdateAdditionalTabBarComponentsPositionOffsets;
- (void)willUpdateAdditionalTabBarComponentsPositionOffsets;
- (void)detachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)detachTabBarPalette:(id)arg1;
- (void)attachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attachTabBarPalette:(id)arg1;
- (id)tabBarPaletteWithHeight:(double)arg1;
- (id)existingTabBarPalette;
@property(readonly, nonatomic) struct CGRect tabBarPaletteFrame;
@property(readonly, nonatomic) struct CGRect tabBarButtonsContainerFrame;
@property(readonly, nonatomic) UIView *tabBar;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
@property(readonly, nonatomic) double contentViewControllerBottomInsetAdjustment;
@property(readonly, nonatomic) NSArray *allViewControllers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)observedScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (void)observedScrollViewWillBeginDragging:(id)arg1;
- (void)observedScrollViewDidScroll:(id)arg1;
- (void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg1;
- (void)scrollingTabBarControllerItemContext:(id)arg1 observedNavigationStackDidChange:(id)arg2;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg1;
- (void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)dynamicBarAnimatorDidUpdate:(id)arg1;
- (_Bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setClientContext:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (id)_backdropBarGroupName;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)presentedViewController;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController *floatingOverlayViewController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
@property(readonly) Class superclass;

@end
