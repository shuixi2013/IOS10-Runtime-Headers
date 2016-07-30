//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable <NSCopying>
{
    NSString *_baseURL;
    int _checksumType;
    NSMutableArray *_countryRegionWhitelists;
    unsigned int _dataSet;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    int _updateBehavior;
    NSMutableArray *_validVersions;
    _Bool _multiTileURLUsesStatusCodes;
    struct {
        unsigned int checksumType:1;
        unsigned int dataSet:1;
        unsigned int updateBehavior:1;
        unsigned int multiTileURLUsesStatusCodes:1;
    } _has;
}

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;
@property(nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) NSMutableArray *countryRegionWhitelists; // @synthesize countryRegionWhitelists=_countryRegionWhitelists;
@property(nonatomic) _Bool multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;
@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDataSet;
- (int)StringAsChecksumType:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChecksumType;
@property(nonatomic) int checksumType; // @synthesize checksumType=_checksumType;
- (id)countryRegionWhitelistAtIndex:(unsigned long long)arg1;
- (unsigned long long)countryRegionWhitelistsCount;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)clearCountryRegionWhitelists;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)updateBehaviorAsString:(int)arg1;
@property(nonatomic) _Bool hasUpdateBehavior;
@property(nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
@property(nonatomic) _Bool hasMultiTileURLUsesStatusCodes;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedLanguagesCount;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
@property(readonly, nonatomic) _Bool hasLocalizationURL;
- (int)StringAsSize:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (int)StringAsScale:(id)arg1;
- (id)scaleAsString:(int)arg1;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)validVersionsCount;
- (void)addValidVersion:(id)arg1;
- (void)clearValidVersions;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasMultiTileURL;
@property(readonly, nonatomic) _Bool hasBaseURL;
- (void)dealloc;

@end

