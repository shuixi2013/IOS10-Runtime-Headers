//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSURLRequest, SKUIClientContext, SSMetricsPageEvent;
@protocol OS_dispatch_queue;

@interface SKUILoadProductPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;
    CDUnknownBlockType _outputBlock;
    NSURLRequest *_urlRequest;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (id)_initSKUILoadProductPageOperation;

@end

