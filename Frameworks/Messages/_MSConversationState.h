//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class MSMessage, NSArray, NSString, NSUUID;

@interface _MSConversationState : NSObject <NSSecureCoding>
{
    NSUUID *_conversationIdentifier;
    NSUUID *_senderIdentifier;
    NSArray *_recipientIdentifiers;
    NSString *_conversationID;
    MSMessage *_activeMessage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MSMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSArray *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
@property(retain, nonatomic) NSUUID *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property(retain, nonatomic) NSUUID *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

