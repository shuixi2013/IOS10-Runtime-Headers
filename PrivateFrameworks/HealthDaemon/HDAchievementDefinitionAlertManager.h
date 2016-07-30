//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementAssetObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDBackgroundTaskScheduler, HDProfile, NSArray, NSDate, NSNumber, NSString;
@protocol HDAchievementDefinitionAlertNotifier, OS_dispatch_queue;

@interface HDAchievementDefinitionAlertManager : NSObject <HDHealthDaemonReadyObserver, HDAchievementAssetObserver>
{
    HDProfile *_profile;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    id <HDAchievementDefinitionAlertNotifier> _alertNotifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_waitingToRun;
    NSDate *_dateOverride;
    NSArray *_overriddenDefinitions;
}

+ (void)_clearBookkeepingKeyValuesWithProfile:(id)arg1;
+ (id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id *)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id *)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2;
@property(copy, nonatomic) NSArray *overriddenDefinitions; // @synthesize overriddenDefinitions=_overriddenDefinitions;
@property(retain, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
- (void).cxx_destruct;
- (void)_synthesizeAlert;
- (_Bool)_queue_markDefinitions:(id)arg1 asAlertedState:(unsigned long long)arg2;
- (void)_definitionsAlertTaskFired;
- (void)_queue_markDefinitionsAvailable:(id)arg1;
- (void)_queue_rescheduleNewAchievementAlertsWithDefinitions:(id)arg1;
- (_Bool)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id *)arg4;
- (_Bool)markDefinitionIdentifiersAvailable:(id)arg1 withProfile:(id)arg2 error:(id *)arg3;
- (void)achievementDefinitionsDidChangeToDefinitions:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)definitionIdentifiersInAlertedState:(unsigned long long)arg1 withError:(id *)arg2;
- (void)clearBookkeepingKeyValues;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 alertNotifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

