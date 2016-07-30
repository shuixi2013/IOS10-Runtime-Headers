//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABClientConfig, NSMutableArray, NSString;

@interface GEOABAssignmentResponse : PBCodable <NSCopying>
{
    unsigned long long _refreshIntervalSeconds;
    double _timestamp;
    NSMutableArray *_assignments;
    GEOABClientConfig *_clientConfig;
    NSString *_requestGuid;
    NSString *_sourceURL;
    _Bool _invalidatePoiCache;
    _Bool _invalidateTileCache;
    struct {
        unsigned int refreshIntervalSeconds:1;
        unsigned int timestamp:1;
        unsigned int invalidatePoiCache:1;
        unsigned int invalidateTileCache:1;
    } _has;
}

+ (Class)assignmentType;
@property(retain, nonatomic) GEOABClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(nonatomic) unsigned long long refreshIntervalSeconds; // @synthesize refreshIntervalSeconds=_refreshIntervalSeconds;
@property(nonatomic) _Bool invalidatePoiCache; // @synthesize invalidatePoiCache=_invalidatePoiCache;
@property(nonatomic) _Bool invalidateTileCache; // @synthesize invalidateTileCache=_invalidateTileCache;
@property(retain, nonatomic) NSMutableArray *assignments; // @synthesize assignments=_assignments;
@property(retain, nonatomic) NSString *requestGuid; // @synthesize requestGuid=_requestGuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasClientConfig;
@property(nonatomic) _Bool hasRefreshIntervalSeconds;
@property(nonatomic) _Bool hasInvalidatePoiCache;
@property(nonatomic) _Bool hasInvalidateTileCache;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)assignmentsCount;
- (void)addAssignment:(id)arg1;
- (void)clearAssignments;
@property(readonly, nonatomic) _Bool hasRequestGuid;
- (void)dealloc;
- (id)_clientConfigValueForKey:(id)arg1;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

