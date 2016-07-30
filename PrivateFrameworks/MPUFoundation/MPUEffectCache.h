//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPUEffectCache : NSObject
{
    NSCache *_effectCache;
    NSObject<OS_dispatch_queue> *_blurQueue;
    NSOperationQueue *_effectQueue;
}

- (void).cxx_destruct;
- (id)_imageKeyForImage:(id)arg1;
- (id)_effectImageWithImage:(id)arg1 settings:(id)arg2;
- (id)_blurredImageWithImage:(id)arg1 settings:(id)arg2;
@property unsigned long long countLimit;
- (void)effectImageWithImage:(id)arg1 settings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

