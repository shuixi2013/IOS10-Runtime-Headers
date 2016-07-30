//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBDateTimeRange, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDateTimeRange *_dateTime;
    int _fileType;
    _INPBContact *_person;
    _INPBLong *_quantity;
    _INPBString *_value;
    struct {
        unsigned int fileType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBLong *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) _INPBString *value; // @synthesize value=_value;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime; // @synthesize dateTime=_dateTime;
@property(retain, nonatomic) _INPBContact *person; // @synthesize person=_person;
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
@property(readonly, nonatomic) _Bool hasQuantity;
@property(nonatomic) _Bool hasFileType;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasDateTime;
@property(readonly, nonatomic) _Bool hasPerson;

@end

