//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCard.h>

@class NSError;

@interface TKSmartCardWithError : TKSmartCard
{
    TKSmartCard *_parentCard;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (id)initWithCard:(id)arg1 error:(id)arg2;

@end

