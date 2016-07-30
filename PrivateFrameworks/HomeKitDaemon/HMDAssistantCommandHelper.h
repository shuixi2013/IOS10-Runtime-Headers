//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHome, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandHelper : NSObject <HMFMessageReceiver, HMFTimerDelegate>
{
    CDUnknownBlockType _responseHandler;
    NSUUID *_messageId;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
    NSMutableArray *_responses;
    unsigned long long _numErrors;
    HMFTimer *_actionTimer;
    NSArray *_requests;
}

@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) HMFTimer *actionTimer; // @synthesize actionTimer=_actionTimer;
@property(nonatomic) unsigned long long numErrors; // @synthesize numErrors=_numErrors;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void).cxx_destruct;
- (void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addReadRequests:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_reportResponses;
- (void)timerDidFire:(id)arg1;
- (void)_resetActionTimer;
- (void)_startActionTimer;
- (void)_register;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

