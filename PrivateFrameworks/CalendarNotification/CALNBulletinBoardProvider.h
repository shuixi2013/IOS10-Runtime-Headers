//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBDataProviderConnection, CALNRemoteEventProvider, CALNRemoteReminderProvider, EKTravelEngine, _EKAlarmEngine, _EKNotificationMonitor;
@protocol OS_dispatch_queue;

@interface CALNBulletinBoardProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_bulletinQueue;
    NSObject<OS_dispatch_queue> *_notificationMonitorQueue;
    BBDataProviderConnection *_bbConnection;
    CALNRemoteEventProvider *_eventsProvider;
    CALNRemoteReminderProvider *_remindersProvider;
    _EKAlarmEngine *_alarmEngine;
    EKTravelEngine *_travelEngine;
    _EKNotificationMonitor *_notificationMonitor;
}

+ (id)_bbProviderDarwinNotifications;
+ (id)requestedDarwinNotifications;
+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)databaseChanged;
- (void)_notificationsChanged:(id)arg1;
- (void)_notificationCountChanged:(id)arg1;
- (void)_unalertedNotificationsReceived:(id)arg1;
- (void)_alarmsDidFire:(id)arg1;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)registerDataProviders;
- (void)startNotificationMonitor;
- (void)startTravelEngine;
- (void)startAlarmEngine;
- (void)handleDarwinNotification:(id)arg1;
- (void)registerForNotifications;
- (void)dealloc;
- (id)init;

@end

