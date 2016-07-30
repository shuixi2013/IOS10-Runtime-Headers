//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDActivityCacheDataSource, HDProfile, HDSourceEntity, HKActivityCache, HKQuantitySample, HKQuantityType, NSCalendar, NSDate, NSHashTable, NSSet, NSString, NSTimeZone, _HKDelayedOperation, _HKTimePeriod;
@protocol OS_dispatch_queue;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayActivityCacheIndex;
    long long _yesterdayActivityCacheIndex;
    _Bool _cacheIndicesAreSet;
    _HKTimePeriod *_todayDateRange;
    _HKTimePeriod *_yesterdayDateRange;
    _Bool _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HDSourceEntity *_localDeviceSourceEntity;
    HKQuantityType *_pushCountType;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    NSSet *_allQuantityTypes;
    HKQuantitySample *_todayGoal;
    HKQuantitySample *_yesterdayGoal;
    _Bool _shouldSendCacheUpdateNotification;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    _Bool _hasSubscribedToSignificantTimeChangeNotifications;
    long long _wheelchairUse;
    NSDate *_dateOverride;
    NSTimeZone *_timeZoneOverride;
}

@property(retain, nonatomic) NSTimeZone *timeZoneOverride; // @synthesize timeZoneOverride=_timeZoneOverride;
@property(retain, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
- (void).cxx_destruct;
- (void)_queue_updateWheelchairUse;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)addActivityCacheObserver:(id)arg1;
@property(readonly, nonatomic) HKActivityCache *yesterdayActivityCache;
@property(readonly, nonatomic) HKActivityCache *currentActivityCache;
@property(readonly) NSCalendar *calendar;
- (void)_queue_deleteExistingActivityCaches;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_significantTimeChangeOccurred:(id)arg1;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)_queue_streamSamplesAdded;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_rebuildActivityCaches;
- (void)_calculateCacheIndicesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2 todayStart:(id)arg3 yesterdayStart:(id)arg4 calendar:(id)arg5;
- (id)_queue_gregorianCalendar;
- (id)_queue_currentTimeZone;
- (id)_queue_today;
- (void)_queue_resetDataSource;
- (void)_queue_resetDailyGoals;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetExistingActivityCaches;
- (void)_queue_resetEverything;
- (id)_mostRecentGoalBeforeDate:(id)arg1 error:(id *)arg2;
- (void)_queue_updateDateRangesWithExistingActivityCaches;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeLocalSource;
- (void)_queue_primeCacheIndices;
- (void)_queue_updateCaches;
- (void)_queue_updateDailyGoalsWithGoalSample:(id)arg1;
- (void)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_queue_primeDailyGoals;
- (_Bool)_queue_goalsSet;
- (void)_queue_primeDataSource;
- (_Bool)_queue_readyToPrimeDataSource;
- (id)_queue_saveCacheWithDateRange:(id)arg1 calorieGoal:(id)arg2 cacheIndex:(long long)arg3 previousCache:(id)arg4 statisticsBuilder:(id)arg5 wheelchairUse:(long long)arg6;
- (void)_queue_saveCaches;
- (_Bool)_queue_saveYesterdayCache;
- (_Bool)_queue_saveTodayCache;
- (_Bool)_queue_readyToSaveCaches;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

