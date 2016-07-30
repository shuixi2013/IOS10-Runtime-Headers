//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/PSMagnifyControllerDelegate-Protocol.h>

@class CBClient, NSDateFormatter;

@interface PSUIDisplayController : PSListController <PSMagnifyControllerDelegate>
{
    CBClient *_brightnessClient;
    NSDateFormatter *_timeFormatter;
}

- (void).cxx_destruct;
- (void)showAlertToDisableAccessibilityFilters:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)getAutoWhiteBalanceEnabled:(id)arg1;
- (id)localizedTimeForTime:(CDStruct_1ef3fb1f)arg1;
- (id)blueLightSchedule:(id)arg1;
- (void)handleBlueLightStatusChanged:(CDStruct_f4084295 *)arg1;
- (void)reloadBlueLightSpecifiers;
- (void)brightnessChangedExternally;
- (void)handleBrightnessChangedNotification:(id)arg1;
- (void)setBacklightValue:(id)arg1 specifier:(id)arg2;
- (id)backlightValue:(id)arg1;
- (void)_cleanupTransactionRef;
- (id)boldTextEnabledForSpecifier:(id)arg1;
- (void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2;
- (_Bool)shouldShowRaiseToWake;
- (id)controllerForSpecifier:(id)arg1;
- (void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2;
- (void)presentModalMagnifyController;
- (id)localizedMagnifyModeName;
- (id)specifiers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

