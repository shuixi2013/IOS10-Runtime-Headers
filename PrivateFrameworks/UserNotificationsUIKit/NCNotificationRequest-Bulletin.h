//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@class BBBulletin, BBObserver;

@interface NCNotificationRequest (Bulletin)
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5;
- (void)setObserver:(id)arg1;
@property(readonly, nonatomic) BBObserver *observer;
- (void)setBulletin:(id)arg1;
@property(readonly, nonatomic) BBBulletin *bulletin;
@end

