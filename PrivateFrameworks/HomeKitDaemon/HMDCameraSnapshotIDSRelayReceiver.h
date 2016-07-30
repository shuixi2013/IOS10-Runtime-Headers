//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class IDSSession, NSFileHandle, NSObject, NSString;
@protocol HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    NSString *_filePath;
    NSFileHandle *_fileHandle;
    unsigned long long _bytesToReceive;
    unsigned long long _bytesSoFar;
    NSObject<OS_dispatch_source> *_socketSource;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_requestIdentifier;
    id <HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
}

+ (id)logCategory;
@property(nonatomic) __weak id <HMDCameraSnapshotIDSRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(nonatomic) unsigned long long bytesSoFar; // @synthesize bytesSoFar=_bytesSoFar;
@property(nonatomic) unsigned long long bytesToReceive; // @synthesize bytesToReceive=_bytesToReceive;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)_callFileReceived:(id)arg1;
- (void)dealloc;
- (void)_reset;
- (void)_handleDataFromSocket:(id)arg1;
- (void)_startFileReceive;
- (id)logIdentifier;
- (id)initWithRequestIdentifier:(id)arg1 filePath:(id)arg2 delegate:(id)arg3 queue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

