//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSData, NSMutableArray, NSString;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    double _turnaroundTime;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSString *_nearbySectionHeader;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    _Bool _isChainResultSet;
    struct {
        unsigned int turnaroundTime:1;
        unsigned int statusCodeInfo:1;
        unsigned int isChainResultSet:1;
    } _has;
}

+ (Class)namedFeaturesType;
+ (Class)suggestionEntryListsType;
+ (Class)placeResultType;
@property(nonatomic) _Bool isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) NSString *nearbySectionHeader; // @synthesize nearbySectionHeader=_nearbySectionHeader;
@property(nonatomic) double turnaroundTime; // @synthesize turnaroundTime=_turnaroundTime;
@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(retain, nonatomic) NSMutableArray *suggestionEntryLists; // @synthesize suggestionEntryLists=_suggestionEntryLists;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsChainResultSet;
@property(readonly, nonatomic) _Bool hasNearbySectionHeader;
@property(nonatomic) _Bool hasTurnaroundTime;
- (int)StringAsStatusCodeInfo:(id)arg1;
- (id)statusCodeInfoAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCodeInfo;
@property(nonatomic) int statusCodeInfo; // @synthesize statusCodeInfo=_statusCodeInfo;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)addNamedFeatures:(id)arg1;
- (void)clearNamedFeatures;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearSuggestionEntryLists;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)dealloc;

@end
