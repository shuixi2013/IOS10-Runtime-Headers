//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSMutableArray, NSString;

@interface GEORPDetails : PBCodable <NSCopying>
{
    int _directionsType;
    GEOMapRegion *_displayRegion;
    int _displayStyle;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    int _mapType;
    NSMutableArray *_places;
    struct {
        unsigned int directionsType:1;
        unsigned int displayStyle:1;
        unsigned int mapType:1;
    } _has;
}

+ (Class)placeType;
@property(retain, nonatomic) GEORPUpdatedLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSMutableArray *places; // @synthesize places=_places;
@property(retain, nonatomic) GEOMapRegion *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
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
- (int)StringAsDirectionsType:(id)arg1;
- (id)directionsTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDirectionsType;
@property(nonatomic) int directionsType; // @synthesize directionsType=_directionsType;
@property(readonly, nonatomic) _Bool hasLabel;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(readonly, nonatomic) _Bool hasLocalizedDescription;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayStyle;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
- (void)dealloc;

@end

