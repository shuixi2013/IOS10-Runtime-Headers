//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider
{
    int _notifyToken;
    NSXPCConnection *_connection;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)requiresProxyingAVAudioSessionState;
- (id)hostProtocolDelegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

