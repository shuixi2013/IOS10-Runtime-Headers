//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol MFMailboxPredictionMailbox;

@protocol MFMailboxPredictionMessage <NSObject>
- (NSDate *)dateReceived;
- (NSArray *)ccAddressList;
- (NSArray *)toAddressList;
- (NSString *)firstSenderAddress;
- (long long)listIDHash;
- (long long)conversationID;
- (NSString *)persistentID;
- (NSString *)subject;
- (id <MFMailboxPredictionMailbox>)mailbox;
@end

