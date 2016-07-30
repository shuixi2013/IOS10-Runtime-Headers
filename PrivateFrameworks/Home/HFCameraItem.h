//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMCameraProfile, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFCameraItem : HFItem <HFHomeKitItemProtocol, HFServiceLikeItem>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMCameraProfile *_cameraProfile;
}

@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)formatSnapshotDateToString:(id)arg1;
- (id)controlPanelItems;
- (id)allControlItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)accessories;
- (id)services;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) __weak HMAccessory *accessory;
- (void)takeCameraSnapshot;
- (void)stopCameraStream;
- (void)startCameraStream;
- (void)setLocalSpeakerVolume:(float)arg1;
- (_Bool)hasRemoteSpeakerControl;
- (void)setLocalMicrophoneEnabled:(_Bool)arg1;
- (_Bool)hasRemoteMicrophoneControl;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 cameraProfile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

