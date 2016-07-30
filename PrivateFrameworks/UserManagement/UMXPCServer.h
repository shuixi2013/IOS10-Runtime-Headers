//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserManagement/NSXPCListenerDelegate-Protocol.h>
#import <UserManagement/UMUserSwitchManagement-Protocol.h>
#import <UserManagement/UMUserSwitchManagement_Private-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private>
{
    _Bool _currentlyBroadcastingWillSwitchToUser;
    _Bool _didRegisterStakeholder;
    _Bool _didBroadcastWillSwitchToUser;
    _Bool _didSendTasks;
    unsigned int _interruptionRetryCount;
    id _stakeholder;
    unsigned long long _stakeholderType;
    NSString *_machServiceName;
    unsigned long long _unregistrationStatus;
    NSString *_unregistrationReason;
    NSDictionary *_personaSpec;
    NSData *_passcodeData;
    NSData *_contextData;
    CDUnknownBlockType _registrationCompletionHandler;
    CDUnknownBlockType _switchCompletionHandler;
    CDUnknownBlockType _suspendQuotasCompletionHandler;
    CDUnknownBlockType _uploadContentCompletionHandler;
    CDUnknownBlockType _willSwitchCompletionHandler;
    NSMutableArray *_switchBlockingTasks;
    NSMutableArray *_syncTasks;
    CDUnknownBlockType _bubblePopHandler;
    unsigned long long _willSwitchToUserAddedTaskCount;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
}

+ (id)sharedServer;
@property(nonatomic) unsigned int interruptionRetryCount; // @synthesize interruptionRetryCount=_interruptionRetryCount;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) _Bool didSendTasks; // @synthesize didSendTasks=_didSendTasks;
@property(nonatomic) _Bool didBroadcastWillSwitchToUser; // @synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser;
@property(nonatomic) _Bool didRegisterStakeholder; // @synthesize didRegisterStakeholder=_didRegisterStakeholder;
@property(nonatomic) unsigned long long willSwitchToUserAddedTaskCount; // @synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount;
@property(nonatomic) _Bool currentlyBroadcastingWillSwitchToUser; // @synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser;
@property(copy, nonatomic) CDUnknownBlockType bubblePopHandler; // @synthesize bubblePopHandler=_bubblePopHandler;
@property(retain, nonatomic) NSMutableArray *syncTasks; // @synthesize syncTasks=_syncTasks;
@property(retain, nonatomic) NSMutableArray *switchBlockingTasks; // @synthesize switchBlockingTasks=_switchBlockingTasks;
@property(copy, nonatomic) CDUnknownBlockType willSwitchCompletionHandler; // @synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType uploadContentCompletionHandler; // @synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType suspendQuotasCompletionHandler; // @synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType switchCompletionHandler; // @synthesize switchCompletionHandler=_switchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property(retain, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSData *passcodeData; // @synthesize passcodeData=_passcodeData;
@property(retain, nonatomic) NSDictionary *personaSpec; // @synthesize personaSpec=_personaSpec;
@property(retain, nonatomic) NSString *unregistrationReason; // @synthesize unregistrationReason=_unregistrationReason;
@property(nonatomic) unsigned long long unregistrationStatus; // @synthesize unregistrationStatus=_unregistrationStatus;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(nonatomic) unsigned long long stakeholderType; // @synthesize stakeholderType=_stakeholderType;
@property(nonatomic) __weak id stakeholder; // @synthesize stakeholder=_stakeholder;
- (void).cxx_destruct;
- (void)_raiseExceptionIfWeDoNotHaveASyncStakeholder;
- (void)_raiseExceptionIfWeDoNotHaveAStakeholder;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)bubbleDidPop;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (void)_resendXPCMessages;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;
- (void)_tearDownConnectionToUMServer;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (id)_server;
- (int)_pid;
- (void)_registerStakeholder:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)resumeSync;
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeQuotas;
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

