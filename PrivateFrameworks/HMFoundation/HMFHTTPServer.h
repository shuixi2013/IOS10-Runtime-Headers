//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFHTTPClientConnectionDelegate-Protocol.h>

@class HMFMutableNetService, NSArray, NSMutableArray, NSString;
@protocol HMFHTTPServerDelegate, OS_dispatch_queue;

@interface HMFHTTPServer : NSObject <HMFHTTPClientConnectionDelegate>
{
    NSMutableArray *_connections;
    NSMutableArray *_requestHandlers;
    id <HMFHTTPServerDelegate> _delegate;
    NSString *_serviceType;
    NSString *_name;
    unsigned long long _port;
    unsigned long long _options;
    HMFMutableNetService *_netService;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct _CFHTTPServer *_httpServerRef;
}

+ (id)shortDescription;
@property(readonly, nonatomic) struct _CFHTTPServer *httpServerRef; // @synthesize httpServerRef=_httpServerRef;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) HMFMutableNetService *netService; // @synthesize netService=_netService;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property __weak id <HMFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleClosedConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)_handleOpenedConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)_handleReceivedRequest:(id)arg1 connection:(id)arg2;
- (void)unregisterRequestHandler:(id)arg1;
- (void)registerRequestHandler:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *requestHandlers;
- (void)_invalidateServer;
- (void)_stopWithError:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *connections;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

