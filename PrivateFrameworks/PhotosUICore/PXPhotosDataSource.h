//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPredicate, NSSet, NSString, PHAsset, PHFetchResult, PHPerson, PHPhotoLibrary, PXLIFOQueue, PXPhotosDataSourceSectionCache;
@protocol OS_dispatch_queue;

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    NSHashTable *_observers;
    PXPhotosDataSourceSectionCache *__sectionCache;
    PXPhotosDataSourceSectionCache *__preparedSectionCache;
    NSDictionary *_hintIndexPathByAssetReferenceCache;
    NSDictionary *_preparedIndexPathByAssetReferenceCache;
    NSDictionary *_preparedResultRecordChangeDetailsByAssetCollection;
    NSMutableDictionary *_resultRecordByAssetCollection;
    NSMutableSet *__inaccurateAssetCollections;
    _Bool _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary *_infoForAssetCollection;
    _Bool _backgroundFetchOriginSectionChanged;
    _Bool _needToStartBackgroundFetch;
    _Bool _isBackgroundFetching;
    _Bool _interruptBackgroundFetch;
    NSMutableDictionary *_pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> *_pendingResultsIsolationQueue;
    _Bool _processAndPublishScheduledOnRunloop;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXLIFOQueue *_backgroundLIFOQueue;
    NSMutableOrderedSet *_queuedAssetCollectionsToFetch;
    NSMutableDictionary *_facesByAssetCache;
    NSMutableDictionary *_weightByAssetCache;
    PHPerson *_filterPerson;
    _Bool _reverseSortOrder;
    _Bool _curate;
    unsigned long long _options;
    unsigned long long _versionIdentifier;
    PHFetchResult *_collectionListFetchResult;
    PHAsset *_referenceAsset;
    long long _backgroundFetchOriginSection;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    unsigned long long _fetchLimit;
    unsigned long long __previousCollectionsCount;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)_curationSharedBackgroundQueue;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property(nonatomic) _Bool curate; // @synthesize curate=_curate;
@property(nonatomic) _Bool reverseSortOrder; // @synthesize reverseSortOrder=_reverseSortOrder;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) long long backgroundFetchOriginSection; // @synthesize backgroundFetchOriginSection=_backgroundFetchOriginSection;
@property(readonly, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
@property(readonly, nonatomic) unsigned long long versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (_Bool)_isCurationEnabled;
- (void)_didFinishBackgroundFetching;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (void)_cancelBackgroundFetchIfNeeded;
- (void)startBackgroundFetchIfNeeded;
- (void)_updateInaccurateAssetCollectionsIfNeeded;
- (id)_inaccurateAssetCollections;
- (void)prefetchAssetsAtIndexPaths:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (_Bool)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)_areFiltersDisabledForAssetCollection:(id)arg1;
- (void)setDisableFilters:(_Bool)arg1 forAssetCollection:(id)arg2;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool containsMultipleAssets;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)uncuratedAssetsInSection:(long long)arg1;
- (id)curatedAssetsInSection:(long long)arg1;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)clearResultsForAssetCollection:(id)arg1;
- (void)stopExcludingAssets:(id)arg1;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)indexPathForLastAsset;
- (id)indexPathForFirstAsset;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)approximateAssetsAtIndexPaths:(id)arg1;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (double)weightForAsset:(id)arg1;
- (id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)keyAssetsInSection:(long long)arg1;
- (id)infoForAssetCollection:(id)arg1;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (id)assetCollectionForSection:(long long)arg1;
- (id)lastAssetCollection;
- (id)firstAssetCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) _Bool curatedFutilely;
- (void)_incrementVersionIdentifier;
@property(readonly, nonatomic) _Bool isImmutable;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)_sectionCache;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
@property(readonly, nonatomic) long long estimatedAllCount;
@property(readonly, nonatomic) long long estimatedOtherCount;
@property(readonly, nonatomic) long long estimatedVideosCount;
@property(readonly, nonatomic) long long estimatedPhotosCount;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_interruptBackgroundFetch;
- (id)_observerInterestingAssetReferences;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishChange:(id)arg1;
- (void)_publishWillChange;
- (void)_publishReloadChange;
- (void)_createFilteredFetchResult:(out id *)arg1 curatedFetchResult:(out id *)arg2 keyAssetsFetchResult:(out id *)arg3 forAssetCollection:(id)arg4 calledOnMainQueue:(_Bool)arg5;
- (void)_performManualReloadWithChangeBlock:(CDUnknownBlockType)arg1;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPaths:(id)arg1;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (id)_resultRecordForAssetCollection:(id)arg1;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (_Bool)_reverseSortOrderForAssetCollection:(id)arg1;
- (_Bool)_isAssetCollectionAccurate:(id)arg1;
- (_Bool)_allSectionsConsideredAccurate;
- (id)_fetcher;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

