//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDZone : NSObject <HMFMessageReceiver, HMFDumpState, NSSecureCoding>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentRooms;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (id)rooms;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
