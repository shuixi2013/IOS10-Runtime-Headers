//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface BLSleepAssertionManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *m_assertionSemaphore;
    long long m_assertionCount;
    _Bool m_waiting;
    int m_assertionLock;
    long long m_idleCount;
    int m_idleLock;
}

+ (id)sharedInstance;
- (void)releaseIdleAssertion;
- (void)takeIdleAssertion;
- (void)waitForOutstandingSleepAssertions;
- (void)releaseSleepAssertion;
- (void)takeSleepAssertion;
- (void)dealloc;
- (id)retain;
- (id)autorelease;
- (oneway void)release;
- (id)init;
- (id)hidden;

@end

