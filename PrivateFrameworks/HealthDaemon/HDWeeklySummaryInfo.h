//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDWeeklySummaryInfo : NSObject
{
}

+ (id)deepBreathingWeeklySummaryInfoForDate:(id)arg1 inHealthDaemon:(id)arg2 error:(id *)arg3;
+ (id)_buildWeeklySummaryInfoForStartDateComponents:(id)arg1 startDayForEnergyBurn:(id)arg2 endDateComponents:(id)arg3 endDayForEnergyBurn:(id)arg4 healthDeamon:(id)arg5;
+ (id)_activitySummariesForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 healthDeamon:(id)arg3 error:(id *)arg4;
+ (id)weeklySummaryInfoForDate:(id)arg1 inHealthDaemon:(id)arg2 error:(id *)arg3;

@end

