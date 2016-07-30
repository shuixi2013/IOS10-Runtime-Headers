//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSString;

@interface GEOPDAutocompleteParametersSiriSearch : PBCodable <NSCopying>
{
    int _maxResults;
    NSString *_prefix;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    _Bool _completed;
    _Bool _highlightDiff;
    struct {
        unsigned int maxResults:1;
        unsigned int completed:1;
        unsigned int highlightDiff:1;
    } _has;
}

@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasPrefix;
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(readonly, nonatomic) _Bool hasQuery;
- (void)dealloc;

@end

