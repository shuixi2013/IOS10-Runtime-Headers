//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>
#import <PBBridgeSupport/NSURLConnectionDelegate-Protocol.h>
#import <PBBridgeSupport/PBBridgeCompanionProtocol-Protocol.h>
#import <PBBridgeSupport/RUILoaderDelegate-Protocol.h>

@class NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSTimer, NSURLConnection, RUILoader, RUIStyle;
@protocol PBBridgeConnectionDelegate, RUILoaderDelegate;

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol>
{
    _Bool _nonSilentActivation;
    _Bool _connectionFailed;
    _Bool _awaitingCustomResponse;
    _Bool _isEstablishingPairing;
    _Bool _allowAnyHTTPSCertificate;
    _Bool _sentSessionRequest;
    _Bool _sentActivationRequest;
    _Bool _passcodeSet;
    _Bool _selectedPairedUnlock;
    unsigned short _granularActivationState;
    int _activationState;
    RUIStyle *_remoteUIStyle;
    id <RUILoaderDelegate> _ruiDelegate;
    id <PBBridgeConnectionDelegate> _delegate;
    NSURLConnection *_activationConnection;
    NSMutableURLRequest *_activationRequest;
    NSMutableData *_activationData;
    RUILoader *_ruiLoader;
    NSString *_contentType;
    NSTimer *_activationTimeout;
    NSString *_internalLastSendMessageID;
    NSString *_remoteActivationUserAgent;
    CDUnknownBlockType _lockedOnAnimationCompletion;
    CDUnknownBlockType _initialSyncPrepCompletion;
    NSMutableDictionary *_reportMapping;
}

+ (id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (void)iCloudFirstName:(id *)arg1 lastName:(id *)arg2;
+ (void)meCardFirstName:(id *)arg1 lastName:(id *)arg2;
@property(nonatomic) _Bool selectedPairedUnlock; // @synthesize selectedPairedUnlock=_selectedPairedUnlock;
@property(nonatomic) _Bool passcodeSet; // @synthesize passcodeSet=_passcodeSet;
@property(retain, nonatomic) NSMutableDictionary *reportMapping; // @synthesize reportMapping=_reportMapping;
@property(nonatomic) _Bool sentActivationRequest; // @synthesize sentActivationRequest=_sentActivationRequest;
@property(nonatomic) _Bool sentSessionRequest; // @synthesize sentSessionRequest=_sentSessionRequest;
@property(copy, nonatomic) CDUnknownBlockType initialSyncPrepCompletion; // @synthesize initialSyncPrepCompletion=_initialSyncPrepCompletion;
@property(copy, nonatomic) CDUnknownBlockType lockedOnAnimationCompletion; // @synthesize lockedOnAnimationCompletion=_lockedOnAnimationCompletion;
@property(copy, nonatomic) NSString *remoteActivationUserAgent; // @synthesize remoteActivationUserAgent=_remoteActivationUserAgent;
@property(nonatomic) _Bool allowAnyHTTPSCertificate; // @synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate;
@property(retain, nonatomic) NSString *internalLastSendMessageID; // @synthesize internalLastSendMessageID=_internalLastSendMessageID;
@property(retain, nonatomic) NSTimer *activationTimeout; // @synthesize activationTimeout=_activationTimeout;
@property(nonatomic) unsigned short granularActivationState; // @synthesize granularActivationState=_granularActivationState;
@property(nonatomic) _Bool isEstablishingPairing; // @synthesize isEstablishingPairing=_isEstablishingPairing;
@property(nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(nonatomic) _Bool awaitingCustomResponse; // @synthesize awaitingCustomResponse=_awaitingCustomResponse;
@property(nonatomic) _Bool connectionFailed; // @synthesize connectionFailed=_connectionFailed;
@property(nonatomic) _Bool nonSilentActivation; // @synthesize nonSilentActivation=_nonSilentActivation;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) RUILoader *ruiLoader; // @synthesize ruiLoader=_ruiLoader;
@property(retain, nonatomic) NSMutableData *activationData; // @synthesize activationData=_activationData;
@property(retain, nonatomic) NSMutableURLRequest *activationRequest; // @synthesize activationRequest=_activationRequest;
@property(retain, nonatomic) NSURLConnection *activationConnection; // @synthesize activationConnection=_activationConnection;
@property(nonatomic) __weak id <PBBridgeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <RUILoaderDelegate> ruiDelegate; // @synthesize ruiDelegate=_ruiDelegate;
@property(retain, nonatomic) RUIStyle *remoteUIStyle; // @synthesize remoteUIStyle=_remoteUIStyle;
- (void).cxx_destruct;
- (id)reporterForConnection:(id)arg1;
- (void)setReporter:(id)arg1 forConnection:(id)arg2;
- (void)transportBecameUnreachable;
- (void)transportBecameReachable;
- (void)handleOfflineTermsResponse:(id)arg1;
- (void)queryGizmoForOfflineTerms;
- (void)watchDidPrepareForInitialSync:(id)arg1;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleWarrantySentinelResponse:(id)arg1;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1;
- (void)tellGizmoToKeepAliveForActivationEvent;
- (void)activationTimeout:(id)arg1;
- (void)refreshTimeoutTimer;
- (void)invalidateTimeoutTimer;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToBeginActivation;
- (void)startEstablishingPairing;
- (void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2;
- (void)tellGizmoToSeCrownOrientationRight:(_Bool)arg1;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)tellGizmoToPopToControllerType:(unsigned long long)arg1;
- (void)tellGizmoToPushControllerType:(unsigned long long)arg1;
- (void)tellGizmoToSetLocationEnabled:(_Bool)arg1;
- (void)tellGizmoToSetDiagnosticsEnabled:(_Bool)arg1;
- (void)sendGizmoPasscodeRestrictions;
- (void)gizmoDidEndUnlockPairing:(id)arg1;
- (void)gizmoDidBeginUnlockPairing:(id)arg1;
- (void)gizmoFailedToCreatePasscode:(id)arg1;
- (void)gizmoDidEndPasscodeCreation:(id)arg1;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)_cleanup;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (id)viewControllerForAlertPresentation;
- (void)connectionDidFinishLoading:(id)arg1;
- (unsigned short)_testActivationResponseType;
- (void)sendProxyActivationWithCustomRequest:(id)arg1;
- (_Bool)_dumpActivationResquests;
- (void)sendProxyActivationRequest:(id)arg1;
- (id)_connectionWithRequest:(id)arg1;
- (void)handlePerformanceResults:(id)arg1;
- (void)gizmoActivationFailed:(id)arg1;
- (void)gizmoDidFinishActivating:(id)arg1;
- (void)gizmoDidBeginActivating:(id)arg1;
- (void)beganWaitingForUserResponseToActivationEvent;
- (void)beganWaitingForPresentationOfActivationEvent;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)enableSiriForGizmo:(id)arg1;
- (void)getSiriState:(id)arg1;
- (void)gizmoBecameAvailableWantsConfirmation:(id)arg1;
- (void)getCompanionRegion:(id)arg1;
- (void)getCompanionLanguage:(id)arg1;
- (_Bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (_Bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (double)offsetEventTime;
- (id)serviceIdentifier;
- (void)endSetupTransaction;
- (void)beginSetupTransaction;
- (void)setupServiceMessageSelectorMappings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

