//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSFetchAggregator : NSObject
{
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSOperationQueue *_queue;
    NSMutableArray *_queuedFetches;
    NSMutableArray *_runningFetches;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSMutableArray *runningFetches; // @synthesize runningFetches=_runningFetches;
@property(retain, nonatomic) NSMutableArray *queuedFetches; // @synthesize queuedFetches=_queuedFetches;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue; // @synthesize opQueue=_opQueue;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;
- (void)_lockedFireReadyQueuedFetches;
- (void)_lockedRescheduleQueuedFetchesTimer;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

