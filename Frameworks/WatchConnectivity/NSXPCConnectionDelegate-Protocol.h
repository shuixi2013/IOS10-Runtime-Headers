//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSInvocation, NSXPCCoder, NSXPCConnection;
@protocol NSSecureCoding;

@protocol NSXPCConnectionDelegate <NSObject>

@optional
- (void)connection:(NSXPCConnection *)arg1 handleInvocation:(NSInvocation *)arg2 isReply:(_Bool)arg3;
- (id <NSSecureCoding>)replacementObjectForXPCConnection:(NSXPCConnection *)arg1 encoder:(NSXPCCoder *)arg2 object:(id)arg3;
@end

