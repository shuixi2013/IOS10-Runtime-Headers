//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSSceneAgentProxy-Protocol.h>
#import <FrontBoard/FBSSceneHandle-Protocol.h>
#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBWorkspaceServerSceneEventHandler-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, FBUISceneIdentity, FBWorkspace, NSMutableArray, NSString;
@protocol FBSSceneHostAgent, FBSceneHost, OS_dispatch_queue;

@interface FBWorkspaceScene : NSObject <FBWorkspaceServerSceneEventHandler, FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding, FBSceneClient>
{
    id <FBSceneHost> _host;
    FBWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_workspaceQueue;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    FBUISceneIdentity *_identity;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    _Bool _handledInitialSettingsDiff;
    _Bool _sentCreationEvent;
    _Bool _invalidated;
    id <FBSSceneHostAgent> _hostAgent;
    FBSSerialQueue *_agentQueue;
    CDUnknownBlockType _agentMessageHandler;
    unsigned long long _agentEventSequenceNumber;
    NSMutableArray *_agentOutstandingEventSequence;
    NSMutableArray *_agentSessions;
}

@property(copy, nonatomic, getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_settings;
@property(nonatomic, getter=_workspaceQueue_hasSentCreationEvent, setter=_workspaceQueue_setSentCreationEvent:) _Bool sentCreationEvent; // @synthesize sentCreationEvent=_sentCreationEvent;
@property(nonatomic, getter=_workspaceQueue_handledInitialSettingsDiff, setter=_workspaceQueue_setHandledInitialSettingsDiff:) _Bool handledInitialSettingsDiff; // @synthesize handledInitialSettingsDiff=_handledInitialSettingsDiff;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) FBUISceneIdentity *identity; // @synthesize identity=_identity;
- (void)sceneDidReceiveMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidUpdateClientSettings:(id)arg1;
- (void)sceneDetachLayer:(id)arg1;
- (void)sceneUpdateLayer:(id)arg1;
- (void)sceneAttachLayer:(id)arg1;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)closeSession:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)clientProcess;
- (id)hostProcess;
- (id)counterpartAgent;
- (id)callOutQueue;
@property(readonly, copy, nonatomic) FBSSceneSpecification *specification; // @synthesize specification=_specification;
- (id)parameters;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(CDUnknownBlockType)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(CDUnknownBlockType)arg3;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(CDUnknownBlockType)arg1 success:(_Bool)arg2;
- (void)invalidate;
@property(readonly, copy, nonatomic) FBSSceneSettings *settings;
@property(readonly, nonatomic) id <FBSceneHost> host;
@property(readonly, nonatomic) FBWorkspace *parentWorkspace;
- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 identity:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

