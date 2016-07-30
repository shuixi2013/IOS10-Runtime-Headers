//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitPlaceCard, NSString;

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    unsigned long long _animationID;
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    unsigned long long _targetID;
    NSString *_actionUrl;
    NSString *_destinationApp;
    int _localSearchProviderID;
    NSString *_photoId;
    int _resultIndex;
    NSString *_richProviderId;
    GEOTransitPlaceCard *_transitPlaceCard;
    struct {
        unsigned int animationID:1;
        unsigned int businessID:1;
        unsigned int placeID:1;
        unsigned int searchResponseRelativeTimestamp:1;
        unsigned int targetID:1;
        unsigned int localSearchProviderID:1;
        unsigned int resultIndex:1;
    } _has;
}

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *destinationApp; // @synthesize destinationApp=_destinationApp;
@property(retain, nonatomic) NSString *richProviderId; // @synthesize richProviderId=_richProviderId;
@property(retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard; // @synthesize transitPlaceCard=_transitPlaceCard;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
@property(nonatomic) unsigned long long targetID; // @synthesize targetID=_targetID;
@property(nonatomic) unsigned long long animationID; // @synthesize animationID=_animationID;
@property(nonatomic) double searchResponseRelativeTimestamp; // @synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(nonatomic) long long placeID; // @synthesize placeID=_placeID;
@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDestinationApp;
@property(readonly, nonatomic) _Bool hasRichProviderId;
@property(readonly, nonatomic) _Bool hasTransitPlaceCard;
@property(readonly, nonatomic) _Bool hasActionUrl;
@property(readonly, nonatomic) _Bool hasPhotoId;
@property(nonatomic) _Bool hasTargetID;
@property(nonatomic) _Bool hasAnimationID;
@property(nonatomic) _Bool hasResultIndex;
@property(nonatomic) int resultIndex; // @synthesize resultIndex=_resultIndex;
@property(nonatomic) _Bool hasSearchResponseRelativeTimestamp;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) _Bool hasPlaceID;
@property(nonatomic) _Bool hasBusinessID;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;

@end

