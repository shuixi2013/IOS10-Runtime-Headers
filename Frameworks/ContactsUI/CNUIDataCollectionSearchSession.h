//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDataCollectionSearchSession : NSObject
{
    _Bool _pendingResults;
    _Bool _pendingSuggestionsResults;
}

+ (id)currentSession;
+ (void)end;
+ (void)begin;
@property(nonatomic) _Bool pendingSuggestionsResults; // @synthesize pendingSuggestionsResults=_pendingSuggestionsResults;
@property(nonatomic) _Bool pendingResults; // @synthesize pendingResults=_pendingResults;
- (void)didSelectResultSuggested:(_Bool)arg1;
- (void)didFetchResultSuggested:(_Bool)arg1;
- (void)searchStringDidChange;

@end

