//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUISettingDescription, SKUISettingDescriptionView, SKUISettingsGroupController, UIViewController;

@protocol SKUISettingsGroupControllerDelegate <NSObject>
- (SKUISettingDescriptionView *)settingsGroupController:(SKUISettingsGroupController *)arg1 viewForSettingDescription:(SKUISettingDescription *)arg2;
- (void)settingsGroupController:(SKUISettingsGroupController *)arg1 reloadSettingDescription:(SKUISettingDescription *)arg2;
- (UIViewController *)owningViewControllerForSettingsGroupController:(SKUISettingsGroupController *)arg1;
@end

