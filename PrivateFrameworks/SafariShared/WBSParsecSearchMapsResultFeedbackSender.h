//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/_MKPlaceViewControllerFeedbackDelegate-Protocol.h>

@class NSString;
@protocol WBSCompletionListItem><WBSParsecSearchResultPresentedInCard;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate>
{
    id <WBSCompletionListItem><WBSParsecSearchResultPresentedInCard> _searchResult;
}

@property(readonly, nonatomic) __weak id <WBSCompletionListItem><WBSParsecSearchResultPresentedInCard> searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)initWithSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

