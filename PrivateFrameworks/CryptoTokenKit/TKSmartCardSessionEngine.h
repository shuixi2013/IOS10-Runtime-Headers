//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSession-Protocol.h>

@class NSXPCConnection, TKSmartCardSlotEngine;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>
{
    TKSmartCardSlotEngine *_slot;
    _Bool _transmitting;
    _Bool _valid;
    _Bool _active;
    long long _endPolicy;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property _Bool active; // @synthesize active=_active;
@property _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)terminateWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;

@end

