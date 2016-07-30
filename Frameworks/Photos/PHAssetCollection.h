//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCollection.h>

@class CLLocation, NSArray, NSDate, NSString, NSURL, PHQuery;

@interface PHAssetCollection : PHCollection
{
    NSString *_localizedTitle;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    NSDate *_startDate;
    NSDate *_endDate;
    CLLocation *_approximateLocation;
    NSArray *_localizedLocationNames;
    NSArray *_assets;
    PHQuery *_query;
    NSString *_transientIdentifier;
    _Bool _canShowCloudComments;
    _Bool _isPendingPhotoStreamAlbum;
    _Bool _shouldDeleteWhenEmpty;
    _Bool _isLibrary;
    _Bool _isCameraRoll;
    _Bool _isPanoramasCollection;
    _Bool _isWallpaperCollection;
    _Bool _isPhotoStreamCollection;
    _Bool _isCloudSharedAlbum;
    _Bool _isStandInCollection;
    _Bool _isOwnedCloudSharedAlbum;
    _Bool _isMultipleContributorCloudSharedAlbum;
    _Bool _isSmartCollection;
    _Bool _hasUnseenContentBoolValue;
    _Bool _canContributeToCloudSharedAlbum;
    int _plAlbumKind;
    int _pendingItemsCount;
    int _pendingItemsType;
    NSString *_titleFontName;
    NSArray *_assetOids;
    NSString *_title;
    unsigned long long _approximateCount;
    unsigned long long _approximatePhotosCount;
    unsigned long long _approximateVideosCount;
    NSURL *_groupURL;
    CDUnknownBlockType _sortingComparator;
    NSString *_importSessionID;
}

+ (unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2;
+ (unsigned long long)titleFontNameHashFromString:(id)arg1;
+ (unsigned long long)titleFontNameHashFromDate:(id)arg1;
+ (id)defaultTitleFontNames;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchUserLibraryAlbumWithOptions:(id)arg1;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)corePropertiesToFetch;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 includeTrash:(_Bool)arg2;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1;
@property(readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum; // @synthesize canContributeToCloudSharedAlbum=_canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool hasUnseenContentBoolValue; // @synthesize hasUnseenContentBoolValue=_hasUnseenContentBoolValue;
@property(readonly, nonatomic) int pendingItemsType; // @synthesize pendingItemsType=_pendingItemsType;
@property(readonly, nonatomic) int pendingItemsCount; // @synthesize pendingItemsCount=_pendingItemsCount;
@property(readonly, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator; // @synthesize sortingComparator=_sortingComparator;
@property(readonly, nonatomic) NSURL *groupURL; // @synthesize groupURL=_groupURL;
@property(readonly, nonatomic) _Bool isSmartCollection; // @synthesize isSmartCollection=_isSmartCollection;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum; // @synthesize isMultipleContributorCloudSharedAlbum=_isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum; // @synthesize isOwnedCloudSharedAlbum=_isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isStandInCollection; // @synthesize isStandInCollection=_isStandInCollection;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum; // @synthesize isCloudSharedAlbum=_isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamCollection; // @synthesize isPhotoStreamCollection=_isPhotoStreamCollection;
@property(readonly, nonatomic) _Bool isWallpaperCollection; // @synthesize isWallpaperCollection=_isWallpaperCollection;
@property(readonly, nonatomic) _Bool isPanoramasCollection; // @synthesize isPanoramasCollection=_isPanoramasCollection;
@property(readonly, nonatomic) _Bool isCameraRoll; // @synthesize isCameraRoll=_isCameraRoll;
@property(readonly, nonatomic) _Bool isLibrary; // @synthesize isLibrary=_isLibrary;
@property(readonly, nonatomic) unsigned long long approximateVideosCount; // @synthesize approximateVideosCount=_approximateVideosCount;
@property(readonly, nonatomic) unsigned long long approximatePhotosCount; // @synthesize approximatePhotosCount=_approximatePhotosCount;
@property(readonly, nonatomic) unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty; // @synthesize shouldDeleteWhenEmpty=_shouldDeleteWhenEmpty;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum; // @synthesize isPendingPhotoStreamAlbum=_isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSArray *assetOids; // @synthesize assetOids=_assetOids;
@property(readonly, nonatomic) int plAlbumKind; // @synthesize plAlbumKind=_plAlbumKind;
@property(nonatomic, getter=_canShowCloudComments, setter=_setCanShowCloudComments:) _Bool _canShowCloudComments; // @synthesize _canShowCloudComments;
@property(readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property(readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=_approximateLocation;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) PHQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long titleFontNameHash;
@property(readonly, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
@property(readonly, nonatomic) _Bool keyAssetsAtEnd;
@property(readonly, nonatomic) _Bool canContainCustomKeyAssets;
@property(readonly, nonatomic) _Bool canShowComments;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
- (_Bool)canContainAssets;
- (_Bool)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic) _Bool isTrashBin;
@property(readonly, nonatomic) _Bool isLastImportedAlbum;
- (unsigned long long)collectionFixedOrderPriority;
- (_Bool)collectionHasFixedOrder;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
- (unsigned long long)estimatedVideosCount;
- (unsigned long long)estimatedPhotosCount;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
- (id)localizedTitle;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (_Bool)pl_isWallpaperAlbum;
- (id)pl_assetContainer;

@end

