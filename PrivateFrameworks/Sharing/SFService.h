//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestQueue;
    NSXPCConnection *_xpcCnx;
    _Bool _autoUnlockEnabled;
    _Bool _autoUnlockWatch;
    _Bool _hasProblem;
    _Bool _needsKeyboard;
    _Bool _needsSetup;
    _Bool _supportsAirPlayReceiver;
    long long _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _eventMessageHandler;
    NSString *_identifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _requestMessageHandler;
    CDUnknownBlockType _responseMessageInternalHandler;
    NSUUID *_serviceUUID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property(nonatomic) _Bool supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property(copy, nonatomic) CDUnknownBlockType requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property(nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(nonatomic) _Bool needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasProblem; // @synthesize hasProblem=_hasProblem;
@property(copy, nonatomic) CDUnknownBlockType eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) _Bool autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (void).cxx_destruct;
- (void)serviceReceivedResponse:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedEvent:(id)arg1;
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)updateWithService:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

