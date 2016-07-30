//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMFTimer, IDSDevice, IDSDeviceConnection, IDSService, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraIDSDeviceConnection : NSObject <IDSServiceDelegate, HMDCameraRemoteStreamProtocol, HMFTimerDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_sessionID;
    IDSService *_idsProxyStreamService;
    IDSDevice *_device;
    IDSDeviceConnection *_watchVideoConnection;
    IDSDeviceConnection *_watchAudioConnection;
    IDSDeviceConnection *_keepAliveConnection;
    HMFTimer *_keepAliveByteSendTimer;
    HMFTimer *_keepAliveByteReceiveTimeoutTimer;
    NSObject<OS_dispatch_source> *_socketSendSource;
    NSObject<OS_dispatch_source> *_socketReceiveSource;
}

+ (id)logCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketReceiveSource; // @synthesize socketReceiveSource=_socketReceiveSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSendSource; // @synthesize socketSendSource=_socketSendSource;
@property(retain, nonatomic) HMFTimer *keepAliveByteReceiveTimeoutTimer; // @synthesize keepAliveByteReceiveTimeoutTimer=_keepAliveByteReceiveTimeoutTimer;
@property(retain, nonatomic) HMFTimer *keepAliveByteSendTimer; // @synthesize keepAliveByteSendTimer=_keepAliveByteSendTimer;
@property(retain, nonatomic) IDSDeviceConnection *keepAliveConnection; // @synthesize keepAliveConnection=_keepAliveConnection;
@property(retain, nonatomic) IDSDeviceConnection *watchAudioConnection; // @synthesize watchAudioConnection=_watchAudioConnection;
@property(retain, nonatomic) IDSDeviceConnection *watchVideoConnection; // @synthesize watchVideoConnection=_watchVideoConnection;
@property(retain, nonatomic) IDSDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) IDSService *idsProxyStreamService; // @synthesize idsProxyStreamService=_idsProxyStreamService;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_socketOpened:(id)arg1;
- (void)_setReceiveByteHandler;
- (void)_receiveByteCheckTimerFired;
- (void)_sendTimerFired;
- (void)timerDidFire:(id)arg1;
- (void)_startKeepAliveTimeoutTimer;
- (void)_startKeepAliveByteSendTimer;
- (void)startKeepAlive;
- (void)_createStreamSocket;
- (void)_reset;
- (void)reset;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

