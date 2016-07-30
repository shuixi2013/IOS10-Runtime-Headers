//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDevice, HMDHome, HMDUser, HMFMessageDispatcher, NSDate, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDTrigger : NSObject <HMFMessageReceiver, NSSecureCoding, HMFDumpState>
{
    _Bool _active;
    _Bool _activeOnLocalDevice;
    NSString *_name;
    NSUUID *_uuid;
    HMDHome *_home;
    HMDUser *_owner;
    HMDDevice *_owningDevice;
    NSMutableArray *_currentActionSets;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSDate *_mostRecentFireDate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic, getter=isActiveOnLocalDevice) _Bool activeOnLocalDevice; // @synthesize activeOnLocalDevice=_activeOnLocalDevice;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property(retain, nonatomic) HMDDevice *owningDevice; // @synthesize owningDevice=_owningDevice;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldEncodeLastFireDate:(id)arg1;
- (void)_registerForMessages;
- (void)_executeActionSets;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_updateActionSet:(id)arg1 add:(_Bool)arg2;
- (void)activateOnLocalDevice;
- (void)invalidate;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)triggerFired;
- (void)reEvaluate;
- (void)fixupForReplacementAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)checkForNoActions;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (unsigned long long)triggerType;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

