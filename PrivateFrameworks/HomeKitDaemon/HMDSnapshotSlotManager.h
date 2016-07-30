//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class CAContext, HMDSnapshotFile, HMFMessageDispatcher, HMFTimer, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSnapshotSlotManager : NSObject <HMFLogging, HMFTimerDelegate>
{
    HMDSnapshotFile *_mostRecentSnapshot;
    NSMutableDictionary *_snapshotSlots;
    CAContext *_snapshotContext;
    NSUUID *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFTimer *mostRecentSnapshotInvalidationTimer; // @synthesize mostRecentSnapshotInvalidationTimer=_mostRecentSnapshotInvalidationTimer;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) CAContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property(readonly, nonatomic) NSMutableDictionary *snapshotSlots; // @synthesize snapshotSlots=_snapshotSlots;
@property(retain, nonatomic) HMDSnapshotFile *mostRecentSnapshot; // @synthesize mostRecentSnapshot=_mostRecentSnapshot;
- (void).cxx_destruct;
- (id)payloadForSnapshotFile:(id)arg1;
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2;
- (void)handleReleaseSnapshot:(id)arg1;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)arg1 msgDispatcher:(id)arg2 uniqueIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

