//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPStoreRedownloadProductResponse, NSError, NSObject, NSString, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    _Bool _shouldUseStreamingRedownload;
    SSURLConnectionRequest *_URLConnectionRequest;
    NSString *_buyParameters;
    unsigned long long _endpointType;
}

@property(readonly, nonatomic) unsigned long long endpointType; // @synthesize endpointType=_endpointType;
@property(readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *responseError;
@property(readonly, nonatomic) MPStoreRedownloadProductResponse *redownloadProductResponse;
- (void)main;
- (void)cancel;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(_Bool)arg3;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)init;

@end

