//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying>
{
    struct GEOSessionID _navSessionId;
    struct GEOSessionID _sessionId;
    double _navSessionRelativeTimestamp;
    double _relativeTimestamp;
    unsigned int _sequenceNumber;
    struct {
        unsigned int navSessionId:1;
        unsigned int sessionId:1;
        unsigned int navSessionRelativeTimestamp:1;
        unsigned int relativeTimestamp:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(nonatomic) double navSessionRelativeTimestamp; // @synthesize navSessionRelativeTimestamp=_navSessionRelativeTimestamp;
@property(nonatomic) struct GEOSessionID navSessionId; // @synthesize navSessionId=_navSessionId;
@property(nonatomic) double relativeTimestamp; // @synthesize relativeTimestamp=_relativeTimestamp;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNavSessionRelativeTimestamp;
@property(nonatomic) _Bool hasNavSessionId;
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasSessionId;

@end

