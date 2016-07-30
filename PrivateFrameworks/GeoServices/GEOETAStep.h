//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying>
{
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    GEOTimeCheckpoints *_timeCheckpoints;
    int _zilchPointIndex;
    struct {
        unsigned int distanceRemaining:1;
        unsigned int expectedTime:1;
        unsigned int stepID:1;
        unsigned int zilchPointIndex:1;
    } _has;
}

@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimeCheckpoints;
@property(nonatomic) _Bool hasZilchPointIndex;
@property(nonatomic) int zilchPointIndex; // @synthesize zilchPointIndex=_zilchPointIndex;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) _Bool hasStepID;
- (void)dealloc;
@property(nonatomic) _Bool hasDistanceRemaining;
@property(nonatomic) unsigned int distanceRemaining;

@end

