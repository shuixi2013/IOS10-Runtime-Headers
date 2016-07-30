//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBApplicationProcessDelegate-Protocol.h>
#import <FrontBoard/FBApplicationProcessObserver-Protocol.h>
#import <FrontBoard/FBUIProcessManagerInternal-Protocol.h>

@class BKSProcessAssertion, FBApplicationLibrary, FBApplicationProcess, FBApplicationProcessWatchdogPolicy, NSHashTable, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver, FBUIProcessManagerInternal>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBApplicationLibrary *_appLibrary;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSHashTable *_observers;
    NSMapTable *_processesByPID;
    NSMapTable *_processesByBundleID;
    NSObject<OS_dispatch_queue> *_processesQueue;
    FBApplicationProcess *_systemAppProcess;
    BKSProcessAssertion *_systemAppProcessAssertion;
    FBApplicationProcess *_foregroundAppProcess;
    FBApplicationProcess *_preferredForegroundAppProcess;
    FBApplicationProcessWatchdogPolicy *_defaultWatchdogPolicy;
    NSMutableDictionary *_workspacesByClientIdentity;
    int _workspaceLocked;
    int _workspaceLockedToken;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) FBApplicationProcess *systemApplicationProcess; // @synthesize systemApplicationProcess=_systemAppProcess;
- (void)_updateWorkspaceLockedState;
- (void)_queue_evaluateForegroundEventRouting;
- (void)_queue_notifyObserversUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_processesQueue_processForPID:(int)arg1;
- (id)_processesQueue_processesForBundleIdentifier:(id)arg1;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (void)_queue_addProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateClientWorkspace:(id)arg1;
- (id)workspaceForSceneClientWithIdentity:(id)arg1;
- (id)currentProcess;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (void)noteProcessDidExit:(id)arg1;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (id)_serviceClientAddedWithProcessHandle:(id)arg1;
- (_Bool)_isWorkspaceLocked;
@property(readonly, copy) NSString *description;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (id)createApplicationProcessForBundleID:(id)arg1;
- (void)_setPreferredForegroundApplicationProcess:(id)arg1;
- (id)applicationProcessForPID:(int)arg1;
- (id)processForPID:(int)arg1;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (id)allApplicationProcesses;
- (id)allProcesses;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)ping;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

