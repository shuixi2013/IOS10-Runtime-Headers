//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPDate, FCCKPRecordReference, NSData, NSMutableArray, NSString;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _signedValue;
    NSData *_bytesValue;
    FCCKPDate *_dateValue;
    NSMutableArray *_listValues;
    FCCKPRecordReference *_referenceValue;
    NSString *_stringValue;
    int _type;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) FCCKPRecordReference *referenceValue; // @synthesize referenceValue=_referenceValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) FCCKPDate *dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long signedValue; // @synthesize signedValue=_signedValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)addListValue:(id)arg1;
- (void)clearListValues;
@property(readonly, nonatomic) _Bool hasReferenceValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasSignedValue;
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

