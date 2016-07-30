//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, RadioRequestContext;
@protocol OS_dispatch_queue;

@interface MPCRadioOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;
    RadioRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedQueue;
@property(copy, nonatomic) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void).cxx_destruct;
- (void)_preparePlaybackWithPrepareRadioPlaybackOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_cancelPlaybackPreparation;
- (void)_addOperation:(id)arg1;
- (void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)preparePlaybackWithOperation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadRadioConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPlaybackPreparation;
- (void)addStationWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addGetTracksOperation:(id)arg1;
- (id)init;

@end
