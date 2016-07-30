//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BSUIMappedImageCacheFuture : NSObject
{
    UIImage *_cacheImage;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _waitBlock;
    NSObject<OS_dispatch_semaphore> *_waitableSemaphore;
    int _submitted;
    int _waited;
    int _workCompletionWasCalled;
}

- (id)cacheImage;
- (void)submitWorkBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

