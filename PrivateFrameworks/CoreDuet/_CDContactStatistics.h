//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>
{
    unsigned long long _outgoingRecipientCount;
    unsigned long long _incomingSenderCount;
    unsigned long long _incomingRecipientCount;
    NSDate *_lastOutgoingRecipientDate;
    NSDate *_lastIncomingSenderDate;
    NSDate *_lastIncomingRecipientDate;
    NSDate *_firstOutgoingRecipientDate;
    NSDate *_firstIncomingSenderDate;
    NSDate *_firstIncomingRecipientDate;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSDate *firstIncomingRecipientDate; // @synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate;
@property(retain) NSDate *firstIncomingSenderDate; // @synthesize firstIncomingSenderDate=_firstIncomingSenderDate;
@property(retain) NSDate *firstOutgoingRecipientDate; // @synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate;
@property(retain) NSDate *lastIncomingRecipientDate; // @synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate;
@property(retain) NSDate *lastIncomingSenderDate; // @synthesize lastIncomingSenderDate=_lastIncomingSenderDate;
@property(retain) NSDate *lastOutgoingRecipientDate; // @synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate;
@property unsigned long long incomingRecipientCount; // @synthesize incomingRecipientCount=_incomingRecipientCount;
@property unsigned long long incomingSenderCount; // @synthesize incomingSenderCount=_incomingSenderCount;
@property unsigned long long outgoingRecipientCount; // @synthesize outgoingRecipientCount=_outgoingRecipientCount;
- (void).cxx_destruct;
- (double)incomingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (double)outgoingRecipientTimeInterval;
- (double)interactionTimeInterval;
- (id)lastInteractionDate;
- (id)firstInteractionDate;
- (unsigned long long)interactionCount;
- (void)updateWithStatistics:(id)arg1;
- (id)lastDate:(id)arg1 updatedWith:(id)arg2;
- (id)firstDate:(id)arg1 updatedWith:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

