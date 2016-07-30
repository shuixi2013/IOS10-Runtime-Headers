//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayPhotoSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    int _reason;
    NSString *_sessionUUID;
    unsigned int _totalPhotos;
    CDStruct_790a38bb _has;
}

@property(nonatomic) unsigned int maxBPS; // @synthesize maxBPS=_maxBPS;
@property(nonatomic) unsigned int minBPS; // @synthesize minBPS=_minBPS;
@property(nonatomic) unsigned int maxPhotoBytes; // @synthesize maxPhotoBytes=_maxPhotoBytes;
@property(nonatomic) unsigned int minPhotoBytes; // @synthesize minPhotoBytes=_minPhotoBytes;
@property(nonatomic) unsigned int totalPhotos; // @synthesize totalPhotos=_totalPhotos;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxBPS;
@property(nonatomic) _Bool hasMinBPS;
@property(nonatomic) _Bool hasMaxPhotoBytes;
@property(nonatomic) _Bool hasMinPhotoBytes;
@property(nonatomic) _Bool hasTotalPhotos;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

