//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKServerChangeToken, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    unsigned long long _numRequestsSent;
    NSObject<OS_dispatch_group> *_fetchZonesGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup; // @synthesize fetchZonesGroup=_fetchZonesGroup;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

