//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;

@interface AVMediaDataRequester : NSObject
{
    id <AVMediaDataRequesterConsumer> _mediaDataConsumer;
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _requestBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)_requestMediaDataIfReady;
- (void)invalidate;
- (void)startRequestingMediaData;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(CDUnknownBlockType)arg3;

@end

