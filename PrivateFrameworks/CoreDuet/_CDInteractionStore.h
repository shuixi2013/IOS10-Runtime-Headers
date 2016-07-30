//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionDeleting-Protocol.h>
#import <CoreDuet/_CDInteractionQuerying-Protocol.h>
#import <CoreDuet/_CDInteractionRecording-Protocol.h>

@class _CDInteractionStoreNotifier, _DKCoreDataStorage;
@protocol OS_dispatch_queue, _DKLocationHistorian;

@interface _CDInteractionStore : NSObject <_CDInteractionRecording, _CDInteractionQuerying, _CDInteractionDeleting>
{
    _DKCoreDataStorage *_storage;
    NSObject<OS_dispatch_queue> *_workQueue;
    _CDInteractionStoreNotifier *_notifier;
    id <_DKLocationHistorian> _locationHistorian;
}

+ (id)defaultDatabaseDirectory;
+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
@property(retain) id <_DKLocationHistorian> locationHistorian; // @synthesize locationHistorian=_locationHistorian;
- (void).cxx_destruct;
- (void)anonymizeContactsWithSalt:(id)arg1;
- (void)anonymizeKeywordsWithSalt:(id)arg1;
- (void)anonymizeInteractionsWithSalt:(id)arg1;
- (void)anonymizeWithSalt:(id)arg1;
- (id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)deleteStorage;
- (_Bool)recordVersionNumber:(long long)arg1;
- (long long)queryVersionNumber;
- (void)closeStorage;
- (unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteUnreferencedContacts;
- (unsigned long long)deleteUnreferencedKeywords;
- (id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (unsigned long long)numberOfContactsMatchingPredicate:(id)arg1;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id *)arg3;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)openAndCheckIfReadable;
- (_Bool)recordInteractionsBatch:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)recordInteractions:(id)arg1;
- (_Bool)recordInteraction:(id)arg1;
- (id)createInteractionFromRecord:(id)arg1;
- (id)createKeywordFromRecord:(id)arg1;
- (id)getContactForRecord:(id)arg1;
- (id)dateFromTimeIntervalSinceRef:(double)arg1;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 contactCache:(id)arg4;
- (void)updateCachedStatsForContactRecord:(id)arg1 isSender:(_Bool)arg2 withInteraction:(id)arg3;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2;
- (void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2;
- (id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2;
- (id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2;
- (id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2;
- (id)init;
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
- (id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2;

@end

