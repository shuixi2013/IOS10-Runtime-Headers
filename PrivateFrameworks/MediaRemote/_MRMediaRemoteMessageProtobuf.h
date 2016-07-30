//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRClientUpdatesConfigurationProtobuf, _MRCryptoPairingMessageProtobuf, _MRDeviceInfoMessageProtobuf, _MRGameControllerMessageProtobuf, _MRGameControllerPropertiesMessageProtobuf, _MRGetKeyboardSessionProtobuf, _MRGetPlaybackQueueMessageProtobuf, _MRGetStateMessageProtobuf, _MRGetVoiceInputDevicesMessageProtobuf, _MRGetVoiceInputDevicesResponseMessageProtobuf, _MRKeyboardMessageProtobuf, _MRNotificationMessageProtobuf, _MRPlaybackQueueProtobuf, _MRRegisterForGameControllerEventsMessageProtobuf, _MRRegisterGameControllerMessageProtobuf, _MRRegisterGameControllerResponseMessageProtobuf, _MRRegisterHIDDeviceMessageProtobuf, _MRRegisterHIDDeviceResultMessageProtobuf, _MRRegisterVoiceInputDeviceMessageProtobuf, _MRRegisterVoiceInputDeviceResponseMessageProtobuf, _MRSendButtonEventMessageProtobuf, _MRSendCommandMessageProtobuf, _MRSendCommandResultMessageProtobuf, _MRSendHIDEventMessageProtobuf, _MRSendHIDReportMessageProtobuf, _MRSendVirtualTouchEventMessageProtobuf, _MRSendVoiceInputMessageProtobuf, _MRSetArtworkMessageProtobuf, _MRSetConnectionStateMessageProtobuf, _MRSetReadyStateMessageProtobuf, _MRSetRecordingStateMessageProtobuf, _MRSetStateMessageProtobuf, _MRTextInputMessageProtobuf, _MRTransactionMessageProtobuf, _MRUnregisterGameControllerMessageProtobuf, _MRVolumeControlAvailabilityProtobuf;

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_authenticationToken;
    _MRClientUpdatesConfigurationProtobuf *_clientUpdatesConfigMessage;
    _MRSetConnectionStateMessageProtobuf *_connectionState;
    _MRPlaybackQueueProtobuf *_contentItemsChangedNotificationMessage;
    _MRCryptoPairingMessageProtobuf *_cryptoPairingMessage;
    _MRDeviceInfoMessageProtobuf *_deviceInfoMessage;
    unsigned int _errorCode;
    _MRGameControllerMessageProtobuf *_gameController;
    _MRGameControllerPropertiesMessageProtobuf *_gameControllerProperties;
    _MRGetKeyboardSessionProtobuf *_getKeyboardMessage;
    _MRGetPlaybackQueueMessageProtobuf *_getPlaybackQueue;
    _MRGetStateMessageProtobuf *_getStateMessage;
    _MRGetVoiceInputDevicesMessageProtobuf *_getVoiceInputDevicesMessage;
    _MRGetVoiceInputDevicesResponseMessageProtobuf *_getVoiceInputDevicesResponseMessage;
    NSString *_identifier;
    _MRKeyboardMessageProtobuf *_keyboardMessage;
    _MRNotificationMessageProtobuf *_notificationMessage;
    _MRSetReadyStateMessageProtobuf *_readyStateMessage;
    _MRRegisterForGameControllerEventsMessageProtobuf *_registerForGameControllerEvents;
    _MRRegisterGameControllerMessageProtobuf *_registerGameController;
    _MRRegisterGameControllerResponseMessageProtobuf *_registerGameControllerResponse;
    _MRRegisterHIDDeviceMessageProtobuf *_registerHIDDeviceMessage;
    _MRRegisterHIDDeviceResultMessageProtobuf *_registerHIDDeviceResultMessage;
    _MRRegisterVoiceInputDeviceMessageProtobuf *_registerVoiceInputDeviceMessage;
    _MRRegisterVoiceInputDeviceResponseMessageProtobuf *_registerVoiceInputDeviceResponseMessage;
    _MRSendButtonEventMessageProtobuf *_sendButtonEventMessage;
    _MRSendCommandMessageProtobuf *_sendCommandMessage;
    _MRSendCommandResultMessageProtobuf *_sendCommandResultMessage;
    _MRSendHIDEventMessageProtobuf *_sendHIDEventMessage;
    _MRSendHIDReportMessageProtobuf *_sendHIDReportMessage;
    _MRSendVirtualTouchEventMessageProtobuf *_sendVirtualTouchEventMessage;
    _MRSendVoiceInputMessageProtobuf *_sendVoiceInputMessage;
    _MRSetArtworkMessageProtobuf *_setArtworkMessage;
    _MRSetRecordingStateMessageProtobuf *_setRecordingStateMessage;
    _MRSetStateMessageProtobuf *_setStateMessage;
    _MRTextInputMessageProtobuf *_textInputMessage;
    _MRTransactionMessageProtobuf *_transactionPackets;
    int _type;
    _MRUnregisterGameControllerMessageProtobuf *_unregisterGameController;
    _MRVolumeControlAvailabilityProtobuf *_volumeControlAvailabilityMessage;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) _MRSendButtonEventMessageProtobuf *sendButtonEventMessage; // @synthesize sendButtonEventMessage=_sendButtonEventMessage;
@property(retain, nonatomic) _MRSetConnectionStateMessageProtobuf *connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) _MRSetReadyStateMessageProtobuf *readyStateMessage; // @synthesize readyStateMessage=_readyStateMessage;
@property(retain, nonatomic) _MRGameControllerPropertiesMessageProtobuf *gameControllerProperties; // @synthesize gameControllerProperties=_gameControllerProperties;
@property(retain, nonatomic) _MRCryptoPairingMessageProtobuf *cryptoPairingMessage; // @synthesize cryptoPairingMessage=_cryptoPairingMessage;
@property(retain, nonatomic) _MRTransactionMessageProtobuf *transactionPackets; // @synthesize transactionPackets=_transactionPackets;
@property(retain, nonatomic) _MRGetPlaybackQueueMessageProtobuf *getPlaybackQueue; // @synthesize getPlaybackQueue=_getPlaybackQueue;
@property(retain, nonatomic) _MRSendVoiceInputMessageProtobuf *sendVoiceInputMessage; // @synthesize sendVoiceInputMessage=_sendVoiceInputMessage;
@property(retain, nonatomic) _MRSetRecordingStateMessageProtobuf *setRecordingStateMessage; // @synthesize setRecordingStateMessage=_setRecordingStateMessage;
@property(retain, nonatomic) _MRRegisterVoiceInputDeviceResponseMessageProtobuf *registerVoiceInputDeviceResponseMessage; // @synthesize registerVoiceInputDeviceResponseMessage=_registerVoiceInputDeviceResponseMessage;
@property(retain, nonatomic) _MRRegisterVoiceInputDeviceMessageProtobuf *registerVoiceInputDeviceMessage; // @synthesize registerVoiceInputDeviceMessage=_registerVoiceInputDeviceMessage;
@property(retain, nonatomic) _MRGetVoiceInputDevicesResponseMessageProtobuf *getVoiceInputDevicesResponseMessage; // @synthesize getVoiceInputDevicesResponseMessage=_getVoiceInputDevicesResponseMessage;
@property(retain, nonatomic) _MRGetVoiceInputDevicesMessageProtobuf *getVoiceInputDevicesMessage; // @synthesize getVoiceInputDevicesMessage=_getVoiceInputDevicesMessage;
@property(retain, nonatomic) _MRTextInputMessageProtobuf *textInputMessage; // @synthesize textInputMessage=_textInputMessage;
@property(retain, nonatomic) _MRGetKeyboardSessionProtobuf *getKeyboardMessage; // @synthesize getKeyboardMessage=_getKeyboardMessage;
@property(retain, nonatomic) _MRKeyboardMessageProtobuf *keyboardMessage; // @synthesize keyboardMessage=_keyboardMessage;
@property(retain, nonatomic) _MRRegisterForGameControllerEventsMessageProtobuf *registerForGameControllerEvents; // @synthesize registerForGameControllerEvents=_registerForGameControllerEvents;
@property(retain, nonatomic) _MRUnregisterGameControllerMessageProtobuf *unregisterGameController; // @synthesize unregisterGameController=_unregisterGameController;
@property(retain, nonatomic) _MRRegisterGameControllerResponseMessageProtobuf *registerGameControllerResponse; // @synthesize registerGameControllerResponse=_registerGameControllerResponse;
@property(retain, nonatomic) _MRRegisterGameControllerMessageProtobuf *registerGameController; // @synthesize registerGameController=_registerGameController;
@property(retain, nonatomic) _MRGameControllerMessageProtobuf *gameController; // @synthesize gameController=_gameController;
@property(retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *volumeControlAvailabilityMessage; // @synthesize volumeControlAvailabilityMessage=_volumeControlAvailabilityMessage;
@property(retain, nonatomic) _MRClientUpdatesConfigurationProtobuf *clientUpdatesConfigMessage; // @synthesize clientUpdatesConfigMessage=_clientUpdatesConfigMessage;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoMessage; // @synthesize deviceInfoMessage=_deviceInfoMessage;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *contentItemsChangedNotificationMessage; // @synthesize contentItemsChangedNotificationMessage=_contentItemsChangedNotificationMessage;
@property(retain, nonatomic) _MRNotificationMessageProtobuf *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) _MRSendVirtualTouchEventMessageProtobuf *sendVirtualTouchEventMessage; // @synthesize sendVirtualTouchEventMessage=_sendVirtualTouchEventMessage;
@property(retain, nonatomic) _MRSendHIDReportMessageProtobuf *sendHIDReportMessage; // @synthesize sendHIDReportMessage=_sendHIDReportMessage;
@property(retain, nonatomic) _MRSendHIDEventMessageProtobuf *sendHIDEventMessage; // @synthesize sendHIDEventMessage=_sendHIDEventMessage;
@property(retain, nonatomic) _MRRegisterHIDDeviceResultMessageProtobuf *registerHIDDeviceResultMessage; // @synthesize registerHIDDeviceResultMessage=_registerHIDDeviceResultMessage;
@property(retain, nonatomic) _MRRegisterHIDDeviceMessageProtobuf *registerHIDDeviceMessage; // @synthesize registerHIDDeviceMessage=_registerHIDDeviceMessage;
@property(retain, nonatomic) _MRSetArtworkMessageProtobuf *setArtworkMessage; // @synthesize setArtworkMessage=_setArtworkMessage;
@property(retain, nonatomic) _MRSetStateMessageProtobuf *setStateMessage; // @synthesize setStateMessage=_setStateMessage;
@property(retain, nonatomic) _MRGetStateMessageProtobuf *getStateMessage; // @synthesize getStateMessage=_getStateMessage;
@property(retain, nonatomic) _MRSendCommandResultMessageProtobuf *sendCommandResultMessage; // @synthesize sendCommandResultMessage=_sendCommandResultMessage;
@property(retain, nonatomic) _MRSendCommandMessageProtobuf *sendCommandMessage; // @synthesize sendCommandMessage=_sendCommandMessage;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSendButtonEventMessage;
@property(readonly, nonatomic) _Bool hasConnectionState;
@property(readonly, nonatomic) _Bool hasReadyStateMessage;
@property(readonly, nonatomic) _Bool hasGameControllerProperties;
@property(readonly, nonatomic) _Bool hasCryptoPairingMessage;
@property(readonly, nonatomic) _Bool hasTransactionPackets;
@property(readonly, nonatomic) _Bool hasGetPlaybackQueue;
@property(readonly, nonatomic) _Bool hasSendVoiceInputMessage;
@property(readonly, nonatomic) _Bool hasSetRecordingStateMessage;
@property(readonly, nonatomic) _Bool hasRegisterVoiceInputDeviceResponseMessage;
@property(readonly, nonatomic) _Bool hasRegisterVoiceInputDeviceMessage;
@property(readonly, nonatomic) _Bool hasGetVoiceInputDevicesResponseMessage;
@property(readonly, nonatomic) _Bool hasGetVoiceInputDevicesMessage;
@property(readonly, nonatomic) _Bool hasTextInputMessage;
@property(readonly, nonatomic) _Bool hasGetKeyboardMessage;
@property(readonly, nonatomic) _Bool hasKeyboardMessage;
@property(readonly, nonatomic) _Bool hasRegisterForGameControllerEvents;
@property(readonly, nonatomic) _Bool hasUnregisterGameController;
@property(readonly, nonatomic) _Bool hasRegisterGameControllerResponse;
@property(readonly, nonatomic) _Bool hasRegisterGameController;
@property(readonly, nonatomic) _Bool hasGameController;
@property(readonly, nonatomic) _Bool hasVolumeControlAvailabilityMessage;
@property(readonly, nonatomic) _Bool hasClientUpdatesConfigMessage;
@property(readonly, nonatomic) _Bool hasDeviceInfoMessage;
@property(readonly, nonatomic) _Bool hasContentItemsChangedNotificationMessage;
@property(readonly, nonatomic) _Bool hasNotificationMessage;
@property(readonly, nonatomic) _Bool hasSendVirtualTouchEventMessage;
@property(readonly, nonatomic) _Bool hasSendHIDReportMessage;
@property(readonly, nonatomic) _Bool hasSendHIDEventMessage;
@property(readonly, nonatomic) _Bool hasRegisterHIDDeviceResultMessage;
@property(readonly, nonatomic) _Bool hasRegisterHIDDeviceMessage;
@property(readonly, nonatomic) _Bool hasSetArtworkMessage;
@property(readonly, nonatomic) _Bool hasSetStateMessage;
@property(readonly, nonatomic) _Bool hasGetStateMessage;
@property(readonly, nonatomic) _Bool hasSendCommandResultMessage;
@property(readonly, nonatomic) _Bool hasSendCommandMessage;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasAuthenticationToken;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

