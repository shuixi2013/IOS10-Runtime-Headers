//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlaySlideshowSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_clientModel;
    NSString *_clientVersion;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    NSString *_transition;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int repeat:1;
        unsigned int slideMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) unsigned int slideMs; // @synthesize slideMs=_slideMs;
@property(nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property(retain, nonatomic) NSString *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
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
@property(nonatomic) _Bool hasSlideMs;
@property(nonatomic) _Bool hasRepeat;
@property(readonly, nonatomic) _Bool hasTransition;
@property(readonly, nonatomic) _Bool hasTheme;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientModel;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

