//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDKeyTransferAgent.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_group;

@interface HMDKeyTransferAgentServer : HMDKeyTransferAgent <HMFTimerDelegate>
{
    _Bool _broadcastFailure;
    _Bool _inProgress;
    NSUUID *_currentKeyUUID;
    NSObject<OS_dispatch_group> *_broadcastGroup;
    NSMutableSet *_broadcastNotifiedDevices;
    HMFExponentialBackoffTimer *_broadcastUUIDTimer;
    CDUnknownBlockType _finalCompletionHandler;
}

+ (id)logCategory;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(copy, nonatomic) CDUnknownBlockType finalCompletionHandler; // @synthesize finalCompletionHandler=_finalCompletionHandler;
@property(nonatomic) _Bool broadcastFailure; // @synthesize broadcastFailure=_broadcastFailure;
@property(retain, nonatomic) HMFExponentialBackoffTimer *broadcastUUIDTimer; // @synthesize broadcastUUIDTimer=_broadcastUUIDTimer;
@property(retain, nonatomic) NSMutableSet *broadcastNotifiedDevices; // @synthesize broadcastNotifiedDevices=_broadcastNotifiedDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *broadcastGroup; // @synthesize broadcastGroup=_broadcastGroup;
@property(retain, nonatomic) NSUUID *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_endPairingWithError:(id)arg1;
- (void)beginPairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_httpMessageTransport;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (void)__deviceUpdated:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (_Bool)_endAdvertiseUUIDWithError:(id *)arg1;
- (_Bool)_startAdvertiseUUIDWithError:(id *)arg1;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

