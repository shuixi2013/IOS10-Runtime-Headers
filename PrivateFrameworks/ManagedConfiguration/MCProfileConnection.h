//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ManagedConfiguration/MCProfileConnectionXPCProtocol-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection;
@protocol MCInteractionDelegate, OS_dispatch_queue;

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol>
{
    struct __CFBag *_observers;
    id <MCInteractionDelegate> _interactionDelegate;
    NSDictionary *_preflightResponse;
    NSData *_originalProfileData;
    NSObject<OS_dispatch_queue> *_notificationSyncQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
    NSObject<OS_dispatch_queue> *_publicXPCConnectionSyncQueue;
    NSMutableArray *_notificationTokens;
    CDUnknownBlockType userInputReplyBlock;
    CDUnknownBlockType passcodeReplyBlock;
    CDUnknownBlockType showWarningsReplyBlock;
    NSXPCConnection *_publicXPCConnection;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedConnection;
+ (id)profileInstallationErrorWithUnderlyingError:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (void)_internalDefaultsDidChange;
- (void)_defaultsDidChange;
- (void)_appWhitelistDidChange:(id)arg1;
- (void)_profileListDidChange;
- (void)_passcodePolicyDidChange;
- (void)_passcodeDidChange;
- (void)_restrictionDidChange;
- (void)_applyToObservers:(CDUnknownBlockType)arg1;
- (void)checkInAsynchronously;
- (void)checkIn;
- (void)dealloc;
- (id)_init;
- (void)_queueCreateAndResumePublicXPCConnection;
- (void)_createAndResumePublicXPCConnection;
- (void)_queueCreateAndResumeXPCConnection;
- (void)_createAndResumeXPCConnection;
@property(readonly, nonatomic) NSXPCConnection *publicXPCConnection; // @synthesize publicXPCConnection=_publicXPCConnection;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (void)setPasscodeWasSetInBackup:(_Bool)arg1;
- (_Bool)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outError:(id *)arg6;
- (_Bool)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(_Bool)arg2;
- (_Bool)validatePasscode:(id)arg1;
- (id)passcodeExpiryDate;
- (_Bool)isPasscodeRequiredByPolicy;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id *)arg3;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id *)arg2;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id *)arg2;
- (id)profileFromProfileData:(id)arg1 outError:(id *)arg2;
- (void)setDelegate:(id)arg1;
- (id)chaperoneOrganization;
- (_Bool)isChaperoned;
- (void)respondToCurrentPasscodeRequestContinue:(_Bool)arg1 passcode:(id)arg2;
- (void)respondToWarningsContinueInstallation:(_Bool)arg1;
- (void)__checkForProfiledCrash;
- (void)submitUserInputResponses:(id)arg1;
- (void)cancelUserInputResponses;
- (void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2;
- (_Bool)mustInstallProfileNonInteractively:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;
- (void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3;
- (void)installProfileData:(id)arg1 interactionDelegate:(id)arg2;
- (void)_detectProfiledCrashes;
- (_Bool)removeProvisioningProfileWithUUID:(id)arg1 outError:(id *)arg2;
- (_Bool)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id *)arg3;
- (_Bool)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id *)arg2;
- (_Bool)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1;
- (_Bool)transitionToProfileAcceptanceUI;
- (_Bool)transitionToProfileOverviewUI;
- (_Bool)_openSensitiveURLString:(id)arg1 unlock:(_Bool)arg2;
- (id)acceptedFileExtensions;
- (id)acceptedMIMETypes;
- (id)updateProfileWithIdentifier:(id)arg1 outError:(id *)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProfileAsyncWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1;
- (id)installProfileData:(id)arg1 options:(id)arg2 outError:(id *)arg3;
- (id)installProfileData:(id)arg1 outError:(id *)arg2;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id *)arg4;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id *)arg3;
- (id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 outError:(id *)arg5;
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;
- (id)popProfileDataFromHeadOfInstallationQueue;
- (id)installedUserProfileDataWithIdentifier:(id)arg1;
- (id)installedSystemProfileDataWithIdentifier:(id)arg1;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id *)arg1;
- (id)installedProfilesWithFilterFlags:(int)arg1;
- (id)installedProfileIdentifiersWithFilterFlags:(int)arg1;
- (id)installedProfilesInstalledBy:(id)arg1;
- (id)installedProfileIdentifiersInstalledBy:(id)arg1;
- (id)installedProfileIdentifiers;
- (id)installedMDMProfileIdentifier;
- (id)effectiveWhitelistedAppsAndOptions;
- (void)removeOrphanedClientRestrictions;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (id)userInfoForClientUUID:(id)arg1;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(_Bool)arg7 outRestrictionChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outError:(id *)arg10;
- (_Bool)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(_Bool *)arg6 outEffectiveSettingsChanged:(_Bool *)arg7 outError:(id *)arg8;
- (id)objectRestrictionForFeature:(id)arg1;
- (id)valueRestrictionForFeature:(id)arg1;
- (int)boolRestrictionForFeature:(id)arg1;
- (id)effectiveRestrictions;
- (id)userValueForUnionSetting:(id)arg1;
- (id)userValueForIntersectionSetting:(id)arg1;
- (id)userValueForSetting:(id)arg1;
- (int)userBoolValueForSetting:(id)arg1;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAllSettingsToDefaults;
- (id)effectiveUserSettings;
- (void)removeValueSetting:(id)arg1;
- (void)removeBoolSetting:(id)arg1;
- (_Bool)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)isValueSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (_Bool)areSettingsLockedDownByRestrictions:(id)arg1;
- (id)_settingsLockedDownByRestrictions:(id)arg1;
- (id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1;
- (_Bool)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id *)arg2 outExchangeName:(id *)arg3 outExchangeCount:(long long *)arg4 outProfileName:(id *)arg5 outProfileCount:(long long *)arg6;
- (_Bool)isSettingLockedDownByRestrictions:(id)arg1;
- (id)effectiveValuesForUnionSetting:(id)arg1;
- (id)effectiveValuesForIntersectionSetting:(id)arg1;
- (id)effectiveValueForSetting:(id)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1 outAsk:(_Bool *)arg2;
- (int)effectiveBoolValueForSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForIntersectionSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)defaultParametersForUnionSetting:(id)arg1;
- (id)defaultParametersForIntersectionSetting:(id)arg1;
- (id)defaultParametersForValueSetting:(id)arg1;
- (id)defaultParametersForBoolSetting:(id)arg1;
- (id)defaultValuesForUnionSetting:(id)arg1;
- (id)defaultValuesForIntersectionSetting:(id)arg1;
- (id)defaultValueForSetting:(id)arg1;
- (int)defaultBoolValueForSetting:(id)arg1;
- (id)parametersForUnionSetting:(id)arg1;
- (id)parametersForIntersectionSetting:(id)arg1;
- (id)parametersForValueSetting:(id)arg1;
- (id)parametersForBoolSetting:(id)arg1;
- (id)userSettingsForCurrentUser;
- (id)userSettingsForSystem;
- (id)userSettings;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5;
- (void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5 passcode:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2;
- (void)setParameters:(id)arg1 forValueSetting:(id)arg2;
- (void)setParameters:(id)arg1 forBoolSetting:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(_Bool)arg2 user:(_Bool)arg3 passcode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(_Bool)arg2 user:(_Bool)arg3 passcode:(id)arg4;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(_Bool)arg2 user:(_Bool)arg3;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1;
- (id)localizedDescriptionOfDefaultNewPasscodeConstraints;
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)newPasscodeEntryScreenType;
- (int)unlockScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)unlockScreenType;
- (id)passcodeExpiryDateOutError:(id *)arg1;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (void)notifyClientsToRecomputeCompliance;
- (void)recomputeUserComplianceWarning;
- (void)recomputeUserComplianceWarningSynchronously;
- (void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id *)arg2 outLocalizedMessage:(id *)arg3;
- (int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id *)arg3 outLocalizedMessage:(id *)arg4;
- (_Bool)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)arg1;
- (_Bool)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)arg1;
- (_Bool)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id *)arg2;
- (_Bool)isContentProtectionInEffect;
- (_Bool)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;
- (_Bool)isPasscodeModificationAllowed;
- (_Bool)isPasscodeRequiredByProfiles;
- (_Bool)isPasscodeRequired;
- (_Bool)isPasscodeSet;
- (void)lockDevice;
- (void)lockDeviceImmediately:(_Bool)arg1;
- (_Bool)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(_Bool *)arg1;
- (void)setConferenceRoomDisplaySettingsUIAllowed:(_Bool)arg1 ask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isConferenceRoomDisplayModeEnabledOutAsk:(_Bool *)arg1;
- (void)setConferenceRoomDisplayModeEnabled:(_Bool)arg1 ask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isExplicitContentAllowedOutAsk:(_Bool *)arg1;
- (void)setExplicitContentAllowed:(_Bool)arg1 ask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isMediaPurchaseAllowedOutAsk:(_Bool *)arg1;
- (void)setMediaPurchaseAllowed:(_Bool)arg1 ask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isAirPlaySettingsUIAllowedOutAsk:(_Bool *)arg1;
- (void)setAirPlaySettingsUIAllowed:(_Bool)arg1 ask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldDestroyOldKeybag;
- (void)setFingerprintUnlockAllowed:(_Bool)arg1 passcode:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)gracePeriod;
- (void)setGracePeriod:(unsigned long long)arg1 passcode:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isMUAllowed;
- (void)flush;
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activationLockBypassHash;
- (void)deleteActivationLockBypassKey;
- (id)activationLockBypassKey;
- (_Bool)isSpotlightInternetResultsAllowed;
- (id)appsRestrictedFromCloudSync;
- (_Bool)isCloudSyncAllowed:(id)arg1;
- (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
- (_Bool)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
- (id)deviceAssetTag;
- (id)deviceLockScreenFootnote;
- (id)deviceIfLostMessage;
- (id)_sharedDeviceConfiguration;
- (id)restrictionEnforcedNotificationSettings;
- (id)restrictionEnforcedNotificationSettingsForBundleID:(id)arg1;
- (_Bool)isNotificationsModificationAllowedForBundleID:(id)arg1;
- (_Bool)isTodayViewModificationAllowed;
- (_Bool)isTodayViewAllowed;
- (void)setFeatureM1Allowed:(_Bool)arg1;
- (void)setMultitaskingAllowed:(_Bool)arg1;
- (_Bool)isFeatureM1Allowed;
- (_Bool)isMultitaskingAllowed;
- (_Bool)isNewsTodayAllowed;
- (_Bool)isNewsAllowed;
- (void)setSpellCheckAllowed:(_Bool)arg1;
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1;
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1;
- (void)setAutoCorrectionAllowed:(_Bool)arg1;
- (_Bool)isSpellCheckAllowed;
- (_Bool)isKeyboardShortcutsAllowed;
- (_Bool)isPredictiveKeyboardAllowed;
- (_Bool)isAutoCorrectionAllowed;
- (_Bool)isMusicArtistActivityAllowed;
- (_Bool)isMusicServiceAllowed;
- (_Bool)isScreenRecordingAllowed;
- (_Bool)isScreenShotAllowed;
- (_Bool)isWallpaperModificationAllowed;
- (_Bool)isDeviceNameModificationAllowed;
- (_Bool)isBluetoothModificationAllowed;
- (_Bool)isInAppPaymentAllowed;
- (_Bool)isFingerprintForContactlessPaymentAllowed;
- (_Bool)isContactlessPaymentAllowed;
- (_Bool)isUninstalledAppNearMeSuggestionsAllowed;
- (_Bool)isInstalledAppNearMeSuggestionsAllowed;
- (_Bool)isiCloudDriveAllowed;
- (_Bool)isHomeAllowed;
- (_Bool)isFindMyFriendsAllowed;
- (_Bool)isFindMyDeviceAllowed;
- (void)setFindMyCarAllowed:(_Bool)arg1;
- (_Bool)isFindMyCarAllowed;
- (_Bool)isPodcastsAllowed;
- (_Bool)hasAppAnalyticsAllowedBeenSet;
- (_Bool)isAppAnalyticsAllowed;
- (_Bool)isDiagnosticSubmissionModificationAllowed;
- (_Bool)hasDiagnosticSubmissionAllowedBeenSet;
- (_Bool)isDiagnosticSubmissionAllowed;
- (_Bool)isEnterpriseBookMetadataSyncAllowed;
- (_Bool)isEnterpriseBookBackupAllowed;
- (_Bool)isActivityContinuationAllowed;
- (_Bool)isGeotagSharingAllowed;
- (_Bool)isAirPlayIncomingRequestsPairingPasswordRequired;
- (_Bool)isAirPlayOutgoingRequestsPairingPasswordRequired;
- (_Bool)isFingerprintUnlockAllowed;
- (_Bool)isFingerprintModificationAllowed;
- (_Bool)isAssistantUserGeneratedContentAllowed;
- (_Bool)isActivationLockAllowed;
- (_Bool)isControlCenterAllowedInApps;
- (_Bool)isLockScreenControlCenterAllowed;
- (_Bool)isLockScreenTodayViewAllowed;
- (_Bool)isLockScreenNotificationsViewAllowed;
- (_Bool)isiTunesAllowed;
- (_Bool)isAirDropAllowed;
- (_Bool)isAppRatingLimitInEffect;
- (_Bool)isAppRemovalAllowed;
- (_Bool)isOnDeviceAppInstallationAllowed;
- (_Bool)isUIAppInstallationAllowed;
- (_Bool)isAppInstallationAllowed;
- (_Bool)isLockScreenWiFiModificationAllowed;
- (_Bool)isAdTrackingLimited;
- (_Bool)isWebContentFilteringInEffect;
- (_Bool)isWebTextDefineAllowed;
- (_Bool)isAppCellularDataModificationAllowed;
- (_Bool)isAutomaticAppUpdatesModificationAllowed;
- (void)setAutomaticAppUpdatesAllowed:(_Bool)arg1;
- (_Bool)isAutomaticAppUpdatesAllowed;
- (_Bool)isAutomaticAppDownloadsAllowed;
- (_Bool)isOTAPKIUpdatesAllowed;
- (_Bool)isVehicleUIAllowed;
- (_Bool)isCloudKeychainSyncAllowed;
- (void)migratePostDataMigrator;
- (void)processProfilesPostMigrate;
- (void)processProfilesPostRestore;
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setTrustedCodeSigningIdentities:(id)arg1;
- (id)trustedCodeSigningIdentities;
- (_Bool)isSafariPasswordAutoFillAllowedForURL:(id)arg1;
- (id)managedMedia;
- (id)managedAppIDs;
- (void)migratePostMDMDataMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 forceAllowHostPairing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setManagedEmailDomains:(id)arg1;
- (id)managedEmailDomains;
- (id)managedAppIDsWithFlags:(int)arg1;
- (id)doNotDocumentSyncAppIDs;
- (id)doNotBackupAppIDs;
- (id)managedSystemConfigurationServiceIDs;
- (void)shutDown;
- (id)managedWiFiNetworkNames;
- (id)_localizedRestricitionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5;
- (id)activationLockBypassKeyCreateNewIfNeeded:(_Bool)arg1;
- (void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidRequestUserInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)doMCICDidUpdateStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rereadManagedAppAttributes;
- (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
- (void)removeExpiredProfiles;
- (void)performBootTimeChecks;
- (void)notifyKeybagUpdated;
- (void)notifyDeviceUnlocked;
- (void)checkCarrierProfileForceInstallation:(_Bool)arg1;
- (void)checkCarrierProfile;
- (void)checkInIfNeeded;
- (void)unstashWebContentFilterAutoPermittedURLStrings;
- (void)stashWebContentFilterAutoPermittedURLStrings;
- (void)unstashWebContentFilterUserBlacklistedURLStrings;
- (void)stashWebContentFilterUserBlacklistedURLStrings;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1;
- (void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1;
- (id)webContentFilterEffectiveBlacklistedURLStrings;
- (id)webContentFilterUserBlacklistedURLStrings;
- (void)addUserBookmark:(id)arg1;
- (void)addWebContentFilterAutoPermittedURLString:(id)arg1;
- (void)setWebContentFilterAutoPermittedURLStrings:(id)arg1;
- (_Bool)isWebFilterUIActive;
- (id)defaultUserBookmarks;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (id)userBookmarks;
- (void)setUserBookmarks:(id)arg1;
- (void)lockdownDidReceiveActivationRecord:(id)arg1;
- (int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2;
- (id)autonomousSingleAppModePermittedBundleIDs;
- (void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(_Bool)arg1;
- (_Bool)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
- (_Bool)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
- (void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1;
- (void)parentalControlsWhitelistedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)parentalControlsWhitelistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (_Bool)mayEnterPasscodeToAccessNonWhitelistedApps;
- (_Bool)isPasscodeRequiredToAccessWhitelistedApps;
- (_Bool)isInSingleAppMode;
- (void)restrictionEnforcedWhitelistedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restrictionEnforcedWhitelistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)restrictionEnforcedWhitelistedAppBundleIDs;
- (void)effectiveWhitelistedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)effectiveWhitelistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)effectiveWhitelistedAppBundleIDs;
- (int)appWhitelistState;
- (void)setParentalControlsBlacklistedAppBundleIDs:(id)arg1;
- (void)parentalControlsBlacklistedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)parentalControlsBlacklistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)parentalControlsBlacklistedAppBundleIDs;
- (void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 includeWatchBundleIDs:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restrictionEnforcedBlacklistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps;
- (id)restrictionEnforcedBlacklistedAppBundleIDs;
- (void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 includeWatchBundleIDs:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)effectiveBlacklistedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)effectiveBlacklistedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps;
- (id)effectiveBlacklistedAppBundleIDs;
- (void)removedSystemAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removedSystemAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)removedSystemAppBundleIDs;
- (void)restrictedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 includeWatchBundleIDs:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restrictedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restrictedAppBundleIDsIncludingWatchBundleIDs:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restrictedAppBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)restrictedAppBundleIDsExcludingRemovedSystemApps;
- (id)restrictedAppBundleIDs;
- (id)restrictionEnforcedHomeScreenLayout;
- (id)knownAirPrintIPPURLStrings;
- (_Bool)isTeslaCloudConfigurationAvailable;
- (id)deviceDepartmentName;
- (id)deviceOrganizationName;
- (int)userMode;
- (_Bool)isEphemeralMultiUser;
- (_Bool)isSupervised;
- (void)setupAssistantDidFinish;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1;
- (_Bool)shouldInstallStoredProfileForPurpose:(int)arg1;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3;
- (void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)profileDataStoredForPurpose:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowSetupAssistant;
- (_Bool)shouldShowCloudConfigurationUI;
- (_Bool)shouldSkipSetupPanes;
- (_Bool)activationRecordIndicatesCloudConfigurationIsAvailable;
- (void)storeCloudConfigurationDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeCloudConfigurationDetails:(id)arg1;
- (void)cloudConfigurationUIDidCompleteWasApplied:(_Bool)arg1;
- (_Bool)isAwaitingDeviceConfigured;
- (_Bool)wasTeslaCloudConfigurationApplied;
- (_Bool)wasCloudConfigurationApplied;
- (void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)retrieveCloudConfigurationDetailsCompletionBlock:(CDUnknownBlockType)arg1;
- (id)cloudConfigurationDetails;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (_Bool)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(_Bool *)arg3 outAllowUnmanagedAccounts:(_Bool *)arg4;
- (id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)canSendMail:(id)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)isAppManaged:(id)arg1;
- (id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(_Bool)arg3;
- (id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(_Bool)arg3;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;
- (_Bool)mayShareToAirDropOriginatingAccountIsManaged:(_Bool)arg1;
- (_Bool)mayShareToMessagesOriginatingAccountIsManaged:(_Bool)arg1;
- (_Bool)isURLManaged:(id)arg1;
- (_Bool)mayOpenFromManagedToUnmanaged;
- (_Bool)mayOpenFromUnmanagedToManaged;
- (_Bool)isAirDropUnmanagedForced;
- (_Bool)isOpenInRestrictionInEffect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

