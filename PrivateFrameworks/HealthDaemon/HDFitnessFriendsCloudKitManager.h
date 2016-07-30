//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/APSConnectionDelegate-Protocol.h>
#import <HealthDaemon/HDFitnessFriendsManagerReadyObserver-Protocol.h>

@class APSConnection, CKContainer, CKShare, HDFitnessFriendsCloudKitServerChangeTokenCache, HDFitnessFriendsCloudKitUtility, HDFitnessFriendsManager, HDFitnessFriendsNotificationStep, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessFriendsCloudKitManager : NSObject <APSConnectionDelegate, HDFitnessFriendsManagerReadyObserver>
{
    HDFitnessFriendsManager *_fitnessFriendsManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    APSConnection *_apsConnection;
    CKShare *_activityDataShare;
    NSHashTable *_observers;
    HDFitnessFriendsNotificationStep *_relationshipNotificationStep;
    HDFitnessFriendsNotificationStep *_remoteRelationshipNotificationStep;
    HDFitnessFriendsNotificationStep *_activitySnapshotNotificationStep;
    HDFitnessFriendsNotificationStep *_workoutNotificationStep;
    HDFitnessFriendsNotificationStep *_achievementNotificationStep;
    HDFitnessFriendsNotificationStep *_notificationEventNotificationStep;
    _Bool _pushNotificationRecieved;
    _Bool _fetchExecuting;
    _Bool _fetchPending;
    HDFitnessFriendsCloudKitServerChangeTokenCache *_serverChangeTokenCache;
    _Bool _cloudKitAccountActive;
    _Bool _readyForOperations;
    _Bool _hasCompletedFirstFetch;
    CKContainer *_container;
    HDFitnessFriendsCloudKitUtility *_cloudKitUtility;
}

+ (id)_subscriptionWithID:(id)arg1 recordType:(id)arg2 highPriority:(_Bool)arg3;
+ (id)_activityDataShareRecordID;
+ (id)activityDataRootRecordID;
+ (id)activityDataRecordZoneID;
@property(retain, nonatomic) HDFitnessFriendsCloudKitUtility *cloudKitUtility; // @synthesize cloudKitUtility=_cloudKitUtility;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) _Bool readyForOperations; // @synthesize readyForOperations=_readyForOperations;
- (void).cxx_destruct;
- (id)_friendUUIDForActivityDataShareRecordZoneID:(id)arg1;
- (void)_handleNewPrivateDatabaseRecordChanges:(id)arg1 sharedDatabaseRecordChanges:(id)arg2;
- (void)_queue_notifyObserversOfEndUpdates;
- (void)_queue_notifyObserversOfBeginUpdates;
- (void)_queue_notifyObserversOfFinishedFetching;
- (void)_queue_performNotificationStep:(id)arg1 onRecords:(id)arg2 dispatchGroup:(id)arg3;
- (void)_enumerateRecordsByRecordZoneID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_createNotificationSteps;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptSharesWithURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareURLForShare:(id)arg1;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createShareWithRootRecord:(id)arg1 otherRecordsToSave:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchCloudKitAccountStatusAndNotifyOfChanges;
- (void)_queue_checkForAndHandleCloudKitAccountChanges;
- (void)_queue_performNewAccountInitialSetupTasks;
- (void)_queue_clearChangeTokenCacheAndFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cloudKitAccountStatusChanged:(id)arg1;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pushDisable;
- (void)_pushEnable;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)_apsEnvironmentString;
- (void)_verifyOrCreateSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleIncomingNotification:(id)arg1;
- (void)_subscribeToChangesInPrivateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_subscribeToChangesInSharedDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_subscribeToChangesInDatabase:(id)arg1 subscriptionPrefix:(id)arg2 recordTypesWithPriority:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_saveSubscriptions:(id)arg1 intoDatabase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAllChangesEnqueueingNewFetchIfNecessary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllChangesIfNotCurrentlyFetchingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startFetchAllChangesOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchOrCreateActivityDataShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createActivityDataShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)setHasCompletedFirstFetch:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasCompletedFirstFetch; // @synthesize hasCompletedFirstFetch=_hasCompletedFirstFetch;
- (void)fetchAndHandleAccountStatus;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

