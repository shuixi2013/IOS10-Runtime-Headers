//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@class NSData, NSDate;

@interface APSIncomingMessage : APSMessage
{
}

@property(nonatomic) long long priority;
@property(nonatomic, getter=wasLastMessageFromStorage) _Bool lastMessageFromStorage;
@property(nonatomic, getter=wasFromStorage) _Bool fromStorage;
@property(copy, nonatomic) NSData *token;
@property(copy, nonatomic) NSDate *timestamp;

@end

