//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class ACAccount, PSSpecifier, RemoteUIController, UIProgressHUD;

@interface FMDUIFMIPiCloudSettingsViewController : PSListController
{
    _Bool _firstTimeSetup;
    _Bool _togglingFMIPSwitch;
    _Bool _activityInProgress;
    ACAccount *_account;
    PSSpecifier *_fmipSpecifier;
    PSSpecifier *_sendLastLocationSpecifier;
    RemoteUIController *_ruiController;
    UIProgressHUD *_hud;
}

@property(nonatomic) _Bool activityInProgress; // @synthesize activityInProgress=_activityInProgress;
@property(retain, nonatomic) UIProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) RemoteUIController *ruiController; // @synthesize ruiController=_ruiController;
@property(retain, nonatomic) PSSpecifier *sendLastLocationSpecifier; // @synthesize sendLastLocationSpecifier=_sendLastLocationSpecifier;
@property(nonatomic) _Bool togglingFMIPSwitch; // @synthesize togglingFMIPSwitch=_togglingFMIPSwitch;
@property(retain, nonatomic) PSSpecifier *fmipSpecifier; // @synthesize fmipSpecifier=_fmipSpecifier;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool firstTimeSetup; // @synthesize firstTimeSetup=_firstTimeSetup;
- (void).cxx_destruct;
- (_Bool)isShowingActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (void)hideActivityInProgressUI;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)_clientInfoHeader;
- (id)_userAgentHeader;
- (void)_fmipSettingsCacheDidUpdate:(id)arg1;
- (void)_disableFMIP;
- (void)_enableFMIP;
- (void)_reloadSpecifiersOnMainQueue;
- (id)_sendLastLocationSwitchOnForSpecifier:(id)arg1;
- (void)_setSendLastLocationSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (id)_fmipSwitchOnForSpecifier:(id)arg1;
- (void)_setFMIPSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_showFMIPPrivacyPage;
- (id)_groupSpecifierForSendLastLocation;
- (id)_specifierForSendLastLocation;
- (id)_groupSpecifierForFMIP;
- (id)_specifierForFMIP;
- (id)specifiers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

