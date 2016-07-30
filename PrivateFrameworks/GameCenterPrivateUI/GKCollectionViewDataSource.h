//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/GKCollectionViewDataSourceDelegate-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDataSource-Protocol.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSHashTable, NSMutableDictionary, NSString;
@protocol GKCollectionViewDataSourceDelegate;

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource>
{
    id <GKCollectionViewDataSourceDelegate> _delegate;
    NSMutableDictionary *_kindsToFactories;
    NSHashTable *_listeners;
    NSMutableDictionary *_sectionsToMetrics;
    NSMutableDictionary *_sectionsToSearchKeys;
    GKGridLayoutMetrics *_dataSourceMetricsInternal;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    NSString *_defaultSearchKey;
}

@property(retain, nonatomic) NSString *defaultSearchKey; // @synthesize defaultSearchKey=_defaultSearchKey;
@property(retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // @synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal;
@property(retain, nonatomic) GKGridLayoutMetrics *dataSourceMetricsInternal; // @synthesize dataSourceMetricsInternal=_dataSourceMetricsInternal;
@property(retain, nonatomic) NSMutableDictionary *sectionsToSearchKeys; // @synthesize sectionsToSearchKeys=_sectionsToSearchKeys;
@property(retain, nonatomic) NSMutableDictionary *sectionsToMetrics; // @synthesize sectionsToMetrics=_sectionsToMetrics;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) NSMutableDictionary *kindsToFactories; // @synthesize kindsToFactories=_kindsToFactories;
- (id)targetForAction:(SEL)arg1;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1;
- (void)notifyPlaceholderUpdated:(_Bool)arg1;
- (void)notifyDidReloadData;
- (void)notifySectionsMovedWithItems;
- (void)notifySectionMovedFrom:(long long)arg1 to:(long long)arg2;
- (void)notifySectionsRefreshed:(id)arg1;
- (void)notifySectionsRemoved:(id)arg1;
- (void)notifySectionsInserted:(id)arg1;
- (void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2;
- (void)notifyItemsRefreshedAtIndexPaths:(id)arg1;
- (void)notifyItemsRemovedAtIndexPaths:(id)arg1;
- (void)notifyItemsInsertedAtIndexPaths:(id)arg1;
- (long long)totalItemCount;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(_Bool)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) _Bool isRootDataSource;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (id)metricsForSectionInternal:(long long)arg1;
- (id)metricsForSection:(long long)arg1;
@property(copy, nonatomic) GKSectionMetrics *defaultSectionMetrics; // @dynamic defaultSectionMetrics;
- (void)updateSupplementaryMetricsForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) GKGridLayoutMetrics *dataSourceMetrics; // @dynamic dataSourceMetrics;
@property(readonly, nonatomic) _Bool isSearchable;
- (void)enumerateItemsAndIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (void)setSearchKey:(id)arg1 forSection:(long long)arg2;
- (id)searchKeyForSection:(long long)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (_Bool)containsDataSource:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
@property(nonatomic) id <GKCollectionViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_gkDescriptionWithChildren:(int)arg1;
@property(readonly, copy) NSString *description;
- (id)localDescription;
- (void)dealloc;
- (id)init;
- (id)supplementaryViewFactoryForKind:(id)arg1;
- (void)registerSupplementaryViewOfKind:(id)arg1 withClass:(Class)arg2 target:(id)arg3 configurator:(SEL)arg4;
- (void)registerSupplementaryViewOfKind:(id)arg1 withFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

