//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary;

@interface WBSParsecSearchSportsResult : WBSParsecSearchResult
{
    WBSParsecSportsScoreSummary *_scoreSummary;
    WBSParsecSearchSportsAttributionExtraCompletionItem *_extraCompletionItem;
}

+ (id)_specializedSchema;
@property(readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSArray *images;
- (id)initWithDictionary:(id)arg1;

@end

