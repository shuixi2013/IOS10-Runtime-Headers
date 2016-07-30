//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerRegistrantApplicationPrediction : RTRoutineManagerRegistrant
{
    _Bool _registered;
    NSPredicate *_applicationMonitoringPredicate;
    CDUnknownBlockType _predictedApplicationHandler;
}

@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(copy, nonatomic) CDUnknownBlockType predictedApplicationHandler; // @synthesize predictedApplicationHandler=_predictedApplicationHandler;
@property(retain, nonatomic) NSPredicate *applicationMonitoringPredicate; // @synthesize applicationMonitoringPredicate=_applicationMonitoringPredicate;
- (void).cxx_destruct;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (id)stopMonitoringForPredictedApplications;
- (id)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

