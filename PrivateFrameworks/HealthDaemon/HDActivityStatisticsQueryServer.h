//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDActivityCacheDataSource, HDSourceManager, HKStatisticsCollection, NSDate, NSDateComponents, NSString, _HKDelayedOperation;

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver>
{
    HKStatisticsCollection *_statisticsCollection;
    _Bool _deliveredInitialResults;
    _Bool _deliversUpdates;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_resetOperation;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    HDActivityCacheDataSource *_dataSource;
    HDSourceManager *_sourceManager;
}

- (void).cxx_destruct;
- (void)_queue_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverUpdates;
- (_Bool)_queue_updateDataSourceWithMoveStatistics:(id *)arg1 exerciseStatistics:(id *)arg2 standInfo:(id *)arg3 workoutInfoOut:(id *)arg4 error:(id *)arg5;
- (void)_createDataSourceIfNecessary;
- (id)_allObservedQuantityTypes;
- (_Bool)_queue_queryIsRunning;
- (void)_queue_stop;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

