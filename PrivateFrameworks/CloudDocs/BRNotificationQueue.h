//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSFastEnumeration-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration>
{
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_filterIndex:(id)arg1;
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;
- (void)processDequeueCallbacks;
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)init;

@end

