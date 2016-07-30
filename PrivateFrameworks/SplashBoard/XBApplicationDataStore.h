//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBSnapshotManifestStore-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface XBApplicationDataStore : NSObject <XBSnapshotManifestStore>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_cacheableBundleIdentifiers;
    NSMutableDictionary *_cachedStoresByBundleIdentifier;
}

+ (id)sharedInstance;
- (void)endAccessBlockForBundleIdentifier:(id)arg1;
- (void)beginAccessBlockForBundleIdentifier:(id)arg1;
- (void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)loadManifestDataForBundleIdentifier:(id)arg1;
- (void)clearManifestDataForBundleIdentifier:(id)arg1;
- (void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_storeForBundleIdentifier:(id)arg1;
- (id)_loadCompatibilityInfoForBundleIdentifier:(id)arg1;
- (void)_clearCompatibilityInfoForBundleIdentifier:(id)arg1;
- (void)_persistCompatibilityInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

