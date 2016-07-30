//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface HKWorkoutEvent : NSObject <NSSecureCoding>
{
    long long _type;
    NSDate *_date;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2;
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (void)_assertPropertiesValid;
@property(readonly, copy) NSDate *date;
@property(readonly) long long type;
- (id)init;
- (id)_init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)_setMetadata:(id)arg1;
- (void)_setDate:(id)arg1;
- (void)_setType:(long long)arg1;

@end
