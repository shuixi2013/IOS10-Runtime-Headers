//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartValueAxis.h>

__attribute__((visibility("hidden")))
@interface TSCHChartLogAxis : TSCHChartValueAxis
{
}

- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;
- (id)userMin;
- (id)userMax;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (_Bool)shouldAnalyzeAxisValue:(double)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)interceptForAxis:(id)arg1;
- (id)p_orthogonalAxis;

@end

