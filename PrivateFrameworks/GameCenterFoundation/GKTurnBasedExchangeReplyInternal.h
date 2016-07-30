//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation
{
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_replyDate;
    unsigned char _recipientIndex;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDate *replyDate; // @synthesize replyDate=_replyDate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) unsigned char recipientIndex; // @synthesize recipientIndex=_recipientIndex;
- (void)dealloc;

@end

