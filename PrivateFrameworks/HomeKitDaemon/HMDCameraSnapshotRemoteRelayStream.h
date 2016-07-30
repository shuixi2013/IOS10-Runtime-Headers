//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotRemoteRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotRemoteStreamSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotRemoteStreamSender, NSString;
@protocol HMDCameraSnapshotRemoteRelayStreamDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotRemoteRelayStream : NSObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSnapshotRemoteStreamSender *_streamSender;
    HMDCameraSnapshotRemoteRelayReceiver *_relayReceiver;
    id <HMDCameraSnapshotRemoteRelayStreamDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelayStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender; // @synthesize streamSender=_streamSender;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didStartSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)_sendImageSendFailure:(id)arg1;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartSendImageDelegate:(id)arg1;
- (void)snapShotSendFailed;
- (void)snapShotTransferComplete;
- (void)getSnapshot;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 options:(id)arg2 destinationID:(id)arg3 accessory:(id)arg4 workQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

