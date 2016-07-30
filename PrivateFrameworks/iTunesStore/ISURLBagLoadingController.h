//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHashTable, NSMutableArray, SSURLBag;
@protocol OS_dispatch_queue;

@interface ISURLBagLoadingController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasSuccessfullyLoadedBag;
    NSDictionary *_bagDictionary;
    NSMutableArray *_bagAccessRequestBlocks;
    NSError *_bagLoadingError;
    NSHashTable *_bagObservers;
    SSURLBag *_URLBag;
}

+ (id)sharedBagLoadingController;
- (void).cxx_destruct;
- (void)_updateBagWithDictionary:(id)arg1 error:(id)arg2;
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(_Bool)arg1;
- (void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)requestAccessToBagUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeBagObserver:(id)arg1;
- (void)addBagObserver:(id)arg1;
@property(readonly, nonatomic) NSDictionary *bagDictionary;
- (void)dealloc;
- (id)init;

@end

