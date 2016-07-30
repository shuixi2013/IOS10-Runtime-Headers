//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCCacheCoordinatorFlushPolicy, FCMutexLock, FCReadWriteLock, FCThreadSafeMutableDictionary, NSCountedSet, NSMutableSet, NSString;
@protocol FCCacheCoordinatorDelegate, FCOperationThrottler;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>
{
    _Bool _flushingEnabled;
    id <FCCacheCoordinatorDelegate> _delegate;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    FCMutexLock *_interestLock;
    FCReadWriteLock *_dataLock;
    id <FCOperationThrottler> _flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
}

@property(getter=isFlushingEnabled) _Bool flushingEnabled; // @synthesize flushingEnabled=_flushingEnabled;
@property(retain, nonatomic) FCCacheCoordinatorFlushPolicy *flushPolicy; // @synthesize flushPolicy=_flushPolicy;
@property(retain, nonatomic) id <FCOperationThrottler> flushThrottler; // @synthesize flushThrottler=_flushThrottler;
@property(retain, nonatomic) FCReadWriteLock *dataLock; // @synthesize dataLock=_dataLock;
@property(retain, nonatomic) FCMutexLock *interestLock; // @synthesize interestLock=_interestLock;
@property(retain, nonatomic) FCThreadSafeMutableDictionary *cacheHintsByKey; // @synthesize cacheHintsByKey=_cacheHintsByKey;
@property(retain, nonatomic) NSCountedSet *interestedKeys; // @synthesize interestedKeys=_interestedKeys;
@property(retain, nonatomic) NSMutableSet *storedKeys; // @synthesize storedKeys=_storedKeys;
@property(nonatomic) __weak id <FCCacheCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_modifyCacheHintForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2;
- (void)didAccessKeys:(id)arg1;
- (void)removeInterestInKeys:(id)arg1;
- (void)addInterestInKeys:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)enableFlushingWithPolicy:(id)arg1;
- (id)persistableHints;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (_Bool)cacheContainsKey:(id)arg1;
- (void)performCacheWrite:(CDUnknownBlockType)arg1;
- (void)performCacheRead:(CDUnknownBlockType)arg1;
- (id)holdTokensForKeys:(id)arg1;
- (id)holdTokenForKeys:(id)arg1;
- (id)holdTokenForKey:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;
- (void)setupWithInitialKeys:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

