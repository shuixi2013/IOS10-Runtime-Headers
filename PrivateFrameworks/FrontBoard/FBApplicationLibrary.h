//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observerQueue_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _workQueue_usingNetwork;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    unsigned long long _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_group> *_preInstallGroup;
    Class _appInfoClass;
    _Bool _initializing;
    _Bool _usingNetwork;
}

+ (void)setBundleExtendedInfoGenerationHandler:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isUsingNetwork) _Bool usingNetwork; // @synthesize usingNetwork=_usingNetwork;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (_Bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4 wasCreated:(_Bool *)arg5;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(_Bool)arg2 createReason:(id)arg3 wasCreated:(_Bool *)arg4;
- (void)_anyQueue_generateExtendedInfoForBundleInfo:(id)arg1;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(_Bool)arg2 createReason:(id)arg3 createdPlaceholders:(const id *)arg4 existingApplications:(const id *)arg5 unmappedProxies:(const id *)arg6;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4 createdPlaceholders:(const id *)arg5 existingPlaceholders:(const id *)arg6 unmappedProxies:(const id *)arg7;
- (void)_load;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
- (void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(_Bool)arg3;
- (void)_sendToObservers:(id)arg1 didDemoteApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_dispatchToObservers:(id)arg1 synchronously:(_Bool)arg2 preBlock:(CDUnknownBlockType)arg3 block:(CDUnknownBlockType)arg4;
- (id)_observers;
- (void)executeOrPendInstallSynchronizationBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uninstallApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)allPlaceholders;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (id)allInstalledApplications;
- (void)dealloc;
- (id)_initWithAppInfoClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

