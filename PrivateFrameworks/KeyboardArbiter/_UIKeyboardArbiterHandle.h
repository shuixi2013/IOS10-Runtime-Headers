//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbitration-Protocol.h>

@class BKSProcessAssertion, FBSCAContextSceneLayer, NSMutableSet, NSString, NSXPCConnection, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration>
{
    _Bool _invalidated;
    NSString *_bundleIdentifier;
    _UIKeyboardArbiter *_owner;
    _Bool _running;
    FBSCAContextSceneLayer *_sceneLayer;
    NSString *_remoteSceneID;
    _Bool _active;
    _Bool _wantedActive;
    double _level;
    NSMutableSet *_hostedPids;
    _Bool _checkingShowability;
    int _suppressionCount;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    unsigned long long _remoteKeepAliveAssertionCount;
    unsigned long long _remoteKeepAliveTimerCount;
    NSXPCConnection *_connection;
}

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;
@property(readonly) double level; // @synthesize level=_level;
@property(readonly) _Bool wantedActive; // @synthesize wantedActive=_wantedActive;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(readonly, retain) NSString *remoteSceneID; // @synthesize remoteSceneID=_remoteSceneID;
@property(readonly, retain) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property _Bool running; // @synthesize running=_running;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)releaseProcessAssertion;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (_Bool)isHandlerShowableWithHandler:(id)arg1;
- (id)description;
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;
- (void)setDebugLevel:(long long)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 forKeyboard:(_Bool)arg3 withLevel:(double)arg4;
- (void)_deactivateScene;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 withSuppression:(int)arg3 onConnected:(CDUnknownBlockType)arg4;
@property(readonly) int processIdentifier;
- (void)dealloc;

@end

