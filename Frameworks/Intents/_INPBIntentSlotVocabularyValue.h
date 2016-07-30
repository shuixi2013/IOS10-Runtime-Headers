//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface _INPBIntentSlotVocabularyValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_examples;
    NSString *_phrase;
    NSString *_pronunciation;
}

+ (Class)examplesType;
@property(retain, nonatomic) NSMutableArray *examples; // @synthesize examples=_examples;
@property(retain, nonatomic) NSString *pronunciation; // @synthesize pronunciation=_pronunciation;
@property(retain, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
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
- (id)examplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)examplesCount;
- (void)addExamples:(id)arg1;
- (void)clearExamples;
@property(readonly, nonatomic) _Bool hasPronunciation;
@property(readonly, nonatomic) _Bool hasPhrase;

@end

