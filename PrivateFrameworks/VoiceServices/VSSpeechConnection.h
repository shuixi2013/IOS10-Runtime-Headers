//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;
@protocol VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_connection;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    VSSpeechRequest *_request;
}

@property(readonly, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)setLogToFile:(_Bool)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)startSpeechRequest:(id)arg1;
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (_Bool)isSystemSpeaking;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)prewarmIfNeededWithRequest:(id)arg1;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate;
- (void)_setRequest:(id)arg1;
- (void)_connectionInvalidated;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
- (id)_connection;
- (void)dealloc;

@end

