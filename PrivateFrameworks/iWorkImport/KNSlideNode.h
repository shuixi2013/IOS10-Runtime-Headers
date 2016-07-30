//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEResolverContainer-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKSearchTarget-Protocol.h>

@class KNAbstractSlide, KNSlideTree, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSPLazyReference;

__attribute__((visibility("hidden")))
@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer>
{
    TSPLazyReference *mSlideReference;
    KNSlideTree *mSlideTree;
    NSMutableDictionary *mThumbnails;
    _Bool mThumbnailsAreDirty;
    NSSet *mDigestsForDatasThatNeedDownloadForThumbnail;
    _Bool mIsHidden;
    _Bool mIsCollapsed;
    _Bool mIsCollapsedInOutlineView;
    _Bool mHasBodyInOutlineView;
    _Bool mHasTransition;
    _Bool mHasNote;
    _Bool mSlideNumberVisible;
    unsigned long long mDepth;
    unsigned long long mSlideSpecificHyperlinksCount;
    NSString *mClassicUniqueID;
    NSString *mObsoleteUniqueIdentifier;
    unsigned int mTableNameCounter;
    NSArray *mChildren;
    NSMutableDictionary *_slideSpecificHyperlinkMap;
    _Bool _hasExplicitBuilds;
    _Bool _hasExplicitBuildsIsUpToDate;
    unsigned long long _eventCount;
    _Bool _eventCountIsUpToDate;
    NSMutableSet *mRemappedTableNames;
}

+ (id)slideNodeForSelectionPath:(id)arg1;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (_Bool)needsObjectUUID;
@property(readonly, nonatomic) NSDictionary *slideSpecificHyperlinkMap; // @synthesize slideSpecificHyperlinkMap=_slideSpecificHyperlinkMap;
@property(nonatomic) _Bool hasBodyInOutlineView; // @synthesize hasBodyInOutlineView=mHasBodyInOutlineView;
@property(nonatomic, getter=isCollapsedInOutlineView) _Bool collapsedInOutlineView; // @synthesize collapsedInOutlineView=mIsCollapsedInOutlineView;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=mIsCollapsed;
@property(readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=mThumbnails;
@property(nonatomic) KNSlideTree *slideTree; // @synthesize slideTree=mSlideTree;
- (void)p_commonInit;
- (void)purgeU15ModelIfNeeded;
- (void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2;
- (void)addOldModelDescendantsToSlideTree:(id)arg1;
- (id)descendantsOmittingSkippedSlideNodes:(_Bool)arg1 omittingCollapsedSlideNodes:(_Bool)arg2;
- (id)descendants;
- (void)clearRemappedTableNames;
- (id)remappedTableNames;
- (void)addRemappedTableName:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (_Bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (void)removeAllThumbnails;
- (void)removeThumbnailAtSize:(struct CGSize)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(retain, nonatomic) KNAbstractSlide *slide;
@property(readonly, nonatomic) KNAbstractSlide *slideIfLoaded;
- (id)childSearchTargets;
- (id)childEnumerator;
- (void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)p_removeHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)p_addHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2;
- (_Bool)hasSlideSpecificHyperlinkToNode:(id)arg1;
- (_Bool)hasSlideSpecificHyperlinks;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (unsigned long long)p_eventCount;
- (void)invalidateBuildEventCountCaches;
- (unsigned long long)safeEventCount;
@property(readonly, nonatomic) unsigned long long eventCount;
- (_Bool)safeHasBuildEvents;
@property(readonly, nonatomic) _Bool hasBuildEvents;
- (void)p_updateHasExplicitBuilds;
@property(readonly, nonatomic) _Bool hasExplicitBuilds;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) _Bool hasChildren;
@property(readonly, nonatomic) KNSlideNode *previousSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *nextSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *previous;
@property(readonly, nonatomic) KNSlideNode *next;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(nonatomic) NSString *classicUniqueID;
@property(nonatomic) unsigned long long depth;
@property(nonatomic) _Bool isSlideNumberVisible;
@property(nonatomic) _Bool hasNote;
@property(nonatomic) _Bool hasTransition;
@property(copy, nonatomic) NSSet *digestsForDatasThatNeedDownloadForThumbnail;
@property(nonatomic) _Bool thumbnailsAreDirty;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct SlideNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct SlideNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)didLoadSlide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

