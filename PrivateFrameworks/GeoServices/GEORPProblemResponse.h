//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying>
{
    NSString *_problemId;
    int _statusCode;
    _Bool _isNotificationSupported;
    struct {
        unsigned int statusCode:1;
        unsigned int isNotificationSupported:1;
    } _has;
}

@property(nonatomic) _Bool isNotificationSupported; // @synthesize isNotificationSupported=_isNotificationSupported;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsNotificationSupported;
@property(readonly, nonatomic) _Bool hasProblemId;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)dealloc;

@end

