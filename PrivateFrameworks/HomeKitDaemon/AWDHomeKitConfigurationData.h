//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _databaseSize;
    NSMutableArray *_homeConfigurations;
    unsigned int _metadataVersion;
    _Bool _isResidentCapable;
    _Bool _isResidentEnabled;
    struct {
        unsigned int timestamp:1;
        unsigned int databaseSize:1;
        unsigned int metadataVersion:1;
        unsigned int isResidentCapable:1;
        unsigned int isResidentEnabled:1;
    } _has;
}

+ (Class)homeConfigurationsType;
@property(retain, nonatomic) NSMutableArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property(nonatomic) _Bool isResidentEnabled; // @synthesize isResidentEnabled=_isResidentEnabled;
@property(nonatomic) _Bool isResidentCapable; // @synthesize isResidentCapable=_isResidentCapable;
@property(nonatomic) unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(nonatomic) unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
- (id)homeConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeConfigurationsCount;
- (void)addHomeConfigurations:(id)arg1;
- (void)clearHomeConfigurations;
@property(nonatomic) _Bool hasIsResidentEnabled;
@property(nonatomic) _Bool hasIsResidentCapable;
@property(nonatomic) _Bool hasMetadataVersion;
@property(nonatomic) _Bool hasDatabaseSize;
@property(nonatomic) _Bool hasTimestamp;

@end

