//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject
{
    _Bool _hasPerformedFirstAppExtensionLoad;
    NSMutableDictionary *_expiredBundleIDToTimestampMap;
    NSMutableDictionary *_bundleIDsDisplayingAttribution;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasPerformedFirstAppExtensionLoad; // @synthesize hasPerformedFirstAppExtensionLoad=_hasPerformedFirstAppExtensionLoad;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution; // @synthesize bundleIDsDisplayingAttribution=_bundleIDsDisplayingAttribution;
@property(retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap; // @synthesize expiredBundleIDToTimestampMap=_expiredBundleIDToTimestampMap;
- (void).cxx_destruct;
- (void)_handleInstalledPluginsChanged;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (double)_expiryTimeout;
- (id)_currentTimestamp;
- (_Bool)shouldShowAttributionForBundleID:(id)arg1;
- (void)didShowAttributionForBundleIDs:(id)arg1;
- (void)startExpiryTimer;
- (void)dealloc;
- (id)init;

@end

