//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDLocationEventDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutEventObserver-Protocol.h>
#import <HealthDaemon/_HKActiveWorkoutServer-Protocol.h>
#import <HealthDaemon/_HKWorkoutSessionDelegate-Protocol.h>

@class HDClient, HDLocationDataCollector, HDPrimaryProfile, HDServer, HKSource, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID, _HKActiveWorkoutServerConfiguration;
@protocol HDActiveWorkoutServerDelegate, NSXPCProxyCreating, OS_dispatch_queue;

@interface HDActiveWorkoutServer : NSObject <_HKActiveWorkoutServer, HDDataObserver, _HKWorkoutSessionDelegate, HDWorkoutEventObserver, HDLocationEventDelegate, HDDatabaseProtectedDataObserver>
{
    HKSource *_localDeviceSource;
    long long _state;
    _HKActiveWorkoutServerConfiguration *_serverConfiguration;
    NSUUID *_workoutSessionUUID;
    HDLocationDataCollector *_locationDataCollector;
    CDUnknownBlockType _endWorkoutCompletion;
    _Bool _observingChanges;
    id <HDActiveWorkoutServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSXPCProxyCreating> _clientServer;
    HDPrimaryProfile *_primaryProfile;
    HDServer *_server;
    HDClient *_client;
    long long _serverState;
    NSMutableArray *_workoutEvents;
    NSMutableDictionary *_currentAnchors;
    NSMutableDictionary *_resumeDataByType;
    NSSet *_observedTypes;
}

@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(retain, nonatomic) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property(retain, nonatomic) NSMutableDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
@property(retain, nonatomic) NSMutableDictionary *currentAnchors; // @synthesize currentAnchors=_currentAnchors;
@property(retain, nonatomic) NSMutableArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property(nonatomic) long long serverState; // @synthesize serverState=_serverState;
@property(readonly, nonatomic) __weak HDClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property(readonly, nonatomic) id <NSXPCProxyCreating> clientServer; // @synthesize clientServer=_clientServer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <HDActiveWorkoutServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createdLocationSeriesSample:(id)arg1;
- (void)elevationUpdated:(id)arg1;
- (void)workoutManager:(id)arg1 didReceiveEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_stopWorkoutSessionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startWorkoutSessionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_updateTotalsSinceResumeDate:(id)arg1;
- (_Bool)_queue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 localDeviceEntity:(id)arg4 error:(id *)arg5;
- (void)_queue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(_Bool)arg3;
- (id)_queue_gapsNeedingUpdate;
- (long long)_queue_stateForDate:(id)arg1;
- (void)_queue_samplesAdded:(id)arg1 lastUUID:(id)arg2 journaled:(_Bool)arg3 anchor:(id)arg4;
- (_Bool)_queue_shouldAddSample:(id)arg1 journaled:(_Bool)arg2 anchor:(id)arg3;
- (id)_queue_sumQuantityForType:(id)arg1 startUUID:(id)arg2 endUUID:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 database:(id)arg6 localDeviceEntity:(id)arg7 newUUIDs:(id)arg8 lastUUID:(id *)arg9 newAnchor:(id *)arg10 error:(id *)arg11;
- (void)_queue_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(_Bool)arg3;
- (_Bool)_queue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 database:(id)arg4 localDeviceEntity:(id)arg5 error:(id *)arg6;
- (void)_queue_setAsCompleteAndStopObserving;
- (void)_queue_endWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_addEventType:(long long)arg1 forDate:(id)arg2;
- (void)_queue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (_Bool)_queue_updateTotalsForReactivationWithResumeData:(id)arg1 startDate:(id)arg2 error:(id *)arg3;
- (void)_queue_activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (_Bool)_queue_gapsResolved;
- (void)_queue_resolveGaps;
- (void)_queue_initObservedTypes;
- (void)_queue_registerObservers;
- (void)_deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 localDeviceEntity:(id)arg6;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2 error:(id *)arg3;
- (id)_transactionIdentifier;
- (id)_clientWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)deactivate;
@property(readonly, nonatomic) NSUUID *workoutUUID;
- (void)pauseClientWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_nukeWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_endWorkoutWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_queue_resolveGapsWithEndDate:(id)arg1 error:(id *)arg2;
- (void)remote_resumeWorkoutWithDate:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_pauseWorkoutWithDate:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldUseDeviceData;
- (id)_queue_localDeviceSource;
- (id)startDate;
- (unsigned long long)workoutActivityType;
@property(readonly) _Bool isActivated;
- (void)_queue_setState:(long long)arg1;
- (id)firstPartyWorkoutSnapshot;
- (id)diagnosticDescription;
- (void)_setupObservedTypes;
- (void)dealloc;
- (id)initWithClientServer:(id)arg1 serverConfiguration:(id)arg2 primaryProfile:(id)arg3 server:(id)arg4 client:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

