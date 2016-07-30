//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSMutableArray *_bccs;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    NSString *_messageId;
    NSString *_messageIdHeader;
    NSString *_notificationMessageId;
    NSString *_remoteId;
    unsigned int _status;
    NSString *_subject;
    NSMutableArray *_tos;
    struct {
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSString *notificationMessageId; // @synthesize notificationMessageId=_notificationMessageId;
@property(retain, nonatomic) NSString *remoteId; // @synthesize remoteId=_remoteId;
@property(retain, nonatomic) NSMutableArray *bccs; // @synthesize bccs=_bccs;
@property(retain, nonatomic) NSString *messageIdHeader; // @synthesize messageIdHeader=_messageIdHeader;
@property(retain, nonatomic) NSData *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSData *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSMutableArray *ccs; // @synthesize ccs=_ccs;
@property(retain, nonatomic) NSMutableArray *tos; // @synthesize tos=_tos;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNotificationMessageId;
@property(readonly, nonatomic) _Bool hasRemoteId;
- (id)bccAtIndex:(unsigned long long)arg1;
- (unsigned long long)bccsCount;
- (void)addBcc:(id)arg1;
- (void)clearBccs;
@property(readonly, nonatomic) _Bool hasMessageIdHeader;
@property(readonly, nonatomic) _Bool hasDateReceived;
@property(readonly, nonatomic) _Bool hasDateSent;
- (id)ccAtIndex:(unsigned long long)arg1;
- (unsigned long long)ccsCount;
- (void)addCc:(id)arg1;
- (void)clearCcs;
- (id)toAtIndex:(unsigned long long)arg1;
- (unsigned long long)tosCount;
- (void)addTo:(id)arg1;
- (void)clearTos;
@property(readonly, nonatomic) _Bool hasFrom;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasSubject;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(readonly, nonatomic) _Bool hasAccountId;
@property(readonly, nonatomic) _Bool hasMessageId;

@end

