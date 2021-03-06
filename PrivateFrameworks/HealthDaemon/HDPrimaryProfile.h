//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDProfile.h>

@class HDDataCollectionManager, HDWorkoutManager;

@interface HDPrimaryProfile : HDProfile
{
    HDDataCollectionManager *_dataCollectionManager;
    HDWorkoutManager *_workoutManager;
}

- (void).cxx_destruct;
- (id)createActiveWorkoutServerWithClientServer:(id)arg1 serverConfiguration:(id)arg2 server:(id)arg3 client:(id)arg4 delegate:(id)arg5;
- (void)terminationCleanup;
- (id)workoutManager;
- (id)healthDataCollectionManager;
- (id)dataCollectionManager;
- (id)initWithHomeDirectory:(id)arg1 daemon:(id)arg2;

@end

