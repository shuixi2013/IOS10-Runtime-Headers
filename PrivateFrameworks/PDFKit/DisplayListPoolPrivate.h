//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DisplayListPoolPrivate : NSObject
{
    NSMutableArray *workQueue;
    NSObject<OS_dispatch_semaphore> *workQueueSemaphore;
    NSObject<OS_dispatch_queue> *serialQueue;
    NSMutableDictionary *displayLists;
}

- (void).cxx_destruct;

@end

