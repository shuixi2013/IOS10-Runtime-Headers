//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/UNUserNotificationCenterObserver-Protocol.h>

@class NSString, UNUserNotificationCenter;
@protocol UNSNotificationSchedulerDelegate;

@interface UNSNotificationScheduler : NSObject <UNUserNotificationCenterObserver>
{
    NSString *_bundleIdentifier;
    id <UNSNotificationSchedulerDelegate> _delegate;
    UNUserNotificationCenter *_userNotificationCenter;
}

@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(nonatomic) __weak id <UNSNotificationSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didChangePendingNotificationRequests:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotifications:(id)arg2;
- (void)_cancelScheduledLocalNotifications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_addScheduledLocalNotifications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelAllScheduledLocalNotifications;
- (void)cancelScheduledLocalNotifications:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)cancelScheduledLocalNotifications:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)snoozeScheduledLocalNotifications:(id)arg1;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)addScheduledLocalNotifications:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)addScheduledLocalNotifications:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)scheduledLocalNotificationsWithResult:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

