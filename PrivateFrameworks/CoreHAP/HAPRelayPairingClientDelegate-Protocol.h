//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPRelayPairingClient, NSData, NSError, NSString;

@protocol HAPRelayPairingClientDelegate <NSObject>
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveAccessToken:(NSData *)arg2 accessoryIdentifier:(NSString *)arg3;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveControllerIdentifier:(NSString *)arg2;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didCloseWithError:(NSError *)arg2;
@end

