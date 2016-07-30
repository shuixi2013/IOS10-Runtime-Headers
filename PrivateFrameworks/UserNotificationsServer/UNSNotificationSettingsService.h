//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject
{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSNotificationAuthorizationAlertController *_authorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (_Bool)_queue_isAuthorizationModificationRestrictedForApplication:(id)arg1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataProviderFactory:(id)arg1;

@end

