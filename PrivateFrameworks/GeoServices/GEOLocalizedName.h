//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLocalizedName : PBCodable <NSCopying>
{
    NSString *_languageCode;
    NSString *_name;
    unsigned int _nameRank;
    NSString *_nameType;
    NSString *_phoneticName;
    _Bool _isDefault;
    struct {
        unsigned int nameRank:1;
        unsigned int isDefault:1;
    } _has;
}

@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(nonatomic) unsigned int nameRank; // @synthesize nameRank=_nameRank;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nameType; // @synthesize nameType=_nameType;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(nonatomic) _Bool hasNameRank;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasNameType;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(nonatomic) _Bool hasIsDefault;
- (void)dealloc;
- (id)initWithPlaceDataLocalizedString:(id)arg1;

@end

