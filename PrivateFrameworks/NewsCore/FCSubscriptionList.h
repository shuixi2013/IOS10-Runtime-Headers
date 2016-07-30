//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateZoneController.h>

#import <NewsCore/FCMutedTagIDsProviding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface FCSubscriptionList : FCPrivateZoneController <FCMutedTagIDsProviding>
{
    NSDictionary *_subscriptionsBySubscriptionID;
    NSSet *_subscribedTagIDs;
    NSDictionary *_pendingSubscriptionsBySubscriptionID;
    NSSet *_mutedSubscribedTagIDs;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
}

+ (id)mutedSubscriptionIDForTagID:(id)arg1;
+ (id)subscriptionIDForUrl:(id)arg1;
+ (id)subscriptionIDForTagID:(id)arg1;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID; // @synthesize mutableSubscriptionsBySubscriptionID=_mutableSubscriptionsBySubscriptionID;
@property(copy, nonatomic) NSSet *mutedSubscribedTagIDs; // @synthesize mutedSubscribedTagIDs=_mutedSubscribedTagIDs;
@property(copy, nonatomic) NSDictionary *pendingSubscriptionsBySubscriptionID; // @synthesize pendingSubscriptionsBySubscriptionID=_pendingSubscriptionsBySubscriptionID;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property(copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;
- (void).cxx_destruct;
- (void)_regenerateSortedSubscriptions;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3;
- (id)_subscriptionFromRecord:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)removeMutedSubscriptionForTagID:(id)arg1;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (void)modifyPendingSubscription:(id)arg1;
- (void)removePendingSubscription:(id)arg1;
- (void)addPendingSubscription:(id)arg1;
- (id)pendingSubscriptionForPollingURL:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1 replacingPendingSubscriptionWithPollingURL:(id)arg2;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2;
- (_Bool)hasNotificationsEnabledForTagID:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1 notificationsEnabled:(_Bool)arg2;
- (id)subscriptionForTagID:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1;
- (_Bool)hasSubscriptionForTagID:(id)arg1;
- (_Bool)canAddSubscription;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

