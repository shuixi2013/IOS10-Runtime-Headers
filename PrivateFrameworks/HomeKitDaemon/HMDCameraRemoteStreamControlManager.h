//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraStreamControlManager.h>

#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSSessionReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraMediaConfigGenerator, HMDRemoteStreamSession, NSString, NSUUID;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    NSUUID *_profileUniqueIdentifier;
    HMDRemoteStreamSession *_streamSession;
    HMDCameraMediaConfigGenerator *_configGenerator;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(retain, nonatomic) HMDRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void).cxx_destruct;
- (void)_sendUpdatedConfiguration;
- (void)_dispatchReconfigureToResident:(id)arg1;
- (void)_reconfigureStreams;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidStopStream:(id)arg1;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (void)deviceConnectionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)sessionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)sessionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)_cleanUpStreamSession;
- (void)stopStreamAsIDSHasStopped;
- (void)_sendStopMessageToResident;
- (void)_stopCurrentStreamSession;
- (void)stopStream;
- (void)_remoteSetup;
- (void)remoteSetup;
- (void)_reconfigureStream:(id)arg1;
- (void)reconfigureStream:(id)arg1;
- (void)_streamStarted;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;
- (void)_startStream:(id)arg1;
- (void)startStream:(id)arg1;
- (void)_relaySessionStarted:(id)arg1;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_setParametersSelected:(id)arg1;
- (void)_negotiateStream;
- (void)negotiateStream;
- (void)setAudioSetting:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(unsigned long long)arg3 destinationID:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 profileUniqueIdentifier:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

