//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitRoutingIncidentMessage, GEOTransitRouteDisplayStrings, NSData, NSMutableArray;

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying>
{
    CDStruct_95bda58d _routeBadges;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    GEOTransitRouteDisplayStrings *_displayStrings;
    unsigned int _rank;
    NSData *_routeHandle;
    NSMutableArray *_routePlanningArtworks;
    NSMutableArray *_sectionOptions;
    NSMutableArray *_sections;
    NSMutableArray *_steps;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    struct {
        unsigned int absEndTime:1;
        unsigned int absStartTime:1;
        unsigned int rank:1;
    } _has;
}

+ (Class)sectionType;
+ (Class)sectionOptionType;
+ (Class)routePlanningArtworkType;
+ (Class)stepsType;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableArray *sectionOptions; // @synthesize sectionOptions=_sectionOptions;
@property(retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings; // @synthesize displayStrings=_displayStrings;
@property(retain, nonatomic) NSMutableArray *routePlanningArtworks; // @synthesize routePlanningArtworks=_routePlanningArtworks;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage; // @synthesize transitIncidentMessage=_transitIncidentMessage;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSData *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(nonatomic) unsigned int absEndTime; // @synthesize absEndTime=_absEndTime;
@property(nonatomic) unsigned int absStartTime; // @synthesize absStartTime=_absStartTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSection:(id)arg1;
- (void)clearSections;
- (id)sectionOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionOptionsCount;
- (void)addSectionOption:(id)arg1;
- (void)clearSectionOptions;
- (int)StringAsRouteBadges:(id)arg1;
- (id)routeBadgesAsString:(int)arg1;
- (void)setRouteBadges:(int *)arg1 count:(unsigned long long)arg2;
- (int)routeBadgeAtIndex:(unsigned long long)arg1;
- (void)addRouteBadge:(int)arg1;
- (void)clearRouteBadges;
@property(readonly, nonatomic) int *routeBadges;
@property(readonly, nonatomic) unsigned long long routeBadgesCount;
@property(readonly, nonatomic) _Bool hasDisplayStrings;
- (id)routePlanningArtworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)routePlanningArtworksCount;
- (void)addRoutePlanningArtwork:(id)arg1;
- (void)clearRoutePlanningArtworks;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
@property(nonatomic) _Bool hasRank;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addSteps:(id)arg1;
- (void)clearSteps;
@property(nonatomic) _Bool hasAbsEndTime;
@property(nonatomic) _Bool hasAbsStartTime;
- (void)dealloc;

@end

