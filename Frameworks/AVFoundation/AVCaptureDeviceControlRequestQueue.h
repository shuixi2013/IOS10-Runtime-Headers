//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureDeviceControlRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}

- (id)head;
- (id)dequeue;
- (void)enqueueRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

