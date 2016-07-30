//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKChartDataCacheObserver-Protocol.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver>
{
    CDStruct_6ca94699 _lastStartPath;
    CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property(retain, nonatomic) HKChartCache *chartCache; // @synthesize chartCache=_chartCache;
- (void).cxx_destruct;
- (void)chartCacheDidUpdate:(id)arg1;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

