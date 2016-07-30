//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UISnapshottingAssertionManager : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;
    NSMutableSet *_heldAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)executeIfNoActiveAssertions:(CDUnknownBlockType)arg1;
- (void)relinquishAssertion:(id)arg1;
- (id)acquireNewAssertion;
- (void)withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

