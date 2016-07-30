//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>
{
    NSString *_languageTag;
    NSMutableArray *_trendingTopics;
}

+ (Class)trendingTopicsType;
@property(retain, nonatomic) NSMutableArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trendingTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendingTopicsCount;
- (void)addTrendingTopics:(id)arg1;
- (void)clearTrendingTopics;
@property(readonly, nonatomic) _Bool hasLanguageTag;

@end

