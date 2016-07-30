//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying>
{
    GEOMapRegion *_mapRegion;
    int _mapType;
    unsigned int _timeSinceMapViewportChanged;
    struct {
        unsigned int mapType:1;
        unsigned int timeSinceMapViewportChanged:1;
    } _has;
}

+ (id)viewportInfoForTraits:(id)arg1;
@property(nonatomic) unsigned int timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool hasTimeSinceMapViewportChanged;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end

