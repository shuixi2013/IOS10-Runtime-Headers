//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaEntityCache : NSObject
{
    id <MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    _Bool _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFDictionary *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (void).cxx_destruct;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (map_e2c539ba *)_entityMapForDataProviderEntityClass:(Class)arg1;
- (id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(CDUnknownBlockType)arg4;
- (void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(_Bool)arg3;
- (id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(CDUnknownBlockType)arg3;
- (id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(CDUnknownBlockType)arg2;
- (id)itemWithIdentifier:(long long)arg1;
- (id)initWithMediaLibraryDataProvider:(id)arg1;
- (id)init;

@end

