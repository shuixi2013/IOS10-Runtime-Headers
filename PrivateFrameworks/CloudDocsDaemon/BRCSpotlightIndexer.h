//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/CSSearchableIndexDelegate-Protocol.h>

@class BRCAccountSession, BRCThrottle, CSSearchableIndex, NSString, br_pacer;
@protocol BRCIndexingArbiter, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCSpotlightIndexer : NSObject <BRCModule, CSSearchableIndexDelegate>
{
    CSSearchableIndex *_index;
    BRCAccountSession *_session;
    BRCThrottle *_failureThrottle;
    NSObject<OS_dispatch_source> *_failureTimer;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    _Bool _readyForIndexing;
    unsigned long long _minNotifRank;
    unsigned long long _flushedNotifRank;
    unsigned long long _clientState;
    NSString *_loggedInUserDisplayName;
    id <BRCIndexingArbiter> _indexingArbiter;
}

+ (void)dropAllContainersIndexForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <BRCIndexingArbiter> indexingArbiter; // @synthesize indexingArbiter=_indexingArbiter;
- (void).cxx_destruct;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cancel;
- (void)close;
- (void)resume;
- (void)_scheduleIndexing;
- (void)_deleteAllItemsAndReindexResumingIndexing:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_deletedDocIdResultSetWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (void)_indexNextBatch;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2;
- (void)_saveStateForNotifRank:(unsigned long long)arg1;
- (void)_scheduleThrottledTask:(CDUnknownBlockType)arg1 taskName:(const char *)arg2;
- (void)_failedIndexing;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (void)_signalIndexing;
- (void)maxNotifRankWasFlushed;
- (void)_deleteAllRanks;
- (void)garbageCollectSupersededRanks;
- (void)docID:(unsigned long long)arg1 wasDeletedForNotifRank:(unsigned long long)arg2;
- (void)dropIndexForClientZone:(id)arg1;
- (void)dealloc;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

