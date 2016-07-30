//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPModelLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryView, MPModelRequest, MPSectionedCollection, NSMapTable, NSMutableDictionary, NSString;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource>
{
    shared_ptr_f34bf174 _itemEntityCache;
    shared_ptr_f34bf174 _sectionEntityCache;
    MPSectionedCollection *_unpersonalizedResults;
    MPModelRequest *_unpersonalizedRequest;
    MPMediaLibraryView *_libraryView;
    NSMapTable *_relativeModelClassToMappingResponse;
    NSMutableDictionary *_sectionToLibraryAddedOverride;
}

+ (id)_libraryObjectWithEntityCache:(shared_ptr_f34bf174)arg1 relativeModelClass:(Class)arg2 identifierSet:(id)arg3 propertySet:(id)arg4;
+ (id)_personalizationPropertiesForProperties:(id)arg1 modelObject:(id)arg2 relativeModelObject:(id)arg3;
+ (id)_identifiersByCombiningPersonalizedIdentifiers:(id)arg1 unpersonalizedIdentifiers:(id)arg2;
+ (id)_personalizationPropertiesForModelClass:(Class)arg1;
+ (id)_personalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;
@property(copy, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride; // @synthesize sectionToLibraryAddedOverride=_sectionToLibraryAddedOverride;
@property(copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse; // @synthesize relativeModelClassToMappingResponse=_relativeModelClassToMappingResponse;
@property(retain, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
@property(copy, nonatomic) MPModelRequest *unpersonalizedRequest; // @synthesize unpersonalizedRequest=_unpersonalizedRequest;
@property(retain, nonatomic) MPSectionedCollection *unpersonalizedResults; // @synthesize unpersonalizedResults=_unpersonalizedResults;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_f34bf174)_newEntityCache;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

