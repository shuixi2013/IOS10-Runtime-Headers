//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHCollectionList, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHCollectionList *_originalCollectionList;
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    PHRelationshipChangeRequestHelper *_collectionsHelper;
}

+ (void)deleteCollectionLists:(id)arg1;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *collectionsHelper; // @synthesize collectionsHelper=_collectionsHelper;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)didMutate;
- (id)mutations;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateUUIDLocally;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)removeChildCollections:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollection:(id)arg1;
- (void)addChildCollection:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalCollectionList:(id)arg1;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionList;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitled:(_Bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

