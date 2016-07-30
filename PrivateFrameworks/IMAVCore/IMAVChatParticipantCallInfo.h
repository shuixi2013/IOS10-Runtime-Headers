//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface IMAVChatParticipantCallInfo : NSObject
{
    NSDictionary *_relayInitiate;
    NSDictionary *_relayUpdate;
    NSDictionary *_relayCancel;
    NSData *_remoteNATIP;
    NSData *_localNATIP;
    NSData *_remoteICEData;
    NSData *_localICEData;
    NSString *_peerCN;
    NSNumber *_localNATType;
    NSNumber *_remoteNATType;
    NSNumber *_peerProtocolVersion;
    unsigned int _callID;
    long long _state;
    _Bool _isBeingHandedOff;
    _Bool _isAudioPaused;
    _Bool _isVideoPaused;
    _Bool _isReinitiate;
    unsigned long long _localConnectionType;
    unsigned long long _remoteConnectionType;
    _Bool _inviteNeedsDelivery;
    NSData *_localSKEData;
    NSData *_remoteSKEData;
}

@property(nonatomic) _Bool inviteNeedsDelivery; // @synthesize inviteNeedsDelivery=_inviteNeedsDelivery;
@property(nonatomic) unsigned long long remoteConnectionType; // @synthesize remoteConnectionType=_remoteConnectionType;
@property(nonatomic) unsigned long long localConnectionType; // @synthesize localConnectionType=_localConnectionType;
@property(nonatomic) _Bool isReinitiate; // @synthesize isReinitiate=_isReinitiate;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(readonly, nonatomic) _Bool isAudioPaused; // @synthesize isAudioPaused=_isAudioPaused;
@property(retain, nonatomic) NSData *remoteNATIP; // @synthesize remoteNATIP=_remoteNATIP;
@property(retain, nonatomic) NSData *localNATIP; // @synthesize localNATIP=_localNATIP;
@property(retain, nonatomic) NSNumber *remoteNATType; // @synthesize remoteNATType=_remoteNATType;
@property(retain, nonatomic) NSNumber *localNATType; // @synthesize localNATType=_localNATType;
@property(retain, nonatomic) NSNumber *peerProtocolVersion; // @synthesize peerProtocolVersion=_peerProtocolVersion;
@property(retain, nonatomic) NSString *peerCN; // @synthesize peerCN=_peerCN;
@property(retain, nonatomic) NSData *remoteSKEData; // @synthesize remoteSKEData=_remoteSKEData;
@property(retain, nonatomic) NSData *localSKEData; // @synthesize localSKEData=_localSKEData;
@property(retain, nonatomic) NSData *localICEData; // @synthesize localICEData=_localICEData;
@property(retain, nonatomic) NSData *remoteICEData; // @synthesize remoteICEData=_remoteICEData;
@property(nonatomic) _Bool isBeingHandedOff; // @synthesize isBeingHandedOff=_isBeingHandedOff;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned int callID; // @synthesize callID=_callID;
@property(retain, nonatomic) NSDictionary *relayCancel; // @synthesize relayCancel=_relayCancel;
@property(retain, nonatomic) NSDictionary *relayUpdate; // @synthesize relayUpdate=_relayUpdate;
@property(retain, nonatomic) NSDictionary *relayInitiate; // @synthesize relayInitiate=_relayInitiate;
- (id)description;
@property(readonly, nonatomic) _Bool isFinished;
- (void)dealloc;
- (id)init;

@end

