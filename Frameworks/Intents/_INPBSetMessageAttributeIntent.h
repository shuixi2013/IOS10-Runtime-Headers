//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _attribute;
    NSMutableArray *_identifiers;
    _INPBIntentMetadata *_intentMetadata;
    struct {
        unsigned int attribute:1;
    } _has;
}

+ (Class)identifierType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
@property(nonatomic) _Bool hasAttribute;
@property(nonatomic) int attribute; // @synthesize attribute=_attribute;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)addIdentifier:(id)arg1;
- (void)clearIdentifiers;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

