//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDFitnessFriendsCloudKitCodable-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HDFitnessFriendNotificationEvent : NSObject <HDFitnessFriendsCloudKitCodable>
{
    NSUUID *_friendUUID;
    long long _type;
    NSDate *_date;
    NSString *_triggerUUID;
    long long _triggerSnapshotIndex;
}

+ (id)achievementCompletionEventWithAchievement:(id)arg1;
+ (id)workoutCompletionEventWithWorkout:(id)arg1;
+ (id)goalCompletionEventWithActivitySummary:(id)arg1;
+ (id)fitnessFriendNotificationEventWithRecord:(id)arg1 friendUUID:(id)arg2;
@property(nonatomic) long long triggerSnapshotIndex; // @synthesize triggerSnapshotIndex=_triggerSnapshotIndex;
@property(retain, nonatomic) NSString *triggerUUID; // @synthesize triggerUUID=_triggerUUID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)recordWithZoneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

