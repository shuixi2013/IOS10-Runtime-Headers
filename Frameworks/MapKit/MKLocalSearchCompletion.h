//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOSearchCategory, MKMapItem, NSArray, NSString;
@protocol GEOCompletionItem;

@interface MKLocalSearchCompletion : NSObject
{
    id <GEOCompletionItem> _item;
    NSString *_sourceID;
    NSString *_localizedSectionHeader;
    MKMapItem *_mapItem;
    _Bool _alreadySentFeedback;
}

@property(readonly, nonatomic, getter=_alreadySentFeedback) _Bool alreadySentFeedback; // @synthesize alreadySentFeedback=_alreadySentFeedback;
@property(copy, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void).cxx_destruct;
- (id)iconWithScale:(double)arg1;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, nonatomic, getter=_type) long long type;
- (void)sendFeedback;
- (id)copyStorage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) GEOSearchCategory *category;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)calloutTitle;
- (id)queryLine;
- (_Bool)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
@property(readonly, nonatomic) NSArray *subtitleHighlightRanges;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSArray *titleHighlightRanges;
@property(readonly, nonatomic) NSString *title;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithGeoCompletionItem:(id)arg1;
@property(readonly, nonatomic) id <GEOCompletionItem> geoCompletionItem;

@end

