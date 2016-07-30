//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, NSURL, SBSApplicationShortcutService, SBSApplicationShortcutServiceFetchResult;

@interface SBFApplication : NSObject
{
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    double _applicationShortcutServiceFetchResultExpirationTimeInterval;
    _Bool _systemOrInternalApplication;
    NSString *_applicationBundleIdentifier;
    NSString *_displayName;
    NSURL *_bundleURL;
    NSNumber *_appStoreItemID;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

@property(readonly, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic) NSNumber *appStoreItemID; // @synthesize appStoreItemID=_appStoreItemID;
@property(readonly, nonatomic, getter=isSystemOrInternalApplication) _Bool systemOrInternalApplication; // @synthesize systemOrInternalApplication=_systemOrInternalApplication;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void).cxx_destruct;
- (void)_updateApplicationShortcutServiceFetchResult;
@property(readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;

@end

