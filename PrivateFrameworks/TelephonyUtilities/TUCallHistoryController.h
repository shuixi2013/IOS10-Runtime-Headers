//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDelegate-Protocol.h>

@class CHManager, NSArray, NSMutableSet, NSString, TUCallProviderManager, TUDispatcher;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>
{
    NSString *_coalescingStrategy;
    unsigned long long _options;
    NSArray *_recentCalls;
    unsigned long long _unreadCallCount;
    unsigned long long _unreadVideoCallCount;
    unsigned long long _unreadAudioCallCount;
    CHManager *_callHistoryManager;
    TUCallProviderManager *_callProviderManager;
    TUDispatcher *_dispatcher;
    TUDispatcher *_simpleIvarDispatcher;
    NSMutableSet *_metadataPreCachedOptions;
}

+ (id)callHistoryControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;
+ (id)sharedControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;
+ (id)sharedController;
@property(retain, nonatomic) NSMutableSet *metadataPreCachedOptions; // @synthesize metadataPreCachedOptions=_metadataPreCachedOptions;
@property(retain, nonatomic) TUDispatcher *simpleIvarDispatcher; // @synthesize simpleIvarDispatcher=_simpleIvarDispatcher;
@property(retain, nonatomic) TUDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (CDUnknownBlockType)callHistoryManagerRecentCallsDispatchBlock;
- (CDUnknownBlockType)callHistoryManagerInitializationDispatchBlock;
- (void)loadDispatchQueue;
- (id)initWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;
- (void)reloadWithOptions:(unsigned long long)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)deleteRecentCalls:(id)arg1;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteAllRecentCalls;
- (void)boostQualityOfService;
@property(nonatomic) unsigned long long unreadAudioCallCount; // @synthesize unreadAudioCallCount=_unreadAudioCallCount;
@property(nonatomic) unsigned long long unreadVideoCallCount; // @synthesize unreadVideoCallCount=_unreadVideoCallCount;
@property(nonatomic) unsigned long long unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;
@property(retain, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

