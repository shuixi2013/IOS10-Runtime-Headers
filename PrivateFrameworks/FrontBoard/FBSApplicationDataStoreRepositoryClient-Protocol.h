//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
- (_Bool)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id *)arg3;
- (void)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withResult:(void (^)(id, NSError *))arg3 checkPrefetch:(_Bool)arg4;
- (void)removeAllObjectsForApplication:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (void)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withResult:(void (^)(id, NSError *))arg3;
- (void)availableDataStores:(void (^)(NSArray *, NSError *))arg1;
- (void)synchronizeWithCompletion:(void (^)(NSError *))arg1;
- (void)invalidate;
- (void)removePrefetchedKeys:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addPrefetchedKeys:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

