//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASAsset;
@protocol OS_dispatch_queue, SGQPAssetUpdateDelegate;

@interface SGQPAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _PASAsset *_commonAsset;
    _PASAsset *_currentPrimaryAsset;
    NSString *_currentLanguage;
    NSString *_currentABGroup;
    NSObject<SGQPAssetUpdateDelegate> *_delegate;
}

+ (id)preinstalledPathOfAsset:(id)arg1;
+ (id)chooseLocaleIdForCurrentLocale:(id)arg1 availableLocales:(id)arg2;
+ (id)chooseABGroupForVendorUUID:(id)arg1 fromGroups:(id)arg2;
+ (id)thisDeviceVendorUUID;
+ (id)sharedInstance;
@property __weak NSObject<SGQPAssetUpdateDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primaryAssetReady;
- (void)commonAssetReady;
- (void)loadPreinstalledAsset;
- (id)init;

@end

