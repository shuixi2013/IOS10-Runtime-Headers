//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, NSString;

@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSString *_resultDisplayHeader;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    int _searchResultType;
    _Bool _isChainResultSet;
    struct {
        unsigned int searchResultType:1;
        unsigned int isChainResultSet:1;
    } _has;
}

+ (Class)relatedSearchSuggestionType;
+ (Class)disambiguationLabelType;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior; // @synthesize searchClientBehavior=_searchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion; // @synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion;
@property(retain, nonatomic) NSString *resultDisplayHeader; // @synthesize resultDisplayHeader=_resultDisplayHeader;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property(nonatomic) _Bool isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSearchClientBehavior;
@property(readonly, nonatomic) _Bool hasDefaultRelatedSearchSuggestion;
@property(readonly, nonatomic) _Bool hasResultDisplayHeader;
- (int)StringAsSearchResultType:(id)arg1;
- (id)searchResultTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchResultType;
@property(nonatomic) int searchResultType; // @synthesize searchResultType=_searchResultType;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(nonatomic) _Bool hasIsChainResultSet;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;
- (void)dealloc;

@end

