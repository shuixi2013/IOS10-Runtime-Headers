//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKWorkoutSessionDelegate-Protocol.h>

@class HKWorkoutConfiguration, NSDate, NSString, _HKWorkoutSession;
@protocol HKWorkoutSessionDelegate, OS_dispatch_queue;

@interface HKWorkoutSession : NSObject <_HKWorkoutSessionDelegate, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <HKWorkoutSessionDelegate> _delegate;
    _HKWorkoutSession *_privateSession;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=_privateSession) _HKWorkoutSession *privateSession; // @synthesize privateSession=_privateSession;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly) long long state;
@property __weak id <HKWorkoutSessionDelegate> delegate;
@property(readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property(readonly) long long locationType;
@property(readonly) unsigned long long activityType;
- (id)_init;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

