//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOETARoute, GEORoute, MNRouteCoordinate, NSData;

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying>
{
    double _alertTimestamp;
    double _distanceToIncident;
    double _etaTimestamp;
    NSData *_alertID;
    unsigned int _alertType;
    GEORoute *_alternateRoute;
    MNRouteCoordinate *_endValidCoordinateRange;
    GEOETARoute *_etaRoute;
    MNRouteCoordinate *_incidentCoordinate;
    GEORoute *_originalRoute;
    MNRouteCoordinate *_startValidCoordinateRange;
    _Bool _isAutomaticReroute;
    struct {
        unsigned int alertTimestamp:1;
        unsigned int distanceToIncident:1;
        unsigned int etaTimestamp:1;
        unsigned int alertType:1;
        unsigned int isAutomaticReroute:1;
    } _has;
}

+ (id)detailsForTrafficIncidentAlert:(id)arg1;
@property(nonatomic) _Bool isAutomaticReroute; // @synthesize isAutomaticReroute=_isAutomaticReroute;
@property(nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property(nonatomic) double etaTimestamp; // @synthesize etaTimestamp=_etaTimestamp;
@property(nonatomic) double alertTimestamp; // @synthesize alertTimestamp=_alertTimestamp;
@property(retain, nonatomic) MNRouteCoordinate *incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
@property(retain, nonatomic) MNRouteCoordinate *endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
@property(retain, nonatomic) MNRouteCoordinate *startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;
@property(retain, nonatomic) GEORoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property(retain, nonatomic) GEORoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(retain, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSData *alertID; // @synthesize alertID=_alertID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsAutomaticReroute;
@property(nonatomic) _Bool hasDistanceToIncident;
@property(nonatomic) _Bool hasEtaTimestamp;
@property(nonatomic) _Bool hasAlertTimestamp;
@property(readonly, nonatomic) _Bool hasIncidentCoordinate;
@property(readonly, nonatomic) _Bool hasEndValidCoordinateRange;
@property(readonly, nonatomic) _Bool hasStartValidCoordinateRange;
@property(readonly, nonatomic) _Bool hasAlternateRoute;
@property(readonly, nonatomic) _Bool hasOriginalRoute;
@property(readonly, nonatomic) _Bool hasEtaRoute;
@property(nonatomic) _Bool hasAlertType;
@property(readonly, nonatomic) _Bool hasAlertID;

@end

