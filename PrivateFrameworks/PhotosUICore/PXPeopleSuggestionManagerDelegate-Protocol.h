//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleSuggestionManager;
@protocol PXFaceCollection;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionAvailable:(id <PXFaceCollection>)arg2;
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
@end

