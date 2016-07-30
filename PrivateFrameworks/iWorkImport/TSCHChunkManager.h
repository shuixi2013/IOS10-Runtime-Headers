//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCHChunkManager : NSObject
{
    TSCHChartInfo *mChartInfo;
    unsigned long long *mSeriesMap;
    unsigned long long *mValuesMap;
    unsigned long long mChunkMapCount;
}

+ (id)p_allChartDeliveryStylesLocalized:(_Bool)arg1;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(_Bool)arg1;
- (id)containedTextForChartDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2;
- (id)p_nameForMultiDataSetCategory:(unsigned long long)arg1;
- (id)p_seriesNameForSeriesAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (id)p_backgroundStringForChartWithTitle:(id)arg1;
- (void)p_updateCacheForElementsInSets;
- (void)p_updateCacheForElementsInSeries;
- (void)p_updateCacheForSets;
- (void)p_updateCacheForSeries;
- (void)updateCache:(unsigned long long)arg1;
- (_Bool)p_canAddChunkForSeries:(id)arg1 valueIndex:(long long)arg2;
- (_Bool)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(_Bool)arg4 valueStart:(long long *)arg5 valueCount:(long long *)arg6;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(_Bool)arg3 seriesStart:(long long *)arg4 seriesCount:(long long *)arg5;
- (unsigned long long)p_chunkCountForChartDeliveryStyle:(unsigned long long)arg1;
- (unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1;
- (_Bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (_Bool)hasBackgroundLayerForPieChart;
- (_Bool)p_hasBackgroundFill;
- (_Bool)p_legendOn;
- (_Bool)p_titleOn;
- (_Bool)p_isMultiData;
- (_Bool)p_isPie;
- (void)clearCaches;
- (unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

