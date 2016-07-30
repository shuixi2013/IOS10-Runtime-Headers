//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableQuantity, NSString;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying>
{
    double _dateValue;
    double _numberDoubleValue;
    long long _numberIntValue;
    NSString *_key;
    HDCodableQuantity *_quantityValue;
    NSString *_stringValue;
    struct {
        unsigned int dateValue:1;
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
    } _has;
}

@property(retain, nonatomic) HDCodableQuantity *quantityValue; // @synthesize quantityValue=_quantityValue;
@property(nonatomic) double numberDoubleValue; // @synthesize numberDoubleValue=_numberDoubleValue;
@property(nonatomic) long long numberIntValue; // @synthesize numberIntValue=_numberIntValue;
@property(nonatomic) double dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(readonly, nonatomic) _Bool hasQuantityValue;
@property(nonatomic) _Bool hasNumberDoubleValue;
@property(nonatomic) _Bool hasNumberIntValue;
@property(nonatomic) _Bool hasDateValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

