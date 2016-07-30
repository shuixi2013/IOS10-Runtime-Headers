//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionClientEndpoint-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BBDataProviderConnection, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>
{
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
    BBDataProviderConnection *_dataProviderConnection;
}

+ (id)xpcInterface;
+ (id)resolverForConnection:(id)arg1;
@property(nonatomic) __weak BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;
- (void).cxx_destruct;
- (void)ping:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_queue_registerWithServer:(CDUnknownBlockType)arg1;
- (void)_registerForPublicationNotification;
- (void)invalidate;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

