//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBCondition;

@interface _INPBIntegerList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCondition *_conditionType;
    NSMutableArray *_dataStrings;
}

+ (Class)dataStringType;
+ (id)options;
@property(retain, nonatomic) _INPBCondition *conditionType; // @synthesize conditionType=_conditionType;
@property(retain, nonatomic) NSMutableArray *dataStrings; // @synthesize dataStrings=_dataStrings;
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
@property(readonly, nonatomic) _Bool hasConditionType;
- (id)dataStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataStringsCount;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;

@end

