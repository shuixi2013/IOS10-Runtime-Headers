//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOListResultItem : PBCodable <NSCopying>
{
    unsigned long long _businessId;
    long long _latency;
    int _resultType;
    int _tappedCount;
    _Bool _eventuallyVisible;
    _Bool _initiallyVisible;
    struct {
        unsigned int businessId:1;
        unsigned int latency:1;
        unsigned int resultType:1;
        unsigned int tappedCount:1;
        unsigned int eventuallyVisible:1;
        unsigned int initiallyVisible:1;
    } _has;
}

@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(nonatomic) _Bool eventuallyVisible; // @synthesize eventuallyVisible=_eventuallyVisible;
@property(nonatomic) _Bool initiallyVisible; // @synthesize initiallyVisible=_initiallyVisible;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasBusinessId;
@property(nonatomic) _Bool hasTappedCount;
@property(nonatomic) int tappedCount; // @synthesize tappedCount=_tappedCount;
@property(nonatomic) _Bool hasLatency;
@property(nonatomic) long long latency; // @synthesize latency=_latency;
@property(nonatomic) _Bool hasEventuallyVisible;
@property(nonatomic) _Bool hasInitiallyVisible;
- (int)StringAsResultType:(id)arg1;
- (id)resultTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end

