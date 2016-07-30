//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerPersisterDelegate-Protocol.h>

@class MSPContainerPersister, MSPQuerySource, NSArray, NSCountedSet, NSHashTable, NSMutableArray, NSMutableSet, NSString;
@protocol NSObject><NSCopying, OS_dispatch_queue;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_immutableObjects;
    NSHashTable *_observers;
    MSPContainerPersister *_persister;
    NSCountedSet *_editCoalescingContexts;
    _Bool _isCommittingEnqueuedEdits;
    id <NSObject><NSCopying> _contextCoalescingFor;
    _Bool _coalescedEditsNeedEntireContents;
    NSMutableSet *_coalescedPartialContentIdentifiersToFetch;
    NSMutableArray *_enqueuedCoalescingEditBarrierBlocks;
    NSMutableArray *_enqueuedCoalescingCompletionBlocks;
    _Bool _hasScheduledDelayedCommitForCoalescedEdits;
    _Bool _preventsAssertionsForDuplicateStorageIdentifiers;
    _Bool _simulatesClearingDiscardableDataAfterOperations;
}

+ (void)clearDiscardableDataFromAllContainers;
+ (void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=_simulatesClearingDiscardableDataAfterOperations, setter=_setSimulatesClearingDiscardableDataAfterOperations:) _Bool simulatesClearingDiscardableDataAfterOperations; // @synthesize simulatesClearingDiscardableDataAfterOperations=_simulatesClearingDiscardableDataAfterOperations;
@property(readonly, nonatomic) _Bool _preventsAssertionsForDuplicateStorageIdentifiers; // @synthesize _preventsAssertionsForDuplicateStorageIdentifiers;
@property(readonly, nonatomic) MSPContainerPersister *persister; // @synthesize persister=_persister;
- (void).cxx_destruct;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_commitPendingCoalescedEditsIfAny;
- (_Bool)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)coalesceEditsForContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)_endCoalescingEditsForContext:(id)arg1;
- (id)beginCoalescingEditsWithContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(CDUnknownBlockType)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)editContentsUsingBarrierBlock:(CDUnknownBlockType)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_processNewLoadedContents:(id)arg1;
- (void)_processNewEditedContents:(id)arg1;
- (void)editContentsUsingBarrierBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=_accessQueue) NSObject<OS_dispatch_queue> *accessQueue;
- (void)persisterContentsDidChangeExternally:(id)arg1;
- (id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1;
- (id)_processedContentsForPersisterContents:(id)arg1;
- (void)_performInitialLoadNotifyingObservers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearObjectCacheIfNeeded;
- (void)accessContentsUsingConcurrentBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPersister:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MSPQuerySource *entireContentsQuerySource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

