//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying>
{
    CDStruct_95bda58d _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    _Bool _includeHistoricTravelTime;
    struct {
        unsigned int includeHistoricTravelTime:1;
    } _has;
}

@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(nonatomic) _Bool includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
- (int)StringAsTransportTypes:(id)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
- (void)dealloc;

@end

