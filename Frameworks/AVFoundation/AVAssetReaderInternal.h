//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVWeakReference, NSError, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface AVAssetReaderInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAsset *asset;
    struct OpaqueFigAssetReader *figAssetReader;
    CDStruct_e83c9415 timeRange;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    long long status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}

@end

