//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, SGSuggestionsServiceMessagesProtocol;

@interface CKSuggestionsProxy : NSObject
{
    NSMutableSet *_chatBlacklist;
    NSMutableDictionary *_callbackBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<SGSuggestionsServiceMessagesProtocol> *_suggestionsService;
}

@property(retain, nonatomic) NSObject<SGSuggestionsServiceMessagesProtocol> *suggestionsService; // @synthesize suggestionsService=_suggestionsService;
- (void).cxx_destruct;
- (void)bannerViewForSearchables:(id)arg1 guid:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (id)_filteredRealtimeEventsNoDuplicates:(id)arg1;
- (void)purgeCache:(id)arg1;
- (id)init;

@end

