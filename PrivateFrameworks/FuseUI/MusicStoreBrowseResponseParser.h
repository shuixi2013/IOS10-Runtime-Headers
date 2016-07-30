//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPChangeDetails, MPSectionedCollection, MPStoreItemMetadataResponse, MusicStoreBrowseContentItemBuilder, MusicStoreBrowseSectionBuilder, NSArray, NSDictionary, NSSet;

@interface MusicStoreBrowseResponseParser : NSObject
{
    MPSectionedCollection *_additionalContentIdentifiers;
    NSArray *_allAdditionalContentIdentifiersNeedingLookup;
    long long _parseOnceToken;
    MPSectionedCollection *_results;
    NSDictionary *_storePlatformDataResults;
    NSSet *_unavailableContentIdentifiers;
    CDStruct_d2d88407 _options;
    id _rawResponseOutput;
    MusicStoreBrowseResponseParser *_previousParser;
    MPStoreItemMetadataResponse *_additionalStoreItemMetadataResponse;
    MusicStoreBrowseSectionBuilder *_sectionBuilder;
    MusicStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPChangeDetails *_changeDetails;
}

@property(readonly, nonatomic) MPChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
@property(readonly, nonatomic) MusicStoreBrowseContentItemBuilder *contentItemBuilder; // @synthesize contentItemBuilder=_contentItemBuilder;
@property(readonly, nonatomic) MusicStoreBrowseSectionBuilder *sectionBuilder; // @synthesize sectionBuilder=_sectionBuilder;
@property(readonly, nonatomic) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse; // @synthesize additionalStoreItemMetadataResponse=_additionalStoreItemMetadataResponse;
@property(readonly, nonatomic) MusicStoreBrowseResponseParser *previousParser; // @synthesize previousParser=_previousParser;
@property(readonly, nonatomic) CDStruct_d2d88407 options; // @synthesize options=_options;
@property(readonly, nonatomic) id rawResponseOutput; // @synthesize rawResponseOutput=_rawResponseOutput;
- (void).cxx_destruct;
- (_Bool)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg1;
- (id)_storeItemMetadataForContentIdentifier:(id)arg1;
- (void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg1;
- (void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg1;
- (void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
- (void)_parseSingleContentListFromPageDataDictionary:(id)arg1 isMemberOfChartSet:(_Bool)arg2;
- (_Bool)_parseFeaturedContentChild:(id)arg1 isMemberOfChartSet:(_Bool)arg2 insertingResultsToSectionedCollection:(id)arg3 atSectionIndex:(long long)arg4 additionalContentIdentifiers:(id)arg5 allAdditionalContentIdentifiersNeedingLookup:(id)arg6;
- (void)_parseFeaturedContentStructureModelChildren:(id)arg1;
- (void)_parse;
@property(readonly, nonatomic) NSArray *allAdditionalContentIdentifiersNeedingLookup;
@property(readonly, nonatomic) MPSectionedCollection *additionalContentIdentifiers;
@property(readonly, nonatomic) MPSectionedCollection *results;
- (id)initWithPreviousParser:(id)arg1 additionalStoreItemMetadataResponse:(id)arg2 options:(CDStruct_d2d88407)arg3 sectionBuilder:(id)arg4 contentItemBuilder:(id)arg5;
- (id)initWithRawResponseOutput:(id)arg1 options:(CDStruct_d2d88407)arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4;

@end

