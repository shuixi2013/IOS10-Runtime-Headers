//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;
@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    const char *_actualPath;
    const char *_pathToTemporaryFileToWriteTo;
    NSObject<OS_dispatch_group> *_inProgressWriteGroup;
    struct __CFSet *_observingConnections;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    short _generationShmemIndex;
    unsigned int _handlingRequest:1;
    unsigned int _dirty:1;
    unsigned int _byHost:1;
    unsigned int _managed:1;
    unsigned int _neverCache:1;
    unsigned int _checkedForNonPrefsPlist:1;
    unsigned int _hasDrainedPendingChangesSinceLastReplyToOwner:1;
    unsigned int _restrictedReadability:1;
    unsigned int _waitingForDeviceUnlock:1;
    unsigned int _watchingParentDirectory:1;
    unsigned int _unusedBits:6;
}

- (void)dealloc;
- (id)acceptMessage:(id)arg1;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2;
- (void)handleNoPlistFound;
- (void)handleRootWrite;
- (void)handleSynchronous;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleAvoidCache;
- (id)copyCachedObservationConnectionForMessage:(id)arg1;
- (void)setObserved:(_Bool)arg1 bySenderOfMessage:(id)arg2;
- (void)stopNotifyingObserver:(long long)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(_Bool *)arg3;
- (_Bool)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (_Bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (_Bool)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)clearCache;
- (struct __CFString *)debugDump;
- (void)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (_Bool)hasObservers;
- (void)drainPendingChanges;
- (void)asyncNotifyObserversOfChanges;
- (id)copyPropertyList;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (void)handleDeviceUnlock;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (void)syncWriteToDisk;
- (void)asyncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)setPlist:(id)arg1;
- (void)_writeToDisk:(_Bool)arg1;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)setDirty:(_Bool)arg1;
- (void)updateShmemEntry;
- (_Bool)hasEverHadMultipleOwners;
- (int)owner;
- (short)shmemIndex;
- (id)description;
- (_Bool)byHost;
- (void)removeOwner;
- (void)addOwner:(id)arg1;
- (void)transitionToMultiOwner;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)container;
- (struct __CFString *)user;
- (struct __CFString *)domain;
- (_Bool)managed;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (_Bool)getUncanonicalizedPath:(char *)arg1;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPathCreatingIfNecessary:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)cacheActualPath;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)endHandlingRequest;
- (void)beginHandlingRequest;
- (_Bool)shouldBePurgable;

@end

