//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSBaseXPCServer.h>

#import <FrontBoard/FBSystemServiceServer-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBSystemServiceServer : BSBaseXPCServer <FBSystemServiceServer>
{
    NSMutableDictionary *_facilitiesByIdentifier;
    NSMutableSet *_completedMilestones;
    NSMutableDictionary *_suspendedFacilitiesByIdentifier;
    NSMutableSet *_pendingConnects;
}

+ (id)sharedInstance;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;
- (void)_handleConnect:(id)arg1 forClient:(id)arg2 facilityID:(id)arg3;
- (void)_evaluateSuspendedFacility:(id)arg1;
- (void)_evaluateSuspendedFacilities;
- (_Bool)_areFacilityPrerequisitesSatisfied:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)noteMilestoneReached:(id)arg1;
- (void)removeFacility:(id)arg1;
- (void)addFacility:(id)arg1;
- (_Bool)ping;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

