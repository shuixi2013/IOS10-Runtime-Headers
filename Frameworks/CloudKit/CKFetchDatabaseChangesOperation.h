//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation
{
    _Bool _fetchAllChanges;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _changeTokenUpdatedBlock;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock; // @synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType changeTokenUpdatedBlock; // @synthesize changeTokenUpdatedBlock=_changeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
- (id)initWithPreviousServerChangeToken:(id)arg1;

@end

