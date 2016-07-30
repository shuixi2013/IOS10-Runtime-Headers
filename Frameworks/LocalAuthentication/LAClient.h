//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocalAuthentication/LAContextCallbackXPC-Protocol.h>
#import <LocalAuthentication/LAContextXPC-Protocol.h>

@class LACachedExternalizedContext, NSData, NSError, NSMutableArray, NSXPCConnection;
@protocol LAContextXPC, LAUIDelegate;

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC>
{
    id <LAContextXPC> _remoteContext;
    NSXPCConnection *_serverConnection;
    NSError *_permanentError;
    NSData *_existingContext;
    NSMutableArray *_callInvalidationBlocks;
    _Bool _shouldRecoverConnection;
    LACachedExternalizedContext *_cachedExternalizedContext;
    id <LAUIDelegate> _uiDelegate;
}

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)_recoveryQueue;
+ (id)_queue;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void).cxx_destruct;
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (_Bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (id)serverPropertyForOption:(long long)arg1 error:(id *)arg2;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_updateOptions:(id)arg1;
- (_Bool)_setPermanentError:(id)arg1;
- (void)_performCallBool:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_performCallId:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)invalidatedWithError:(id)arg1;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (id)initWithExistingContext:(id)arg1;

@end

