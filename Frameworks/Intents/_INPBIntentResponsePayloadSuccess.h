//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSData, NSString, PBUnknownFields;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSData *_responseMessageData;
    NSString *_responseTypeName;
    _Bool _shouldOpenContainingApplication;
    struct {
        unsigned int shouldOpenContainingApplication:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool shouldOpenContainingApplication; // @synthesize shouldOpenContainingApplication=_shouldOpenContainingApplication;
@property(retain, nonatomic) NSString *responseTypeName; // @synthesize responseTypeName=_responseTypeName;
@property(retain, nonatomic) NSData *responseMessageData; // @synthesize responseMessageData=_responseMessageData;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShouldOpenContainingApplication;
@property(readonly, nonatomic) _Bool hasResponseTypeName;
@property(readonly, nonatomic) _Bool hasResponseMessageData;

@end

