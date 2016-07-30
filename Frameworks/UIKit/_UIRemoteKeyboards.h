//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIKeyboardArbitrationClient-Protocol.h>
#import <UIKit/_UIRemoteKeyboardControllerDelegate-Protocol.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, NSXPCConnection, UIView, UIWindow, _UIKeyboardChangedInformation;
@protocol _UIKeyboardArbitration;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate>
{
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    double _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    _Bool _expectingInitialState;
    int _hostedCount;
    _Bool _hasFocus;
    _Bool _hadFocusBeforeOverlay;
    _Bool _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    _Bool _takingSnapshot;
    _Bool _windowEnabled;
    _Bool _currentKeyboard;
    _Bool _updatingHeight;
    _Bool _handlingRemoteEvent;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
}

+ (id)createArbiterConnection;
+ (_Bool)useSystemService;
+ (id)sharedRemoteKeyboards;
+ (_Bool)enabled;
@property(readonly) _Bool handlingRemoteEvent; // @synthesize handlingRemoteEvent=_handlingRemoteEvent;
@property(readonly) _Bool updatingHeight; // @synthesize updatingHeight=_updatingHeight;
@property _Bool currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(retain) _UIKeyboardChangedInformation *currentState; // @synthesize currentState=_currentState;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (_Bool)shouldAllowInputViewsRestoredForId:(id)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)peekApplicationEvent:(id)arg1;
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)forceKeyboardAway;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSuppressingKeyboard:(_Bool)arg1;
@property(readonly, retain) NSArray *currentHostedPIDs;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2;
@property(readonly) UIWindow *keyboardWindow;
@property(readonly) _Bool remoteKeyboardUndocked;
@property(readonly) _Bool keyboardActive;
@property(readonly) double intersectionHeight;
@property(readonly) _Bool keyboardVisible;
- (void)finishWithHostedWindow;
- (id)prepareForHostedWindow;
- (void)performOnDistributedControllers:(CDUnknownBlockType)arg1;
- (void)_performOnDistributedControllersExceptSelf:(CDUnknownBlockType)arg1;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forScreen:(id)arg3;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (id)viewHostForWindow:(id)arg1;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 showing:(_Bool)arg2 forScreen:(id)arg3;
- (_Bool)wantsToShowKeyboardForWindow:(id)arg1;
- (_Bool)isOnScreenRotating;
- (_Bool)allowedToShowKeyboard;
- (_Bool)needsToShowKeyboardForWindow:(id)arg1;
- (void)applicationResume:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)setWindowEnabled:(_Bool)arg1;
@property(readonly) _Bool oldPathForSnapshot;
@property(nonatomic) _Bool isSnapshotting;
- (void)checkState;
- (void)sceneUpdated;
- (void)reloadForSnapshotting;
- (Class)keyboardWindowClass;
- (void)checkConnection;
- (void)cleanSuppression;
- (void)stopConnection;
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_applicationLostFocusWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)keyboardChangedCompleted;
- (void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;
- (void)resetSnapshotWithWindowCheck:(_Bool)arg1;
- (void)startConnection;
- (void)queue_failedConnection:(id)arg1;
@property(readonly) id <_UIKeyboardArbitration> proxy;
- (void)dealloc;
- (id)init;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

