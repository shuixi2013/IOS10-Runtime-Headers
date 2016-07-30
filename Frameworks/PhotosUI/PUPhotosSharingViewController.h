//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PLDismissableViewController-Protocol.h>
#import <PhotosUI/PUActivityViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUPhotoViewContentHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingCollectionViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUI/UIActivityViewControllerDelegate-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PHPerson, PUActivityViewController, PUOneUpAssetTransitionInfo, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUPhotosZoomingSharingGridCell, PUScrollViewSpeedometer, PUTransitionViewAnimator, PXAssetBadgeManager, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer, UIView;
@protocol PUPhotosSharingViewControllerDelegate;

@interface PUPhotosSharingViewController : UIViewController <PLDismissableViewController, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>
{
    PUScrollViewSpeedometer *_speedometer;
    NSMutableDictionary *_resultsForAssetCollection;
    NSMutableDictionary *_assetItemsByAssetIdentifier;
    NSMapTable *_indexPathsByOptionView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    double _cachedEmbeddedActivityViewHeight;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    _Bool _shouldScrollToSelection;
    _Bool _didAttemptShareViaAirDrop;
    _Bool _inFlightRotation;
    _Bool _defaultIrisEnabled;
    _Bool _shouldPlayVitalityHintAfterViewDidAppear;
    _Bool __viewInSyncWithModel;
    _Bool _lockScreenCamera;
    PHFetchResult *_photoCollectionsFetchResult;
    NSPredicate *_filterPredicate;
    PUPhotoSelectionManager *_photoSelectionManager;
    NSArray *_excludedActivityTypes;
    struct __CFString *_aggregateKey;
    PHPerson *_person;
    id <PUPhotosSharingViewControllerDelegate> _delegate;
    PUPhotosSharingViewControllerSpec *_spec;
    UICollectionView *_mainCollectionView;
    UIView *_embeddedActivityView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PHCachingImageManager *__cachingImageManager;
    NSMutableSet *__preheatedAssets;
    PUActivityViewController *__embeddedActivityViewController;
    PUActivityViewController *__unembeddedActivityViewController;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    PUOneUpAssetTransitionInfo *_assetTransitionInfo;
    PHAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    PXAssetBadgeManager *__badgeManager;
    CDUnknownBlockType __pptOnDidEndScrollingBlock;
    struct CGRect __previousPreheatRect;
}

@property(copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
@property(readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property(nonatomic, getter=isLockScreenCamera) _Bool lockScreenCamera; // @synthesize lockScreenCamera=_lockScreenCamera;
@property(retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
@property(retain, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
@property(retain, nonatomic) PUOneUpAssetTransitionInfo *assetTransitionInfo; // @synthesize assetTransitionInfo=_assetTransitionInfo;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(retain, nonatomic, setter=_setUnembeddedActivityViewController:) PUActivityViewController *_unembeddedActivityViewController; // @synthesize _unembeddedActivityViewController=__unembeddedActivityViewController;
@property(retain, nonatomic, setter=_setEmbeddedActivityViewController:) PUActivityViewController *_embeddedActivityViewController; // @synthesize _embeddedActivityViewController=__embeddedActivityViewController;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // @synthesize _photoZoomCell=__photoZoomCell;
@property(retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // @synthesize _photoZoomAnimator=__photoZoomAnimator;
@property(retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // @synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) _Bool _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setEmbeddedActivityView:) UIView *embeddedActivityView; // @synthesize embeddedActivityView=_embeddedActivityView;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PUPhotosSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) struct __CFString *aggregateKey; // @synthesize aggregateKey=_aggregateKey;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // @synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult;
- (void).cxx_destruct;
- (void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (struct CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(struct CGRect)arg4;
- (double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_firstSelectedIndexPath;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateMainViewAnimated:(_Bool)arg1;
- (void)_updateNavigationBarAnimated:(_Bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)_updateEmbeddedActivityViewAppearance;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(_Bool)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)ppt_scrollView;
- (void)ppt_faultInScollViewContentSize;
- (_Bool)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (id)transitionCollectionView;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
@property(readonly, nonatomic) PHAsset *currentAsset;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_updateLastKnownReferenceIndexPath;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 embeddedActivityViewFrame:(struct CGRect *)arg3;
- (struct CGRect)_collectionViewContentFrame;
- (void)_endZoomingForCell;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1;
- (void)_handleSelectionOption:(id)arg1;
- (id)_localizedSelectionTitle;
- (void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_isAnyAssetSelected;
- (void)_setSelected:(_Bool)arg1 atIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)_removeActivityAssetItem:(id)arg1;
- (void)_addActivityAssetItem:(id)arg1;
- (id)_updatedActivityAssetItemsForAssets:(id)arg1;
- (id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(_Bool)arg2;
- (void)_prepareActivityViewControllerForUse;
- (id)_requiredActivityViewController;
@property(readonly, nonatomic) PUActivityViewController *_activityViewController;
- (void)_next:(id)arg1;
- (void)_cancel:(id)arg1;
- (id)_currentSelectedAssets;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_photoCollectionAtIndex:(long long)arg1;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_updateLivePhotoForAsset:(id)arg1 cell:(id)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (_Bool)_shouldShowAsset:(id)arg1;
- (_Bool)_embedsActivityView;
- (void)dealloc;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResults:(id)arg2 filterPredicate:(id)arg3 selection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

