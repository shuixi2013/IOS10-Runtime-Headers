//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UILocalNotification;

@interface TimerManager : NSObject
{
    int _state;
    UILocalNotification *_notification;
    double _remainingTime;
}

+ (void)updateTimerShortcutItem;
+ (id)copyFetchScheduledNotification;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (void)setSoundID:(id)arg1 forNotification:(id)arg2;
+ (_Bool)discardOldVersion;
+ (_Bool)upgrade;
+ (_Bool)isTimerNotification:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)changeSound:(id)arg1;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)cancel;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)_reloadStateAndRefreshLocalNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadState;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double fireTime;
@property(readonly, nonatomic) int state;
- (void)setDefaultSound:(id)arg1;
@property(readonly, nonatomic) NSString *defaultSound;
@property(nonatomic) double defaultDuration;

@end

