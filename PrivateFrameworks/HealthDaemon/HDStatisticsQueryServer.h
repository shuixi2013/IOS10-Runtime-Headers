//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer
{
    NSDateInterval *_dateInterval;
    unsigned long long _statisticsOptions;
    unsigned long long _mergeStrategy;
}

@property(readonly, nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
- (void).cxx_destruct;
- (id)_queue_fetchStatisticsWithError:(id *)arg1;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

