//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCache.h>

__attribute__((visibility("hidden")))
@interface _NSMoribundCache : NSCache
{
}

- (void)setEvictsObjectsWithDiscardedContent:(_Bool)arg1;
- (_Bool)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end

