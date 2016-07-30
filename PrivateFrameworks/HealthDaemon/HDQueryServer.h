//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HKQueryServer-Protocol.h>

@class HDProfile, HKObjectType, HKSampleType, NSDictionary, NSString, NSUUID, _HKFilter;
@protocol HDQueryServerDelegate, NSXPCProxyCreating, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServer, HDDataObserver>
{
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    _Bool _unitTestShouldWaitForQueryStart;
    int _unitTestSamplesBeforeSuspend;
    NSObject<OS_dispatch_semaphore> *_unitTestActivationSemaphore;
    NSObject<OS_dispatch_semaphore> *_unitTestProcessSuspendedSemaphore;
    CDUnknownBlockType _unitTestQueryStateHandler;
    CDUnknownBlockType _unitTestBatchLimitSuspendProcessHandler;
    _Bool _didEndActivationTransaction;
    _Bool _observingData;
    NSDictionary *_baseDataEntityEncodingOptions;
    int _shouldFinish;
    int _shouldPause;
    NSUUID *_queryUUID;
    _HKFilter *_filter;
    id <NSXPCProxyCreating> _clientProxy;
    HDProfile *_profile;
    id <HDQueryServerDelegate> _delegate;
    long long _queryState;
    double _collectionInterval;
    HKObjectType *_objectType;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(nonatomic) long long queryState; // @synthesize queryState=_queryState;
@property(readonly, nonatomic) __weak id <HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) id <NSXPCProxyCreating> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
- (void).cxx_destruct;
- (id)_queryStateString;
- (id)diagnosticDescription;
- (id)_predicateString;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 anchor:(id)arg2 includeDeletedObjects:(_Bool)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_queue_validateConfiguration:(id *)arg1;
- (void)_queue_endObservingDataTypes;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_stop;
- (void)_queue_start;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldObserveAllSampleTypes;
- (id)_sampleTypeToObserveForUpdates;
- (_Bool)_shouldListenForUpdates;
- (id)newDataEntityEnumerator;
- (_Bool)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2 authorizationAnchor:(id *)arg3;
- (_Bool)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) HKSampleType *sampleType;
- (void)_queue_stopDataCollection;
- (void)_queue_startDataCollection;
- (void)_queue_setQueueState:(long long)arg1;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToRunning;
- (_Bool)_shouldSuspendQuery;
- (_Bool)_shouldStopProcessingQuery;
- (void)resumeServer;
- (void)_pauseServerValidate:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseServerValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseServer;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)deactivateServer;
- (void)_queue_startQueryIfNecessary;
- (void)_scheduleStartQuery;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)activateServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_activationTransactionString;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)_unitTestProcessResume;
- (void)_unitTestBatchLimitReachedWaitTimeoutSeconds:(unsigned long long)arg1;
@property(copy, nonatomic, getter=_unitTestBatchLimitSuspendProcessHandler, setter=_setUnitTestBatchLimitSuspendProcessHandler:) CDUnknownBlockType unitTestBatchLimitSuspendProcessHandler;
- (void)_unitTestQueryStateChange:(long long)arg1;
@property(copy, nonatomic, getter=_unitTestQueryStateHandler, setter=_setUnitTestQueryStateHandler:) CDUnknownBlockType unitTestQueryStateHandler;
- (void)_unitTestResumeActivation;
- (void)_unitTestWaitForResumeActivationTimeoutSeconds:(unsigned long long)arg1;
- (void)_unitTestPrepareToWaitForResumeAction;
@property(nonatomic, getter=_unitTestShouldWaitForQueryStart, setter=_setUnitTestShouldWaitForQueryStart:) _Bool unitTestShouldWaitForQueryStart;
@property(nonatomic, getter=_unitTestSamplesBeforeSuspend, setter=_setUnitTestSamplesBeforeSuspend:) int unitTestSamplesBeforeSuspend;
- (void)_unitTestInitWithDataObject:(id)arg1 queueTag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

