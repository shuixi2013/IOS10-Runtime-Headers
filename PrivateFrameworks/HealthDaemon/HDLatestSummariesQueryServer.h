//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDListByTypeStatisticsBuilder, NSCalendar, NSDate, NSSet, _HKFilter;

@interface HDLatestSummariesQueryServer : HDQueryServer
{
    _Bool _deliversUpdates;
    _Bool _singleDay;
    HDListByTypeStatisticsBuilder *_statisticsBuilder;
    NSDate *_startDate;
    NSDate *_endDate;
    NSCalendar *_calendar;
    NSSet *_typeFilters;
    _HKFilter *_sleepStartEndFilter;
    _Bool _initialResultsDelivered;
}

- (void).cxx_destruct;
- (void)_queue_updateStatisticsWithSamples:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(_Bool)arg1;
- (_Bool)_shouldObserveAllSampleTypes;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldAcceptSample:(id)arg1;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

