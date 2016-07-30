//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject
{
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    double _startTimeOffsetInDay;
    double _duration;
    double _totalEnergyBurnedInKcal;
    double _totalDistanceWalkingInMiles;
    double _totalDistanceCyclingInMiles;
}

+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;
@property(nonatomic) double totalDistanceCyclingInMiles; // @synthesize totalDistanceCyclingInMiles=_totalDistanceCyclingInMiles;
@property(nonatomic) double totalDistanceWalkingInMiles; // @synthesize totalDistanceWalkingInMiles=_totalDistanceWalkingInMiles;
@property(nonatomic) double totalEnergyBurnedInKcal; // @synthesize totalEnergyBurnedInKcal=_totalEnergyBurnedInKcal;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTimeOffsetInDay; // @synthesize startTimeOffsetInDay=_startTimeOffsetInDay;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (void).cxx_destruct;

@end

