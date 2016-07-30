//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector
{
    struct __CFRunLoopTimer *_timer;
    id _key;
    _Bool _isCanceled;
    _Bool _isPending;
    id _object;
    NSLock *_lock;
    _Bool _createdTimer;
}

+ (void)_runThread;
+ (void)initialize;
- (void)_dispatchSCRCThread;
- (void)_dispatchMainThread;
- (void)_dispatch;
- (id)threadKey;
- (_Bool)isPending;
- (_Bool)isCancelled;
- (_Bool)isCanceled;
- (void)cancel;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (void)dispatchAfterDelay:(double)arg1;
- (void)dealloc;
- (oneway void)release;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (_Bool)_createdTimer;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

