//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKDelayedOperation : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    int _blockEnqueued;
    double _lastExecution;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
}

- (void).cxx_destruct;
- (void)_queue_updateLastExecution;
- (void)_queue_executeBlock;
- (void)invalidate;
- (void)execute;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;

@end

