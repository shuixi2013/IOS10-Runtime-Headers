//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABExperimentAssignment, GEOPlaceDataCacheLogMessage, GEOStateTimingUsageLogMessage, GEOSuggestionsUsageLogMessage, GEOTileSetStateUsageLogMessage, GEOUserActionUsageLogMessage;

@interface GEOShortSessionUsageLogMessage : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    double _relativeTimestamp;
    GEOPlaceDataCacheLogMessage *_placeDataCacheLogMessage;
    unsigned int _sequenceNumber;
    GEOStateTimingUsageLogMessage *_stateTimingLogMessage;
    GEOSuggestionsUsageLogMessage *_suggestionsLogMessage;
    GEOTileSetStateUsageLogMessage *_tileSetStateUsageLogMessage;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    GEOUserActionUsageLogMessage *_userActionLogMessage;
    struct {
        unsigned int sessionId:1;
        unsigned int relativeTimestamp:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(retain, nonatomic) GEOPlaceDataCacheLogMessage *placeDataCacheLogMessage; // @synthesize placeDataCacheLogMessage=_placeDataCacheLogMessage;
@property(retain, nonatomic) GEOTileSetStateUsageLogMessage *tileSetStateUsageLogMessage; // @synthesize tileSetStateUsageLogMessage=_tileSetStateUsageLogMessage;
@property(retain, nonatomic) GEOSuggestionsUsageLogMessage *suggestionsLogMessage; // @synthesize suggestionsLogMessage=_suggestionsLogMessage;
@property(retain, nonatomic) GEOStateTimingUsageLogMessage *stateTimingLogMessage; // @synthesize stateTimingLogMessage=_stateTimingLogMessage;
@property(retain, nonatomic) GEOUserActionUsageLogMessage *userActionLogMessage; // @synthesize userActionLogMessage=_userActionLogMessage;
@property(retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment; // @synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment;
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
@property(readonly, nonatomic) _Bool hasPlaceDataCacheLogMessage;
@property(readonly, nonatomic) _Bool hasTileSetStateUsageLogMessage;
@property(readonly, nonatomic) _Bool hasSuggestionsLogMessage;
@property(readonly, nonatomic) _Bool hasStateTimingLogMessage;
@property(readonly, nonatomic) _Bool hasUserActionLogMessage;
@property(readonly, nonatomic) _Bool hasTilesAbExperimentAssignment;
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasSessionId;
- (void)dealloc;

@end

