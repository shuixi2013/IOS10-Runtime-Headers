//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDSearchLocationParameters, GEOPDSearchStructureIntentRequestType, GEOPDViewportInfo, NSData, NSString;

@interface GEOPDSearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    GEOPDSearchLocationParameters *_searchLocationParameters;
    NSString *_searchString;
    GEOPDSearchStructureIntentRequestType *_searchStructureIntentType;
    int _searchType;
    int _sortOrder;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_aa0bba6c _has;
}

@property(retain, nonatomic) GEOPDSearchLocationParameters *searchLocationParameters; // @synthesize searchLocationParameters=_searchLocationParameters;
@property(retain, nonatomic) GEOPDSearchStructureIntentRequestType *searchStructureIntentType; // @synthesize searchStructureIntentType=_searchStructureIntentType;
@property(retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry; // @synthesize suggestionEntry=_suggestionEntry;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSearchLocationParameters;
@property(readonly, nonatomic) _Bool hasSearchStructureIntentType;
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(readonly, nonatomic) _Bool hasSuggestionEntry;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(readonly, nonatomic) _Bool hasSearchString;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasSortOrder;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
- (void)dealloc;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;

@end

