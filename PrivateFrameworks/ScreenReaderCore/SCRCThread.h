//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSThread, SCRCStackQueue;

@interface SCRCThread : NSObject
{
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_runLoop;
    id _key;
    _Bool _isInvalid;
    _Bool _isRegistered;
    _Bool _isTimerSet;
    double _lastStartTime;
    NSString *_description;
    _Bool _descriptionChanged;
    NSThread *_nsThread;
    _Bool _shouldStop;
    _Bool _isWaitingForStoppingThread;
}

+ (void)postStopNotification;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(struct __va_list_tag [1])arg8;
+ (long long)activeThreadCount;
+ (id)activity;
+ (void)initialize;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (double)lastStartTime;
- (_Bool)_isWaitingForStoppingThread;
- (void)_setIsWaitingForStoppingThread:(_Bool)arg1;
- (_Bool)isInvalid;
- (_Bool)_shouldStop;
- (void)setIsInvalid:(_Bool)arg1;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void)dealloc;
- (void)_threadDidStop;
- (void)_runThread:(id)arg1;
- (void)_setKey:(id)arg1;
- (void)_setName:(id)arg1;
- (void)setName:(id)arg1;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (id)init;

@end
