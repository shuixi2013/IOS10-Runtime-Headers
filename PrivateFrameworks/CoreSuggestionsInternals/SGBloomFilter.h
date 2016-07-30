//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject
{
    id <SGBloomFilterChunk> _head;
    id <SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)counts;
- (_Bool)exists:(id)arg1;
- (void)addAsync:(id)arg1;
- (void)add:(id)arg1;
- (void)rotate;
- (void)_rotateIfNecessary;
- (id)initWithDirectory:(id)arg1 name:(id)arg2;
- (id)initWithInMemoryStorageSparse;
- (id)initWithInMemoryStorage;
- (id)initWithHead:(id)arg1 tail:(id)arg2;

@end

