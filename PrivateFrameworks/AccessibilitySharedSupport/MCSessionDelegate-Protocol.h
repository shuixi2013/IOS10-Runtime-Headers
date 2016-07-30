//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilitySharedSupport/NSObject-Protocol.h>

@class MCPeerID, MCSession, NSArray, NSData, NSError, NSInputStream, NSProgress, NSString, NSURL;

@protocol MCSessionDelegate <NSObject>
- (void)session:(MCSession *)arg1 didFinishReceivingResourceWithName:(NSString *)arg2 fromPeer:(MCPeerID *)arg3 atURL:(NSURL *)arg4 withError:(NSError *)arg5;
- (void)session:(MCSession *)arg1 didStartReceivingResourceWithName:(NSString *)arg2 fromPeer:(MCPeerID *)arg3 withProgress:(NSProgress *)arg4;
- (void)session:(MCSession *)arg1 didReceiveStream:(NSInputStream *)arg2 withName:(NSString *)arg3 fromPeer:(MCPeerID *)arg4;
- (void)session:(MCSession *)arg1 didReceiveData:(NSData *)arg2 fromPeer:(MCPeerID *)arg3;
- (void)session:(MCSession *)arg1 peer:(MCPeerID *)arg2 didChangeState:(long long)arg3;

@optional
- (void)session:(MCSession *)arg1 didReceiveCertificate:(NSArray *)arg2 fromPeer:(MCPeerID *)arg3 certificateHandler:(void (^)(_Bool))arg4;
@end

