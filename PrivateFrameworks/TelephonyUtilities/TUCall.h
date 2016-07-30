//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSUUID, TUCallCenter, TUCallDisplayContext, TUCallModel, TUCallNotificationManager, TUCallProvider, TUCallServicesInterface, TUDialRequest, TUProxyCall;
@protocol OS_dispatch_queue;

@interface TUCall : NSObject <NSSecureCoding>
{
    struct {
        unsigned int joiningConference:1;
        unsigned int leavingConference:1;
    } _phoneCallFlags;
    _Bool _endpointOnCurrentDevice;
    _Bool _shouldSuppressRingtone;
    _Bool _wantsHoldMusic;
    _Bool _hasSentInvitation;
    _Bool _connecting;
    _Bool _connected;
    _Bool _wasDialAssisted;
    _Bool _hasBegunAudioInterruption;
    _Bool _hasUpdatedAudio;
    _Bool _hasAudioFinished;
    _Bool _expectedEndpointOnPairedClientDevice;
    _Bool _ringtoneSuppressedRemotely;
    _Bool _wasPulledToCurrentDevice;
    int _disconnectedReason;
    int _faceTimeIDStatus;
    int _transitionStatus;
    int _hardPauseDigitsState;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    TUCallModel *_model;
    TUCallNotificationManager *_callNotificationManager;
    TUProxyCall *_comparativeCall;
    NSObject<OS_dispatch_queue> *_queue;
    TUCallServicesInterface *_callServicesInterface;
    long long _provisionalHoldStatus;
    NSString *_isoCountryCode;
    NSString *_prematurelySelectedAudioRouteUID;
    long long _soundRegion;
    NSDictionary *_providerContext;
    long long _videoStreamToken;
    double _hostCreationTime;
    double _hostMessageSendTime;
    double _clientMessageReceiveTime;
    NSString *_hardPauseDigits;
    struct CGSize _remoteScreenAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (id)faceTimeSupplementalDialTelephonyCallStringIncludingFTA:(_Bool)arg1;
+ (id)supplementalDialTelephonyCallString;
+ (id)supplementalDialTelephonyCallStringForDestination:(id)arg1 isPhoneNumber:(_Bool)arg2;
+ (id)_supplementalDialTelephonyCallStringForLocString:(id)arg1 destination:(id)arg2 isPhoneNumber:(_Bool)arg3 includeFaceTimeAudio:(_Bool)arg4;
@property(copy, nonatomic) NSString *hardPauseDigits; // @synthesize hardPauseDigits=_hardPauseDigits;
@property(nonatomic) int hardPauseDigitsState; // @synthesize hardPauseDigitsState=_hardPauseDigitsState;
@property(nonatomic) _Bool wasPulledToCurrentDevice; // @synthesize wasPulledToCurrentDevice=_wasPulledToCurrentDevice;
@property(nonatomic) double clientMessageReceiveTime; // @synthesize clientMessageReceiveTime=_clientMessageReceiveTime;
@property(nonatomic) double hostMessageSendTime; // @synthesize hostMessageSendTime=_hostMessageSendTime;
@property(nonatomic) double hostCreationTime; // @synthesize hostCreationTime=_hostCreationTime;
@property(readonly, nonatomic) struct CGSize remoteScreenAspectRatio; // @synthesize remoteScreenAspectRatio=_remoteScreenAspectRatio;
@property(readonly, nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;
@property(readonly, nonatomic) NSDictionary *providerContext; // @synthesize providerContext=_providerContext;
@property(nonatomic) _Bool ringtoneSuppressedRemotely; // @synthesize ringtoneSuppressedRemotely=_ringtoneSuppressedRemotely;
@property(nonatomic, getter=isExpectedEndpointOnPairedClientDevice) _Bool expectedEndpointOnPairedClientDevice; // @synthesize expectedEndpointOnPairedClientDevice=_expectedEndpointOnPairedClientDevice;
@property(nonatomic) long long soundRegion; // @synthesize soundRegion=_soundRegion;
@property(nonatomic) _Bool hasAudioFinished; // @synthesize hasAudioFinished=_hasAudioFinished;
@property(nonatomic) _Bool hasUpdatedAudio; // @synthesize hasUpdatedAudio=_hasUpdatedAudio;
@property(retain, nonatomic) NSString *prematurelySelectedAudioRouteUID; // @synthesize prematurelySelectedAudioRouteUID=_prematurelySelectedAudioRouteUID;
@property(nonatomic) _Bool hasBegunAudioInterruption; // @synthesize hasBegunAudioInterruption=_hasBegunAudioInterruption;
@property(nonatomic) int transitionStatus; // @synthesize transitionStatus=_transitionStatus;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) long long provisionalHoldStatus; // @synthesize provisionalHoldStatus=_provisionalHoldStatus;
@property(nonatomic) __weak TUCallServicesInterface *callServicesInterface; // @synthesize callServicesInterface=_callServicesInterface;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TUProxyCall *comparativeCall; // @synthesize comparativeCall=_comparativeCall;
@property(readonly, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(copy, nonatomic) TUCallModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool wasDialAssisted; // @synthesize wasDialAssisted=_wasDialAssisted;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
@property(nonatomic) _Bool hasSentInvitation; // @synthesize hasSentInvitation=_hasSentInvitation;
@property(nonatomic) _Bool wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(nonatomic) _Bool shouldSuppressRingtone; // @synthesize shouldSuppressRingtone=_shouldSuppressRingtone;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic) int faceTimeIDStatus; // @synthesize faceTimeIDStatus=_faceTimeIDStatus;
@property(nonatomic) int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
- (void).cxx_destruct;
- (_Bool)_isDestinationID:(id)arg1 equalToDestinationIDForVideoUpgrade:(id)arg2;
- (_Bool)isDialRequestVideoUpgrade:(id)arg1;
- (_Bool)isVideoUpgradeFromCall:(id)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGRect remoteVideoContentRect;
@property(readonly, nonatomic) struct CGSize remoteAspectRatio;
@property(readonly, nonatomic) long long remoteScreenOrientation;
@property(readonly, nonatomic) long long remoteCameraOrientation;
@property(readonly, nonatomic) long long cameraType;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
@property(readonly, nonatomic) NSString *endedReasonString;
@property(readonly, nonatomic) NSString *endedErrorString;
@property(readonly, nonatomic) NSDictionary *callStats;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithCall:(id)arg1;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (id)supplementalInCallString;
- (id)serviceDisplayString;
@property(readonly, copy, nonatomic) NSDictionary *endedReasonUserInfo;
- (_Bool)hasRelaySupport:(int)arg1;
@property(readonly, nonatomic) int callRelaySupport;
- (id)contactImageDataWithFormat:(int)arg1;
@property(readonly, nonatomic) int abUID;
@property(readonly, copy, nonatomic) NSString *companyName;
@property(readonly, copy, nonatomic) NSString *localizedLabel;
@property(readonly, copy) NSString *suggestedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayFirstName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier;
@property(readonly, copy, nonatomic) TUCallDisplayContext *displayContext;
@property(readonly, retain, nonatomic) NSData *remoteFrequency;
@property(readonly, retain, nonatomic) NSData *localFrequency;
@property(nonatomic, getter=isDownlinkMuted) _Bool downlinkMuted;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
- (_Bool)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
@property(readonly, copy, nonatomic) NSString *audioMode;
@property(readonly, copy, nonatomic) NSString *audioCategory;
@property(readonly, nonatomic) _Bool supportsDTMFTones;
@property(readonly, nonatomic) _Bool shouldPlayDTMFTone;
@property(readonly, nonatomic) _Bool statusIsProvisional;
@property(readonly, nonatomic) int callStatus;
@property(readonly, nonatomic, getter=isStatusFinal) _Bool statusFinal;
- (id)statusDisplayStringWithLabel:(id)arg1;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSString *reminderString;
@property(readonly, copy, nonatomic) NSString *callDurationString;
@property(readonly, nonatomic) double callDuration;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCall:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *callGroupUUID;
@property(readonly, copy, nonatomic) NSString *callHistoryIdentifier;
@property(readonly, copy, nonatomic) NSString *callUUID;
@property(readonly, nonatomic) int callIdentifier;
@property(readonly, nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice;
@property(readonly, nonatomic) _Bool shouldDisplayLocationIfAvailable;
@property(readonly, copy, nonatomic) NSString *callerNameFromNetwork;
@property(readonly, copy, nonatomic) NSString *destinationID;
- (void)ungroup;
- (void)groupWithOtherCall:(id)arg1;
@property(readonly, copy, nonatomic) TUDialRequest *dialRequestForRedial;
@property(readonly, nonatomic) int ttyType;
@property(readonly, nonatomic, getter=isTTY) _Bool tty;
@property(readonly, nonatomic, getter=isVoIPCall) _Bool voipCall;
@property(readonly, nonatomic, getter=isWiFiCall) _Bool wiFiCall;
@property(readonly, nonatomic) _Bool needsManualInCallSounds;
- (void)suppressRingtoneDueToRemoteSuppression;
- (void)suppressRingtone;
- (void)resetWantsHoldMusic;
@property(readonly, nonatomic, getter=isIncoming) _Bool incoming;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) _Bool isSendingVideo;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) _Bool wasDeclined;
@property(readonly, nonatomic) int service;
@property(readonly, nonatomic) TUCallProvider *displayProvider;
@property(readonly, nonatomic) TUCallProvider *backingProvider;
@property(readonly, nonatomic) TUCallProvider *provider;
@property(readonly, copy, nonatomic) NSUUID *uniqueProxyIdentifierUUID;
@property(readonly, retain, nonatomic) NSString *hardPauseDigitsDisplayString;
- (void)sendHardPauseDigits;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)resetProvisionalState;
- (void)disconnectWithReason:(int)arg1;
- (void)unhold;
- (void)hold;
- (void)setIsOnHold:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isOnHold;
- (void)answerWithRequest:(id)arg1;
- (void)_handleStatusChange;
@property(readonly, nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property(readonly, nonatomic, getter=isVideoDegraded) _Bool videoDegraded;
@property(readonly, nonatomic, getter=isMediaStalled) _Bool mediaStalled;
@property(readonly, nonatomic) _Bool isSendingAudio;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic, getter=isOutgoing) _Bool outgoing;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic, getter=isUsingBaseband) _Bool usingBaseband;
@property(readonly, nonatomic, getter=isVoicemail) _Bool voicemail;
@property(readonly, nonatomic, getter=isEmergencyCall) _Bool emergencyCall;
@property(readonly, nonatomic, getter=isConferenced) _Bool conferenced;
@property(readonly, nonatomic) __weak TUCallCenter *callCenter;
- (void)updateComparativeCall;
- (id)description;
- (void)dealloc;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (id)init;

@end

