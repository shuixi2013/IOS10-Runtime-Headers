//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ISCrossfadeChef : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_operationsByRequestID;
    long long __requestCounter;
    NSOperationQueue *__operationQueue;
}

+ (id)defaultChef;
@property(retain, nonatomic, setter=_setOperationQueue:) NSOperationQueue *_operationQueue; // @synthesize _operationQueue=__operationQueue;
@property(nonatomic, setter=_setRequestCounter:) long long _requestCounter; // @synthesize _requestCounter=__requestCounter;
- (void).cxx_destruct;
- (void)_removeOperationForRequestID:(long long)arg1;
- (void)cancelRequestWithID:(long long)arg1;
- (long long)requestCrossfadeItemForVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(struct CGImage *)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(struct CGSize)arg7 videoComposition:(id)arg8 resultHandler:(CDUnknownBlockType)arg9;
- (long long)requestCrossfadeItemForVideoAsset:(id)arg1 sourceStartTime:(double)arg2 targetSize:(struct CGSize)arg3 videoComposition:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

