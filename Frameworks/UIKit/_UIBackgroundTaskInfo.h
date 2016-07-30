//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSProcessAssertion;

__attribute__((visibility("hidden")))
@interface _UIBackgroundTaskInfo : NSObject
{
    unsigned long long _taskId;
    CDUnknownBlockType _expireHandler;
    BKSProcessAssertion *_processAssertion;
    int _count;
}

+ (id)backgroundTaskAssertionQueue;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fireExpirationHandler;
- (void)dealloc;
- (id)initWithProcessAssertion:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

@end

