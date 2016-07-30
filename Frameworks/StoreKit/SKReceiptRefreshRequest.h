//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest
{
    NSDictionary *_properties;
}

@property(readonly, nonatomic) NSDictionary *receiptProperties; // @synthesize receiptProperties=_properties;
- (_Bool)_wantsVPP;
- (_Bool)_wantsRevoked;
- (_Bool)_wantsExpired;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)initWithReceiptProperties:(id)arg1;

@end

