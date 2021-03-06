//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCDeadlineScheduler, BRCDeadlineSource, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSUploader : BRCFSSchedulerBase <BRCModule>
{
    NSMutableDictionary *_thumbnailsOperations;
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    _Bool _prepareReachedMax;
    _Bool _initialKickDone;
    _Bool _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler *_uploadsDeadlineScheduler;
}

@property(readonly, nonatomic) NSDictionary *thumbnailsOperationsByID; // @synthesize thumbnailsOperationsByID=_thumbnailsOperations;
@property(readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler; // @synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler;
@property(nonatomic) _Bool isDefaultOwnerOutOfQuota; // @synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota;
- (void).cxx_destruct;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (void)_rescheduleThrottlesOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (_Bool)hasItemsOverQuotaInZone:(id)arg1;
- (_Bool)hasItemsOverQuotaForOwner:(id)arg1;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 throttleID:(long long)arg3 stageID:(id)arg4 error:(id)arg5;
- (void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2;
- (_Bool)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id *)arg4;
- (void)_computeRecordForThrottleID:(long long)arg1 item:(id)arg2;
- (void)_updateRecord:(id)arg1 throttleID:(long long)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (void)_updateRecord:(id)arg1 item:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (_Bool)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (id)_thumbnailOperationForThrottleID:(id)arg1;
- (void)_doneFetchingThumbnailForThrottleID:(id)arg1;
- (void)_startFetchThumbnail:(id)arg1 throttleID:(id)arg2;
- (void)schedule;
- (void)_scheduleRetries;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1;
- (void)removeBoostedDocID:(id)arg1;
- (void)boostDocID:(id)arg1 item:(id)arg2;
- (void)uploadItem:(id)arg1;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)deleteThrottlesForZone:(id)arg1;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_cancelThrottleID:(long long)arg1;
- (void)_cancelThrottles:(id)arg1 state:(int)arg2;
- (void)_bumpThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3;
- (void)_willTryThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3 operationID:(id)arg4;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (_Bool)isUploadingItem:(id)arg1;
- (id)_documentItemForThrottleID:(long long)arg1 operationID:(id)arg2;
- (id)_documentItemForThrottleID:(long long)arg1 stageID:(id)arg2;
- (void)_updateThrottleID:(long long)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (void)cancel;
- (void)close;
- (void)suspend;
- (void)resume;
- (id)initWithAccountSession:(id)arg1;
- (unsigned long long)_minBatchSize;
- (unsigned long long)_thumbnailOperationsMax;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly) Class superclass;

@end

