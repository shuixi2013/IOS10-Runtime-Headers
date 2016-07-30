//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <CommunicationsSetupUI/CNFRegAccountAuthorizationDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNFRegChangeAccountPasswordDelegate-Protocol.h>
#import <CommunicationsSetupUI/IMSystemMonitorListener-Protocol.h>

@class CNFRegController, NSString;

@interface CNFRegListController : PSListController <CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener>
{
    CDUnknownBlockType _appearBlock;
    _Bool _appeared;
    _Bool _showingChildController;
    _Bool _shouldRerootPreferences;
    CNFRegController *_regController;
}

@property(readonly, nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) _Bool shouldRerootPreferences; // @synthesize shouldRerootPreferences=_shouldRerootPreferences;
@property(nonatomic) _Bool showingChildController; // @synthesize showingChildController=_showingChildController;
@property(copy, nonatomic) CDUnknownBlockType appearBlock; // @synthesize appearBlock=_appearBlock;
- (void).cxx_destruct;
- (void)removeAllHandlers;
- (void)_setupEventHandlers;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(_Bool)arg3;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(_Bool)arg3;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(_Bool)arg2;
- (id)_existingLabelForSection:(long long)arg1 header:(_Bool)arg2;
- (id)_existingLabelForSpecifier:(id)arg1 header:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)loadView;
@property(readonly, nonatomic) long long currentAppearanceStyle; // @dynamic currentAppearanceStyle;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;
- (id)logName;
- (_Bool)wantsWiFiChooser;
- (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;
- (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (_Bool)_handleURLDictionary:(id)arg1;
- (void)handleURL:(id)arg1;
- (_Bool)_showWiFiAlertIfNecessary;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillResignActive;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)applicationDidResume;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_performAppearBlock;
- (void)_updateTitle;
- (id)customTitle;
- (id)specifierList;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithParentController:(id)arg1;
- (id)initWithRegController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

