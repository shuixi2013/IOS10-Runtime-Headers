//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver>
{
    unsigned long long _audioStreamSetting;
}

- (void)_handleControlSettings:(id)arg1;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1;
- (void)updateAudioStreamSetting:(unsigned long long)arg1;
@property(nonatomic) unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 imageRotation:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5 msgDispatcher:(id)arg6 profileUniqueIdentifier:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

