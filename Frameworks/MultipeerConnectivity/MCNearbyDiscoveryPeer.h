//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCNearbyDiscoveryPeerConnection, MCPeerID, NSMutableArray, NSNetService;

@interface MCNearbyDiscoveryPeer : NSObject
{
    MCPeerID *_peerID;
    NSNetService *_netService;
    int _state;
    MCNearbyDiscoveryPeerConnection *_connection;
    MCNearbyDiscoveryPeerConnection *_trialConnection;
    NSMutableArray *_sendDataBuffer;
}

@property(retain, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property(retain, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) MCNearbyDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void)flushDataBuffer;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)stringForState:(int)arg1;
- (void)invalidate;
- (void)closeConnection;
- (void)attachConnection:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPeerID:(id)arg1;
- (id)init;

@end

