//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSDate, NSNumber, NSString;

@interface NSDictionary (IMAssocatedMessageItemInfo)
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;
+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 senderHandle:(id)arg2 date:(id)arg3 contentType:(unsigned char)arg4;
@property(readonly, nonatomic) NSNumber *__im_associatedMessageContentType;
@property(readonly, nonatomic) NSDate *__im_associatedMessageDate;
@property(readonly, nonatomic) NSString *__im_associatedMessageSenderHandle;
@property(readonly, nonatomic) NSString *__im_associatedMessageSummary;
@end

