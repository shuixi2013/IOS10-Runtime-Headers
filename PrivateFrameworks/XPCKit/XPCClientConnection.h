//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object, XPCClientConnectionDelegate;

@interface XPCClientConnection : NSObject
{
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id <XPCClientConnectionDelegate> _delegate;
}

@property(readonly, nonatomic) id <XPCClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_reallySendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_handleConnectionEvent:(id)arg1;
- (id)debugDescription;

@end

