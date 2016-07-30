//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCPeerID, NSData, NSMutableDictionary;

@interface MCSessionPeerState : NSObject
{
    _Bool _connectPeerCalled;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
    MCPeerID *_peerID;
    long long _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    NSData *_nearbyConnectionData;
    long long _certificateDecision;
}

@property(nonatomic) long long certificateDecision; // @synthesize certificateDecision=_certificateDecision;
@property(nonatomic) _Bool connectPeerCalled; // @synthesize connectPeerCalled=_connectPeerCalled;
@property(copy, nonatomic) NSData *nearbyConnectionData; // @synthesize nearbyConnectionData=_nearbyConnectionData;
@property(retain, nonatomic) NSMutableDictionary *outgoingStreams; // @synthesize outgoingStreams=_outgoingStreams;
@property(retain, nonatomic) NSMutableDictionary *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property(retain, nonatomic) NSMutableDictionary *outgoingStreamRequests; // @synthesize outgoingStreamRequests=_outgoingStreamRequests;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
- (id)description;
@property(readonly, nonatomic) unsigned int newStreamOpenRequestID; // @synthesize newStreamOpenRequestID=_newStreamOpenRequestID;
@property(readonly, nonatomic) unsigned int newStreamID; // @synthesize newStreamID=_newStreamID;
- (void)dealloc;
- (id)initWithPeer:(id)arg1;

@end

