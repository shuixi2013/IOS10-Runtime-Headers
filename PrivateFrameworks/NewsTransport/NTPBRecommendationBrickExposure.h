//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    NSMutableArray *_recommendedFeedIds;
    struct {
        unsigned int feedType:1;
    } _has;
}

+ (Class)recommendedFeedIdsType;
@property(retain, nonatomic) NSMutableArray *recommendedFeedIds; // @synthesize recommendedFeedIds=_recommendedFeedIds;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedFeedIdsCount;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

