//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSTimeZone, NSUUID;

@interface _HKFitnessFriendActivitySnapshot : HKSample <NSCopying>
{
    NSUUID *_friendUUID;
    NSUUID *_sourceUUID;
    long long _snapshotIndex;
    NSDate *_snapshotUploadedDate;
    NSNumber *_timeZoneOffsetFromUTCForNoon;
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    double _energyBurned;
    double _energyBurnedGoal;
    double _stepCount;
    double _pushCount;
    long long _wheelchairUse;
    double _walkingAndRunningDistance;
}

+ (_Bool)supportsSecureCoding;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)arg1;
+ (id)snapshotWithActivitySummary:(id)arg1;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4;
+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6;
@property(nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) double pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) double stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property(nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) double activeHoursGoal; // @synthesize activeHoursGoal=_activeHoursGoal;
@property(nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property(retain, nonatomic) NSNumber *timeZoneOffsetFromUTCForNoon; // @synthesize timeZoneOffsetFromUTCForNoon=_timeZoneOffsetFromUTCForNoon;
@property(retain, nonatomic) NSDate *snapshotUploadedDate; // @synthesize snapshotUploadedDate=_snapshotUploadedDate;
@property(nonatomic) long long snapshotIndex; // @synthesize snapshotIndex=_snapshotIndex;
@property(retain, nonatomic) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double activeHoursGoalPercentage;
@property(readonly, nonatomic) double briskMinutesGoalPercentage;
@property(readonly, nonatomic) double energyBurnedGoalPercentage;
- (id)activitySummary;
- (id)description;

@end

