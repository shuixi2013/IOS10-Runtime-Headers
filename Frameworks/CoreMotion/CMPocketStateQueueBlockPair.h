//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMPocketStateQueueBlockPair : NSObject
{
    NSObject<OS_dispatch_queue> *fQueryQueue;
    CDUnknownBlockType fQueryBlock;
}

- (void)dealloc;
- (void)dispatchWithState:(long long)arg1 andError:(id)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

