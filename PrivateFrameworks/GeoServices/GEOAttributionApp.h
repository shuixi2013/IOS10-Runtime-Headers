//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    _Bool _supportsRestaurantQueueing;
    _Bool _supportsRestaurantReservations;
    struct {
        unsigned int supportsRestaurantQueueing:1;
        unsigned int supportsRestaurantReservations:1;
    } _has;
}

+ (Class)handledSchemesType;
@property(nonatomic) _Bool supportsRestaurantQueueing; // @synthesize supportsRestaurantQueueing=_supportsRestaurantQueueing;
@property(nonatomic) _Bool supportsRestaurantReservations; // @synthesize supportsRestaurantReservations=_supportsRestaurantReservations;
@property(retain, nonatomic) NSMutableArray *handledSchemes; // @synthesize handledSchemes=_handledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSupportsRestaurantQueueing;
@property(nonatomic) _Bool hasSupportsRestaurantReservations;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
- (void)dealloc;

@end

