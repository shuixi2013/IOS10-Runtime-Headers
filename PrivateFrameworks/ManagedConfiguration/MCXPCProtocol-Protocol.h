//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol MCXPCProtocol <NSObject>
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)validateAppBundleIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupAssistantDidFinishCompletion:(void (^)(NSError *))arg1;
- (void)filteredMailAccountsWithSourceAccountManagement:(int)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(NSArray *)arg1 hostAppBundleID:(NSString *)arg2 accountIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
- (void)unstashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)stashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)unstashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)stashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeWebContentFilterUserBlacklistedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unstashUserBookmarksFromLabel:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)stashUserBookmarks:(NSArray *)arg1 withLabel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setUserBookmarks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)storeActivationRecord:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createActivationLockBypassCodeWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)cloudConfigurationStoreDetails:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)cloudConfigurationMachineInfoDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)rereadManagedAppAttributesWithCompletion:(void (^)(NSError *))arg1;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)profileDataStoredForPurpose:(int)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)storeProfileData:(NSData *)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeExpiredProfilesWithCompletion:(void (^)(NSError *))arg1;
- (void)managedAppIDsWithFlags:(int)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setUserInfo:(NSDictionary *)arg1 forClientUUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)recomputePerClientUserComplianceWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)notifyStartComplianceTimer:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeProvisioningProfileWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)installProvisioningProfileData:(NSData *)arg1 managingProfileIdentifer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)storeCertificateData:(NSData *)arg1 forIPCUIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)openSensitiveURL:(NSString *)arg1 unlock:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeValueSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeBoolSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setParametersForSettingsByType:(NSDictionary *)arg1 toSystem:(_Bool)arg2 user:(_Bool)arg3 passcode:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)migratePostMDMDataMigratorWithContext:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 forceAllowHostPairing:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)managedWiFiNetworkNamesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)removeOrphanedClientRestrictionsWithCompletion:(void (^)(NSError *))arg1;
- (void)clearPasscodeWithEscrowKeybagData:(NSData *)arg1 secret:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)changePasscode:(NSString *)arg1 oldPasscode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)applyRestrictionDictionary:(NSDictionary *)arg1 clientType:(NSString *)arg2 clientUUID:(NSString *)arg3 localizedClientDescription:(NSString *)arg4 localizedWarningMessage:(NSString *)arg5 completion:(void (^)(_Bool, _Bool, NSError *))arg6;
- (void)removeProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateProfileIdentifier:(NSString *)arg1 interactive:(_Bool)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)queueProfileDataForInstallation:(NSData *)arg1 originalFileName:(NSString *)arg2 originatingBundleID:(NSString *)arg3 transitionToUI:(_Bool)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (void)installProfileData:(NSData *)arg1 interactive:(_Bool)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)isProfileInstalledWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, _Bool))arg2;
- (void)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)mayShareToAirDropAndOriginatingAccountIsManaged:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)mayShareToMessagesAndOriginatingAccountIsManaged:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)notifyDeviceUnlockedWithCompletion:(void (^)(NSError *))arg1;
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)addBookmark:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addAllowedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAllowedURLStrings:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)allowedImportFromAppBundleIDs:(NSArray *)arg1 importingAppBundleID:(NSString *)arg2 importingIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)allowedOpenInAppBundleIDs:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 originatingIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)checkInWithCompletion:(void (^)(NSError *))arg1;
@end

