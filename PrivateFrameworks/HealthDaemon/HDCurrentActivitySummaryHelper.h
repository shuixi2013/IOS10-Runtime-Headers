//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDActivitySummaryQueryHelper, HDProfile, HKActivitySummary, NSArray, NSDate, NSHashTable;
@protocol OS_dispatch_queue;

@interface HDCurrentActivitySummaryHelper : NSObject
{
    HDProfile *_profile;
    HDActivitySummaryQueryHelper *_queryHelper;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayIndex;
    long long _yesterdayIndex;
    HKActivitySummary *_todaySummary;
    HKActivitySummary *_yesterdaySummary;
    _Bool _hasLoadedActivitySummaries;
    NSArray *_typesForDataCollection;
    NSHashTable *_observers;
    NSDate *_dateOverride;
}

- (void).cxx_destruct;
- (id)_createEmptyActivitySummaryForIndex:(long long)arg1;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_queue_alertObserversYesterdaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_alertObserversTodaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_resetQueryHelper;
- (void)_queue_updateYesterdayActivitySummary:(id)arg1;
- (void)_queue_updateTodayActivitySummary:(id)arg1;
- (unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)arg1 andNewActivitySummary:(id)arg2;
- (void)_queue_updateActivitySummaries:(id)arg1;
- (void)_queue_setUpActivityQueryHelper;
- (void)_generateCacheIndexesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2;
- (_Bool)_queue_dateHasChanged;
- (id)dateOverride;
- (void)setDateOverride:(id)arg1;
@property(readonly) _Bool hasLoadedActivitySummaries;
@property(readonly) HKActivitySummary *yesterdayActivitySummary;
@property(readonly) HKActivitySummary *todayActivitySummary;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

