//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface br_pacer : NSObject
{
    NSObject<OS_dispatch_source> *source;
    NSObject<OS_dispatch_source> *timer;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType event_block;
    double last_fire_time;
    double min_fire_interval;
    // Error parsing type: AB, name: ever_resumed
}

- (void).cxx_destruct;
- (void)dealloc;

@end

