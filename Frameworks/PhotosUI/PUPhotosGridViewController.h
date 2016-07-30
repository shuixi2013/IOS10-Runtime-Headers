//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PLDismissableViewController-Protocol.h>
#import <PhotosUI/PLNavigableAssetContainerViewController-Protocol.h>
#import <PhotosUI/PUAutoScrollerDelegate-Protocol.h>
#import <PhotosUI/PUCollectionViewReorderDelegate-Protocol.h>
#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PUSessionInfoObserver-Protocol.h>
#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUStackedAlbumControllerTransition-Protocol.h>
#import <PhotosUI/PUSwipeSelectionManagerDataSource-Protocol.h>
#import <PhotosUI/PUSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUI/PUTimelineControllerDelegate-Protocol.h>
#import <PhotosUI/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class ICQUpgradeFlowManager, NSArray, NSIndexPath, NSIndexSet, NSMutableDictionary, NSNumber, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLDateRangeFormatter, PUAlbumListTransitionContext, PUAlbumPickerViewController, PUDeletePhotosActionController, PUDuplicateActionController, PUOneUpPresentationHelper, PUPhotoBrowserOneUpPresentationAdaptor, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosGridViewControllerSpec, PUPhotosSharingViewController, PUScrollViewSpeedometer, PUSearchButtonItem, PUSessionInfo, PUSlideshowViewController, PUSwipeSelectionManager, PUTimelineController, PXAssetBadgeManager, PXPhotosDataSource, UIAlertController, UIBarButtonItem, UICollectionViewLayout, UILongPressGestureRecognizer, UINavigationButton, UIPanGestureRecognizer, UIPopoverPresentationController, UIView, UIViewController;
@protocol PUGridLayoutProtocol, UIViewControllerPreviewing;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverPresentationControllerDelegate, PUCollectionViewReorderDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, _UISettingsKeyObserver, PXPhotosDataSourceChangeObserver, PUDeletePhotosActionControllerDelegate, PUPhotosSharingViewControllerDelegate, PUSlideshowViewControllerDelegate, PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource, PUAutoScrollerDelegate, PUOneUpPresentationHelperDelegate, PUPhotosGlobalFooterViewDelegate, PUTimelineControllerDelegate, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate>
{
    NSIndexPath *_menuIndexPath;
    _Bool _isMenuIndexPathExact;
    _Bool _contentViewInSyncWithModel;
    _Bool _didScrollToInitialPosition;
    UIView *_alternateContentView;
    double _lastTransitionWidth;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    NSIndexPath *_visibleReferenceAssetIndexPathBeforeChange;
    double _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet *_visibleSectionsBeforeChange;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_selectAllBarButtonItem;
    UIBarButtonItem *_deselectAllBarButtonItem;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    UIBarButtonItem *_slideshowButton;
    PUSearchButtonItem *_searchButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableDictionary *_progressInfosByIdentifier;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    CDUnknownBlockType _pendingNavigationBlock;
    unsigned long long _suppressesColorSettingsCount;
    NSNumber *_cachedDefaultFooterHeight;
    _Bool _initiallyScrolledToBottom;
    _Bool _alwaysHideTabBar;
    _Bool __hasEditSessionReorderedItems;
    _Bool _showsCustomDoneButtonItemOnLeft;
    _Bool __didForceDataSource;
    PLDateRangeFormatter *__dateRangeFormatter;
    PXPhotosDataSource *_photosDataSource;
    PUSessionInfo *_sessionInfo;
    unsigned long long _allowedActions;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotoSelectionManager *_photoSelectionManager;
    CDUnknownBlockType _onViewDidAppearCompletion;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    UIView *__emptyPlaceholderView;
    unsigned long long __previousCollectionsCount;
    UIViewController *__removeActionSheet;
    UIAlertController *__actionConfirmationAlert;
    UIView *__shareAssetsSender;
    PUDeletePhotosActionController *__deleteActionController;
    PUDuplicateActionController *__duplicateActionController;
    PUAlbumPickerViewController *__albumPickerViewController;
    PUPhotosSharingViewController *__sharingViewController;
    PUSlideshowViewController *__slideshowViewController;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIBarButtonItem *_customDoneButtonItem;
    double _collectionViewLayoutReferenceWidth;
    UIViewController *__pushedPhotoBrowserController;
    PUOneUpPresentationHelper *_oneUpPresentationHelper;
    PUPhotoBrowserOneUpPresentationAdaptor *__photoBrowserOneUpPresentationAdaptor;
    UIPopoverPresentationController *__shareAssetsPopoverController;
    PHCachingImageManager *__cachingImageManager;
    long long __maximumNumberOfRowsToPreheat;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    UIPanGestureRecognizer *_swipeSelectionGestureRecognizer;
    PUSwipeSelectionManager *__swipeSelectionManager;
    long long __batchPreheatingCount;
    CDUnknownBlockType _ppt_nextDeleteFinishedBlock;
    id __pendingViewSizeTransitionContext;
    id __cachedViewSizeTransitionContext;
    id <UIViewControllerPreviewing> _previewingItem;
    NSIndexPath *__previewingIndexPath;
    ICQUpgradeFlowManager *__upgradeFlowManager;
    PUTimelineController *__timelineController;
    NSArray *__dateScrubberConstraints;
    NSArray *__libraryScrubberConstraints;
    PXAssetBadgeManager *__badgeManager;
    struct CGPoint __previousPreheatContentOffset;
    struct CGSize __cachedViewSizeTransitionContextSize;
    struct CGRect __previousPreheatRect;
    struct CGRect __previousPrefetchRect;
}

+ (void)transferPhotoBrowserFromGridViewController:(id)arg1 toGridViewController:(id)arg2;
@property(readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property(retain, nonatomic, setter=_setLibraryScrubberConstraints:) NSArray *_libraryScrubberConstraints; // @synthesize _libraryScrubberConstraints=__libraryScrubberConstraints;
@property(retain, nonatomic, setter=_setDateScrubberConstraints:) NSArray *_dateScrubberConstraints; // @synthesize _dateScrubberConstraints=__dateScrubberConstraints;
@property(retain, nonatomic, setter=_setTimelineController:) PUTimelineController *_timelineController; // @synthesize _timelineController=__timelineController;
@property(retain, nonatomic, setter=_setUpgradeFlowManager:) ICQUpgradeFlowManager *_upgradeFlowManager; // @synthesize _upgradeFlowManager=__upgradeFlowManager;
@property(retain, nonatomic, setter=_setPreviewingIndexPath:) NSIndexPath *_previewingIndexPath; // @synthesize _previewingIndexPath=__previewingIndexPath;
@property(retain, nonatomic, setter=_setPreviewingItem:) id <UIViewControllerPreviewing> previewingItem; // @synthesize previewingItem=_previewingItem;
@property(nonatomic, setter=_setCachedViewSizeTransitionContextSize:) struct CGSize _cachedViewSizeTransitionContextSize; // @synthesize _cachedViewSizeTransitionContextSize=__cachedViewSizeTransitionContextSize;
@property(retain, nonatomic, setter=_setCachedViewSizeTransitionContext:) id _cachedViewSizeTransitionContext; // @synthesize _cachedViewSizeTransitionContext=__cachedViewSizeTransitionContext;
@property(retain, nonatomic, setter=_setPendingViewSizeTransitionContext:) id _pendingViewSizeTransitionContext; // @synthesize _pendingViewSizeTransitionContext=__pendingViewSizeTransitionContext;
@property(nonatomic, setter=_setDidForceDataSource:) _Bool _didForceDataSource; // @synthesize _didForceDataSource=__didForceDataSource;
@property(copy, nonatomic, setter=ppt_setNextDeleteFinishedBlock:) CDUnknownBlockType ppt_nextDeleteFinishedBlock; // @synthesize ppt_nextDeleteFinishedBlock=_ppt_nextDeleteFinishedBlock;
@property(nonatomic, setter=_setBatchPreheatingCount:) long long _batchPreheatingCount; // @synthesize _batchPreheatingCount=__batchPreheatingCount;
@property(retain, nonatomic, setter=_setSwipeSelectionManager:) PUSwipeSelectionManager *_swipeSelectionManager; // @synthesize _swipeSelectionManager=__swipeSelectionManager;
@property(retain, nonatomic, setter=_setSwipeSelectionGestureRecognizer:) UIPanGestureRecognizer *swipeSelectionGestureRecognizer; // @synthesize swipeSelectionGestureRecognizer=_swipeSelectionGestureRecognizer;
@property(retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property(nonatomic, setter=_setMaximumNumberOfRowsToPreheat:) long long _maximumNumberOfRowsToPreheat; // @synthesize _maximumNumberOfRowsToPreheat=__maximumNumberOfRowsToPreheat;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(nonatomic, setter=_setPreviousPreheatContentOffset:) struct CGPoint _previousPreheatContentOffset; // @synthesize _previousPreheatContentOffset=__previousPreheatContentOffset;
@property(nonatomic, setter=_setPreviousPrefetchRect:) struct CGRect _previousPrefetchRect; // @synthesize _previousPrefetchRect=__previousPrefetchRect;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(nonatomic, setter=_setShareAssetsPopoverController:) __weak UIPopoverPresentationController *_shareAssetsPopoverController; // @synthesize _shareAssetsPopoverController=__shareAssetsPopoverController;
@property(retain, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // @synthesize _photoBrowserOneUpPresentationAdaptor=__photoBrowserOneUpPresentationAdaptor;
@property(retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *oneUpPresentationHelper; // @synthesize oneUpPresentationHelper=_oneUpPresentationHelper;
@property(retain, nonatomic, setter=_setPushedPhotoBrowserController:) UIViewController *_pushedPhotoBrowserController; // @synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController;
@property(nonatomic, setter=_setCollectionViewLayoutReferenceWidth:) double collectionViewLayoutReferenceWidth; // @synthesize collectionViewLayoutReferenceWidth=_collectionViewLayoutReferenceWidth;
@property(nonatomic) _Bool showsCustomDoneButtonItemOnLeft; // @synthesize showsCustomDoneButtonItemOnLeft=_showsCustomDoneButtonItemOnLeft;
@property(retain, nonatomic) UIBarButtonItem *customDoneButtonItem; // @synthesize customDoneButtonItem=_customDoneButtonItem;
@property(retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
@property(retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property(retain, nonatomic, setter=_setSharingViewController:) PUPhotosSharingViewController *_sharingViewController; // @synthesize _sharingViewController=__sharingViewController;
@property(retain, nonatomic, setter=_setAlbumPickerViewController:) PUAlbumPickerViewController *_albumPickerViewController; // @synthesize _albumPickerViewController=__albumPickerViewController;
@property(retain, nonatomic, setter=_setDuplicateActionController:) PUDuplicateActionController *_duplicateActionController; // @synthesize _duplicateActionController=__duplicateActionController;
@property(retain, nonatomic, setter=_setDeleteActionController:) PUDeletePhotosActionController *_deleteActionController; // @synthesize _deleteActionController=__deleteActionController;
@property(nonatomic, setter=_setShareAssetsSender:) __weak UIView *_shareAssetsSender; // @synthesize _shareAssetsSender=__shareAssetsSender;
@property(nonatomic, setter=_setActionConfirmationAlert:) __weak UIAlertController *_actionConfirmationAlert; // @synthesize _actionConfirmationAlert=__actionConfirmationAlert;
@property(nonatomic, setter=_setRemoveActionSheet:) __weak UIViewController *_removeActionSheet; // @synthesize _removeActionSheet=__removeActionSheet;
@property(nonatomic, setter=_setHasEditSessionReorderedItems:) _Bool _hasEditSessionReorderedItems; // @synthesize _hasEditSessionReorderedItems=__hasEditSessionReorderedItems;
@property(nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) UIView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(retain, nonatomic, setter=_setPhotoOrStackPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer; // @synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType onViewDidAppearCompletion; // @synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion;
@property(retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property(nonatomic) _Bool alwaysHideTabBar; // @synthesize alwaysHideTabBar=_alwaysHideTabBar;
@property(nonatomic) _Bool initiallyScrolledToBottom; // @synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom;
@property(retain, nonatomic) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout; // @synthesize mainGridLayout=_mainGridLayout;
@property(nonatomic) unsigned long long allowedActions; // @synthesize allowedActions=_allowedActions;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentPurchaseFlowWithFlowManager:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (_Bool)allowSelectAllButton;
- (_Bool)allowSlideshowButton;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (id)gridLayout;
- (id)pu_debugRows;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)pu_handleSecondTabTap;
- (void)navigateToBottomAnimated:(_Bool)arg1;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(_Bool)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 refetchIfNeeded:(_Bool)arg3 animated:(_Bool)arg4;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(_Bool)arg3;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToPhotosDetailsForAssetCollection:(id)arg1;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(_Bool)arg2;
- (_Bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 shouldHidePhotoTokens:(id)arg2;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (void)autoScrollerDidUpdate:(id)arg1;
- (id)_indexesWithoutPlaceholdersFromIndexes:(id)arg1 inSection:(long long)arg2;
- (void)swipeSelectionManager:(id)arg1 updatePhotoSelectionWithIndexes:(id)arg2 inSection:(long long)arg3 selectionMode:(long long)arg4;
- (id)swipeSelectionManager:(id)arg1 photoCollectionAtIndex:(unsigned long long)arg2;
- (long long)swipeSelectionManager:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_handleSwipeSelectionFromLocation:(struct CGPoint)arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)shouldShowMenu;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)previewActionController:(id)arg1 didDismissWithIdentifiedAction:(id)arg2;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (_Bool)allowsPeeking;
- (void)timelineController:(id)arg1 uninstallScrubberView:(id)arg2;
- (void)timelineController:(id)arg1 installScrubberView:(id)arg2;
- (void)_ensureOneUpPresentationHelper;
- (void)_updateBackButtonTitle;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(_Bool)arg2;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(_Bool)arg3 assetMayHaveChanged:(_Bool)arg4;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(_Bool)arg3;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(_Bool *)arg2;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidateAllAssetIndexes;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (void)updateEmptyPlaceholderViewAnimated:(_Bool)arg1;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2;
- (id)newEmptyPlaceholderView;
- (id)_deselectAllBarButtonItem;
- (id)_selectAllBarButtonItem;
- (id)_selectionButton;
- (id)_cancelButtonItem;
- (id)_selectSessionDoneBarButtonItem;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateNavigationBannerAnimated:(_Bool)arg1;
- (id)_pickerBannerView;
- (void)_updateToolbarContentsAnimated:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (void)updateTitle;
- (void)updateGlobalFooterUsingFooterView:(id)arg1;
- (void)updateGlobalFooter;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)updateLayoutMetrics;
- (_Bool)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (struct CGPoint)stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (void)_performAutomaticContentOffsetAdjustment;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)_removeButtonPressed:(id)arg1;
- (id)_allAssetsInCollections;
- (void)_addButtonPressed:(id)arg1;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)_presentSearchViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentSearchViewControllerAnimated:(_Bool)arg1;
- (void)navigateToLastYearPhotosAnimated:(_Bool)arg1;
- (void)navigateToPhotosSearchAnimated:(_Bool)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (id)searchButtonItem;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)_cleanUpAfterSharingDismissal;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3 withAsset:(id)arg4;
- (id)_performDuplicateActivityWithAssets:(id)arg1;
- (void)_handleDuplicateActionCompletionWithSuccess:(_Bool)arg1;
- (id)_performHideActivityWithAssets:(id)arg1;
- (id)_updateSelectionFromSelectionManager:(id)arg1;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (id)_slideshowNavigationControllerForFetchResult:(id)arg1 assetCollection:(id)arg2;
- (void)_slideshowButtonPressed:(id)arg1;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 forAssetCollection:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_shareButtonPressed:(id)arg1;
- (void)sender:(id)arg1 shareSelectedAssetsWithCompletion:(CDUnknownBlockType)arg2;
- (void)_presentSharingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_sharingViewControllerWithSelectionManager:(id)arg1;
- (id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2;
- (unsigned long long)_sharableAssetsTypeInFetchResult:(id)arg1;
- (id)_selectionManagerWithSelectedSharableAssets;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect)arg1;
- (double)cellAspectRatioHint;
- (void)endBatchPreheating;
- (void)beginBatchPreheating;
- (_Bool)isPreheatingEnabled;
- (void)preheatAssets;
- (struct CGSize)contentSizeForPreheating;
- (struct CGPoint)contentOffsetForPreheating;
- (void)resetPreheating;
- (long long)imageDeliveryMode;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (void)beginSuppressingColorSettingsUpdate;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)invalidateGridLayoutIfNecessary;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (id)contentScrollView;
- (long long)_deleteActionForBarButtonItem:(id)arg1;
- (id)_referenceBarButtonItemForDeleteAction:(long long)arg1;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(_Bool)arg2;
- (id)_bestReferenceItemIndexPathWithTopBias:(_Bool)arg1;
- (id)bestReferenceItemIndexPath;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (_Bool)isAddPlaceholderAtIndexPath:(id)arg1;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (_Bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (_Bool)hasScrollableContent;
- (_Bool)wantsGlobalFooter;
- (double)globalHeaderHeight;
- (id)newToolbarItems;
- (_Bool)shouldShowToolbar;
- (_Bool)shouldShowTabBar;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (unsigned long long)dateRangeFormatterPreset;
@property(readonly, nonatomic) PLDateRangeFormatter *_dateRangeFormatter; // @synthesize _dateRangeFormatter=__dateRangeFormatter;
- (id)localizedTitleForAssetCollection:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(_Bool *)arg2;
- (id)localizedTitleForAssets:(id)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2 outLeftClosestMatch:(id *)arg3 outAboveClosestMatch:(id *)arg4;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2;
- (id)localizedSelectionTitle;
- (void)_removeSelectedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasAtLeastOneContainer;
- (void)selectAssets:(id)arg1 fromAssetCollection:(id)arg2;
- (void)_updatePhotoSelectionManager;
- (id)alternateContentView;
- (void)setAlternateContentView:(id)arg1;
- (id)_barButtonSpacerWithWidth:(double)arg1;
- (id)_newEditActionItemsWithWideSpacing:(_Bool)arg1;
- (_Bool)isCameraRoll;
- (_Bool)isTrashBinViewController;
- (_Bool)canDisplayEditButton;
- (_Bool)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (_Bool)_canShareAsset:(id)arg1;
- (_Bool)_canShareContent;
- (id)_assetsAllowingRemove:(_Bool)arg1 orDelete:(_Bool)arg2 fromAssets:(id)arg3;
- (id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2;
- (_Bool)wantsAddContentInToolbar;
- (_Bool)canAddToOtherAlbumContent;
- (_Bool)_canAddContent;
- (_Bool)canDeleteContent;
- (_Bool)_canRemoveContent;
- (_Bool)_canAllContainersPerformEditOperation:(long long)arg1;
- (_Bool)_allowsActions:(unsigned long long)arg1;
- (_Bool)_areAllAssetsSelected;
- (_Bool)isAnyAssetSelected;
- (id)selectedIndexPaths;
- (id)selectedAssets;
- (_Bool)isEmpty;
- (void)setContentViewInSyncWithModel:(_Bool)arg1;
- (_Bool)isContentViewInSyncWithModel;
- (void)_getFirstAsset:(id *)arg1 collection:(id *)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (long long)cellFillMode;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (_Bool)isCurrentCollectionViewDataSource;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult;
- (void)forceDataSourceIfNeeded;
- (id)newGridLayout;
- (_Bool)updateSpec;
- (_Bool)_updateTransitionWidthOnAppearance;
- (_Bool)_transitionWidthHasChanged;
- (void)_invalidateCachedViewSizeTransitionContext;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

