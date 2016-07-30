//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableAchievement : PBCodable <NSCopying>
{
    long long _achievementType;
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    NSString *_definitionIdentifier;
    NSData *_extraData;
    NSData *_uuid;
    _Bool _alerted;
    struct {
        unsigned int achievementType:1;
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int alerted:1;
    } _has;
}

@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(nonatomic) long long achievementType; // @synthesize achievementType=_achievementType;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
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
@property(readonly, nonatomic) _Bool hasDefinitionIdentifier;
@property(nonatomic) _Bool hasAlerted;
@property(readonly, nonatomic) _Bool hasExtraData;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(nonatomic) _Bool hasAchievementType;
@property(readonly, nonatomic) _Bool hasUuid;
- (id)decodedAchievementType;
- (id)decodedValue;
- (id)decodedCreatedDate;
- (id)decodedUUID;

@end

