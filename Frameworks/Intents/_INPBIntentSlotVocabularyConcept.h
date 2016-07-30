//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    NSMutableArray *_synonyms;
}

+ (Class)synonymsType;
@property(retain, nonatomic) NSMutableArray *synonyms; // @synthesize synonyms=_synonyms;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
- (id)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

