//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRNearbyServicesCommunicationAbstractMessage.h>

@class NSDictionary, NSSet;

@interface TRAAProxyAuthenticationRequest : TRNearbyServicesCommunicationAbstractMessage
{
    NSDictionary *_authenticationResults;
    NSSet *_targetedAccountServices;
}

@property(retain, nonatomic) NSSet *targetedAccountServices; // @synthesize targetedAccountServices=_targetedAccountServices;
@property(copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

