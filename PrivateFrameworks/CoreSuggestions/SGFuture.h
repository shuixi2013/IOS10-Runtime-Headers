//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue;

@interface SGFuture : NSObject
{
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    _Bool _isComplete;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)futureForObject:(id)arg1 withKey:(void *)arg2 onCreate:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (_Bool)_finishWithResult:(id)arg1 orError:(id)arg2;
- (_Bool)fail:(id)arg1;
- (_Bool)succeed:(id)arg1;
- (void)wait:(CDUnknownBlockType)arg1;
- (id)wait;
- (void)dealloc;
- (id)init;

@end

