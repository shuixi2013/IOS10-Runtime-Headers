//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCZone-Protocol.h>

@class BRCAccountSession, BRCAppLibrary, BRCCreateZoneAndSubscribeOperation, BRCDeadlineSource, BRCItemID, BRCPQLConnection, BRCServerZone, BRCSyncBudgetThrottle, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncUpOperation, BRCThrottleBase, BRCZoneRowID, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSSet, NSString;
@protocol BRCClientZoneDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCClientZone : NSObject <BRCZone>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    id <BRCClientZoneDelegate> _delegate;
    BRCZoneRowID *_dbRowID;
    NSString *_zoneName;
    NSString *_ownerName;
    NSString *_zoneID;
    NSString *_mangledID;
    BRCPQLConnection *_db;
    unsigned int _state;
    _Bool _activated;
    _Bool _isInitialCreation;
    BRCAppLibrary *_defaultAppLibrary;
    BRCThrottleBase *_readerThrottle;
    BRCCreateZoneAndSubscribeOperation *_createZoneOperation;
    NSObject<OS_dispatch_queue> *_createZoneQueue;
    NSMutableArray *_zoneCreationCompletionBlocks;
    long long _syncUpRetryAfter;
    // Error parsing type: AI, name: _syncState
    BRCSyncUpOperation *_syncUpOperation;
    NSError *_lastSyncUpError;
    BRCSyncDownOperation *_syncDownOperation;
    id _syncDeadlineSourceResumer;
    NSError *_lastSyncDownError;
    BRCSyncOperationThrottle *_syncUpThrottle;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncOperationThrottle *_syncDownThrottle;
    BRCDeadlineSource *_syncDeadlineSource;
    NSMutableIndexSet *_appliedTombstoneRanks;
    long long _lastInsertedRank;
    NSDate *_lastSyncDownDate;
    NSDate *_lastAttemptedSyncDownDate;
    NSObject<OS_dispatch_source> *_resetTimer;
    NSMutableDictionary *_syncDownBlockToPerformForBookmarkData;
    _Bool _shouldShowiCloudDriveAppInstallationNotification;
    NSMutableDictionary *_onDiskBlockToPerformForItemID;
    NSMutableDictionary *_downloadedBlockToPerformForItemID;
    NSMutableDictionary *_syncDownBlockToPerformForItemID;
    NSMutableSet *_appLibraries;
    NSMutableArray *_nextSyncDownBarriers;
    NSMutableArray *_currentSyncDownBarriers;
    NSMutableArray *_nextIdleHandlers;
    NSMutableArray *_syncDownDependencies;
    NSMutableArray *_allItemsDidUploadTrackers;
    float _syncUpBatchSizeMultiplier;
    _Bool _needsSave;
    _Bool _t_syncDownBlocked;
    unsigned long long _requestID;
    NSArray *_syncThrottles;
    NSString *_osNameRequiredToSync;
    NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp;
    NSString *_t_syncBlockedUntilOSName;
}

@property(readonly, nonatomic) _Bool _t_syncDownBlocked; // @synthesize _t_syncDownBlocked;
@property(retain, nonatomic) NSDate *lastAttemptedSyncDownDate; // @synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate;
@property(readonly, nonatomic) NSSet *appLibraries; // @synthesize appLibraries=_appLibraries;
@property(readonly, nonatomic) NSString *osNameRequiredToSync; // @synthesize osNameRequiredToSync=_osNameRequiredToSync;
@property(retain, nonatomic) BRCAppLibrary *defaultAppLibrary; // @synthesize defaultAppLibrary=_defaultAppLibrary;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) BRCDeadlineSource *syncDeadlineSource; // @synthesize syncDeadlineSource=_syncDeadlineSource;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) long long lastInsertedRank; // @synthesize lastInsertedRank=_lastInsertedRank;
@property(readonly, nonatomic) unsigned long long currentRequestID; // @synthesize currentRequestID=_requestID;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, nonatomic) NSString *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCClientZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
- (void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2;
- (void)_t_flushIdleBlocks;
- (_Bool)_t_isIdle;
@property(readonly, nonatomic) NSString *_t_syncBlockedUntilOSName; // @synthesize _t_syncBlockedUntilOSName;
@property(readonly, nonatomic) NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp; // @synthesize _t_osNamesByItemIDBlockedForSyncUp;
- (void)_t_resumeSyncDown;
- (void)_t_pauseSyncDown;
- (void)_t_markBlockedUntilOSName:(id)arg1;
- (void)_t_removeAllItemIDsSyncUpBlocking;
- (void)_t_removeItemIDSyncUpBlocking:(id)arg1;
- (void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2;
- (_Bool)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (_Bool)_dumpItemsToContext:(id)arg1 error:(id *)arg2;
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int *)arg4 containsSize:(_Bool)arg5 context:(id)arg6;
- (long long)throttleHashWithItemID:(id)arg1;
- (_Bool)removeSyncDownForItemIDBlock:(id)arg1;
- (_Bool)removeItemIsDownloadedBlock:(id)arg1;
- (_Bool)removeItemOnDiskBlock:(id)arg1;
@property(readonly, nonatomic) _Bool hasHighPriorityWatchers;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (void)_prepareForForegroundSyncDown;
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithIDIsDownloaded:(id)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithIDIsOnDisk:(id)arg2;
- (CDUnknownBlockType)popDownloadedBlockForItemID:(id)arg1;
- (CDUnknownBlockType)popOnDiskBlockForItemID:(id)arg1;
- (void)_removeDownloadedBlockToPerformForItemID:(id)arg1;
- (void)_removeOnDiskBlockToPerformForItemID:(id)arg1;
- (void)_removeAllShareAcceptanceBlocks;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)existsByItemID:(id)arg1;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)documentItemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1;
- (id)serverItemByRowID:(unsigned long long)arg1;
- (id)serverItemByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1;
- (_Bool)_resetItemsTable;
- (_Bool)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (_Bool)dumpStatusToContext:(id)arg1 error:(id *)arg2;
- (_Bool)hasCompletedInitialSyncDownOnce;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)handleRootRecordDeletion;
- (void)recomputeAllItemsDidUploadState;
- (void)_allItemsDidUploadWithError:(id)arg1;
- (_Bool)_hasAllItemsDidUploadHandlers;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(_Bool)arg3 syncDownDate:(id)arg4;
- (void)_fixupMissingCrossMovedItems;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3;
- (void)notifyClient:(id)arg1 whenIdle:(CDUnknownBlockType)arg2;
- (void)notifyClient:(id)arg1 afterNextSyncDown:(CDUnknownBlockType)arg2;
- (void)_showiCloudDriveAppInstallationNotificationIfNeeded;
@property(readonly, nonatomic) NSArray *syncThrottles; // @synthesize syncThrottles=_syncThrottles;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3;
- (void)learnCKInfosFromSavedRecords:(id)arg1;
- (unsigned long long)nextSyncUpRequestID;
- (void)_markRequestIDAcked;
- (void)_markLatestSyncRequestFailed;
- (void)clearSyncUpError;
- (void)resetSyncBudgetAndThrottle;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncDown;
- (void)scheduleSyncUp;
- (void)_startSync;
- (id)syncDownImmediately;
- (void)removeSyncDownDependency:(id)arg1;
- (void)addSyncDownDependency:(id)arg1;
- (void)_createCloudKitZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)createCloudKitZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
@property(readonly) unsigned int syncState;
- (void)didClearOutOfQuota;
- (struct PQLResultSet *)liveTargetedAliasesEnumeratorWithCount:(unsigned long long)arg1;
- (struct PQLResultSet *)documentsNotIdleEnumerator;
- (struct PQLResultSet *)itemsWithInFlightDiffsEnumerator;
- (struct PQLResultSet *)itemsEnumeratorWithDB:(id)arg1;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)xattrForSignature:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasInitialFaultsEverLive;
- (_Bool)hasInitialFaultsLive;
- (_Bool)isSyncBlockedBecauseOSNeedsUpgrade;
- (_Bool)isSyncBlockedBecauseAppNotInstalled;
- (_Bool)isSyncBlockedOrBrokenStructure;
- (_Bool)isSyncBlocked;
- (void)clearStateBits:(unsigned int)arg1;
- (_Bool)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_syncContextDidBecomeForeground:(id)arg1;
- (void)_syncContextDidBecomeBackground:(id)arg1;
@property(readonly, nonatomic) _Bool isForeground;
@property(readonly, nonatomic) BRCItemID *zoneRootItemID;
@property(readonly, nonatomic) NSSet *appLibraryIDs;
- (void)disconnectNSMDQListenerAsync;
@property(readonly, nonatomic) _Bool isCloudDocsZone;
@property(readonly, nonatomic) _Bool hasDefaultAppLibrary;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;
- (void)registerAllItemsDidUploadTracker:(id)arg1;
- (id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id *)arg1;
- (id)itemCountPendingUploadOrSyncUpAndReturnError:(id *)arg1;
- (_Bool)handleZoneLevelErrorIfNeeded:(id)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)close;
- (void)resume;
- (void)removeAppLibrary:(id)arg1;
- (void)addAppLibrary:(id)arg1;
- (void)associateWithServerZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(_Bool)arg7;
- (id)init;
- (void)_increaseSyncUpBatchSizeAfterSuccess;
- (void)_decreaseSyncUpBatchSizeAfterError;
@property(readonly, nonatomic) unsigned int syncUpBatchSize;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(readonly, nonatomic) _Bool isPrivateZone;
- (id)asSharedClientZone;
- (id)asPrivateClientZone;
- (id)ownerName;
- (void)_finishedReset:(unsigned long long)arg1;
- (void)_mkdirAppLibraryIfNeeded:(id)arg1;
- (id)_cancelAllOperationsForReset;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performWhileResettingClientTruths:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_removeTargetedAliasesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_reset:(unsigned long long)arg1;
- (void)scheduleReset:(unsigned long long)arg1;
- (void)cancelReset;

@end

