//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDepartureFrequency-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying>
{
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    _Bool _isEstimated;
    struct {
        unsigned int displayDepartureFrequency:1;
        unsigned int earliestDepartureTime:1;
        unsigned int latestDepartureTime:1;
        unsigned int maxDepartureFrequency:1;
        unsigned int minDepartureFrequency:1;
        unsigned int isEstimated:1;
    } _has;
}

@property(nonatomic) unsigned int displayDepartureFrequency; // @synthesize displayDepartureFrequency=_displayDepartureFrequency;
@property(nonatomic) _Bool isEstimated; // @synthesize isEstimated=_isEstimated;
@property(nonatomic) unsigned int latestDepartureTime; // @synthesize latestDepartureTime=_latestDepartureTime;
@property(nonatomic) unsigned int earliestDepartureTime; // @synthesize earliestDepartureTime=_earliestDepartureTime;
@property(nonatomic) unsigned int maxDepartureFrequency; // @synthesize maxDepartureFrequency=_maxDepartureFrequency;
@property(nonatomic) unsigned int minDepartureFrequency; // @synthesize minDepartureFrequency=_minDepartureFrequency;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasDisplayDepartureFrequency;
@property(nonatomic) _Bool hasIsEstimated;
@property(nonatomic) _Bool hasLatestDepartureTime;
@property(nonatomic) _Bool hasEarliestDepartureTime;
@property(nonatomic) _Bool hasMaxDepartureFrequency;
@property(nonatomic) _Bool hasMinDepartureFrequency;
@property(readonly, nonatomic) double frequencyForSorting;
- (_Bool)isValidAtDate:(id)arg1;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) _Bool isEstimate;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

