//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSArray, NSObject, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;
@protocol OS_dispatch_queue;

@interface _HMCameraProfile : _HMAccessoryProfile
{
    _HMCameraStreamControl *_streamControlInternal;
    _HMCameraSnapshotControl *_snapshotControlInternal;
    _HMCameraSettingsControl *_settingsControl;
    _HMCameraAudioControl *_speakerControl;
    _HMCameraAudioControl *_microphoneControl;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSArray *_controls;
}

@property(readonly, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) _HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property(readonly, nonatomic) _HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property(readonly, nonatomic) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(readonly, nonatomic) _HMCameraSnapshotControl *snapshotControlInternal; // @synthesize snapshotControlInternal=_snapshotControlInternal;
@property(readonly, nonatomic) _HMCameraStreamControl *streamControlInternal; // @synthesize streamControlInternal=_streamControlInternal;
- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (id)initUuid:(id)arg1 accessory:(id)arg2 services:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5 msgDispatcher:(id)arg6 home:(id)arg7;

@end

