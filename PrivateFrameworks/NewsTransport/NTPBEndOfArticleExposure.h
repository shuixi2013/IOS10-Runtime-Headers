//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying>
{
    long long _personalizationTreatmentId;
    NSString *_articleId;
    int _articleType;
    int _backendArticleVersion;
    int _characterCount;
    NSString *_feedId;
    NSData *_feedViewExposureId;
    NSString *_language;
    NSMutableArray *_namedEntities;
    int _publisherArticleVersion;
    NSMutableArray *_recommendedArticleIds;
    NSString *_referencedArticleId;
    NSMutableArray *_referencedRecommendedArticleIds;
    NSString *_sectionHeadlineId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int personalizationTreatmentId:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int publisherArticleVersion:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)namedEntitiesType;
+ (Class)referencedRecommendedArticleIdsType;
+ (Class)recommendedArticleIdType;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(retain, nonatomic) NSMutableArray *referencedRecommendedArticleIds; // @synthesize referencedRecommendedArticleIds=_referencedRecommendedArticleIds;
@property(retain, nonatomic) NSMutableArray *recommendedArticleIds; // @synthesize recommendedArticleIds=_recommendedArticleIds;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasCharacterCount;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencedRecommendedArticleIdsCount;
- (void)addReferencedRecommendedArticleIds:(id)arg1;
- (void)clearReferencedRecommendedArticleIds;
- (id)recommendedArticleIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedArticleIdsCount;
- (void)addRecommendedArticleId:(id)arg1;
- (void)clearRecommendedArticleIds;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasFeedId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;

@end

