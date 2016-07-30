//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FCFetchOperation : FCOperation
{
    FCFetchOperationResult *_result;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    _Bool _wifiOnly;
    _Bool _canSendFetchCompletionSynchronously;
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
    CDUnknownBlockType _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> *_fetchCompletionQueue;
}

@property(readonly) FCFetchOperationResult *result; // @synthesize result=_result;
@property _Bool canSendFetchCompletionSynchronously; // @synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously;
@property(retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // @synthesize fetchCompletionQueue=_fetchCompletionQueue;
@property(copy) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property _Bool wifiOnly; // @synthesize wifiOnly=_wifiOnly;
- (void).cxx_destruct;
- (void)finishFromEarlyCancelation;
- (void)operationDidFinishWithError:(id)arg1;
- (void)takeInputsFromFetchOperation:(id)arg1;
- (void)finishExecutingWithError:(id)arg1;
- (void)finishExecutingWithStatus:(unsigned long long)arg1;
- (void)finishExecutingWithFetchedObject:(id)arg1;
- (void)finishExecutingWithResult:(id)arg1;
- (_Bool)waitUntilFinishedWithTimeout:(double)arg1;
- (void)cancel;
- (id)init;

@end

