//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock, SKUIClientContext, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    SKUIResourceRequest *_request;
    long long __loadReason;
}

@property(nonatomic, setter=_setLoadReason:) long long _loadReason; // @synthesize _loadReason=__loadReason;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
@property(retain) SKUIClientContext *clientContext;
@property(readonly, copy) SKUIResourceRequest *resourceRequest;
- (id)initWithResourceRequest:(id)arg1;
- (id)init;
- (id)_initSKUILoadResourceOperation;

@end

