//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class HKActivitySummary;

@interface _HKAchievementPredicateActivitySummaryEnvironment : _HKBaseAchievementPredicateEnvironment
{
    HKActivitySummary *_activitySummary;
    double _previousMovePercent;
}

@property(readonly, nonatomic) double previousMovePercent; // @synthesize previousMovePercent=_previousMovePercent;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (void).cxx_destruct;
@property(readonly, nonatomic) double walkingRunningDistanceInKilometers;
@property(readonly, nonatomic) long long stepCount;
@property(readonly, nonatomic) double standHours;
@property(readonly, nonatomic) double briskMinutes;
@property(readonly, nonatomic) double moveCalories;
@property(readonly, nonatomic) double movePercent;
@property(readonly, nonatomic) double moveGoalCalories;
- (id)initWithActivitySummary:(id)arg1;

@end

