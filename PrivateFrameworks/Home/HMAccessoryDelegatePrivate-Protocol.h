//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HMAccessoryDelegate-Protocol.h>

@class HMAccessory, HMService;

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

