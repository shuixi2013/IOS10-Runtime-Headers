//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommunicationsSetupUI/IMSystemMonitorListener-Protocol.h>

@class IMAccount, IMServiceImpl, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimer;

@interface CNFRegController : NSObject <IMSystemMonitorListener>
{
    NSArray *_services;
    NSArray *_accounts;
    NSMutableDictionary *_accountFilterCache;
    CDUnknownBlockType _accountRegistrationBlock;
    CDUnknownBlockType _callerIdChangedBlock;
    CDUnknownBlockType _accountAddedBlock;
    CDUnknownBlockType _accountRemovedBlock;
    CDUnknownBlockType _aliasStatusChangedBlock;
    CDUnknownBlockType _aliasRemovedBlock;
    CDUnknownBlockType _aliasAddedBlock;
    CDUnknownBlockType _vettedAliasesChangedBlock;
    CDUnknownBlockType _profileChangedBlock;
    CDUnknownBlockType _profileStatusChangedBlock;
    CDUnknownBlockType _accountAuthorizationChangedBlock;
    CDUnknownBlockType _accountActivationChangedBlock;
    CDUnknownBlockType _willLaunchURLBlock;
    CDUnknownBlockType _resetBlock;
    CDUnknownBlockType _serviceDidBecomeUnsupportedBlock;
    long long _serviceType;
    NSTimer *_wifiAlertWatchTimer;
    long long _requiredWifiCount;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    _Bool _originalUsesBackgroundNetwork;
    NSString *_logName;
    unsigned long long _logIndent;
    long long _systemAccountType;
    IMAccount *_systemAccount;
    struct {
        unsigned int listeningForAccountChanges:1;
        unsigned int listeningForCallerIDChanges:1;
        unsigned int listeningForAccountActivation:1;
        unsigned int preventingIdleSleep:1;
        unsigned int expectingWiFiPicker:1;
        unsigned int showedWifiFirstRunAlert:1;
        unsigned int ignoringAccountChanges:1;
        unsigned int activatingAccounts:1;
    } _controllerFlags;
    NSDictionary *_cachedCallerIDMap;
}

+ (id)controllerForServiceType:(long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *cachedCallerIDMap; // @synthesize cachedCallerIDMap=_cachedCallerIDMap;
@property(copy, nonatomic) CDUnknownBlockType willLaunchURLBlock; // @synthesize willLaunchURLBlock=_willLaunchURLBlock;
@property(copy, nonatomic) CDUnknownBlockType accountActivationChangedBlock; // @synthesize accountActivationChangedBlock=_accountActivationChangedBlock;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(copy, nonatomic) CDUnknownBlockType accountAuthorizationChangedBlock; // @synthesize accountAuthorizationChangedBlock=_accountAuthorizationChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType profileStatusChangedBlock; // @synthesize profileStatusChangedBlock=_profileStatusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType profileChangedBlock; // @synthesize profileChangedBlock=_profileChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType serviceDidBecomeUnsupportedBlock; // @synthesize serviceDidBecomeUnsupportedBlock=_serviceDidBecomeUnsupportedBlock;
@property(copy, nonatomic) CDUnknownBlockType resetBlock; // @synthesize resetBlock=_resetBlock;
@property(copy, nonatomic) CDUnknownBlockType vettedAliasesChangedBlock; // @synthesize vettedAliasesChangedBlock=_vettedAliasesChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType aliasRemovedBlock; // @synthesize aliasRemovedBlock=_aliasRemovedBlock;
@property(copy, nonatomic) CDUnknownBlockType aliasAddedBlock; // @synthesize aliasAddedBlock=_aliasAddedBlock;
@property(copy, nonatomic) CDUnknownBlockType aliasStatusChangedBlock; // @synthesize aliasStatusChangedBlock=_aliasStatusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType callerIdChangedBlock; // @synthesize callerIdChangedBlock=_callerIdChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType accountRemovedBlock; // @synthesize accountRemovedBlock=_accountRemovedBlock;
@property(copy, nonatomic) CDUnknownBlockType accountAddedBlock; // @synthesize accountAddedBlock=_accountAddedBlock;
@property(copy, nonatomic) CDUnknownBlockType accountRegistrationBlock; // @synthesize accountRegistrationBlock=_accountRegistrationBlock;
- (void).cxx_destruct;
- (void)_decrementLogIndent;
- (void)_incrementLogIndent;
- (id)_logSpace;
- (id)_logName;
- (_Bool)setDisplayAlias:(id)arg1;
- (id)displayAlias;
- (id)displayAccount;
- (void)_stopListeningForCallerIDChanges;
- (void)_startListeningForCallerIDChanges;
- (void)nukeAllCallerIDSettings;
- (void)_handleCallerIDChanged;
- (void)_handleCallerIDChangedForResume:(id)arg1;
- (void)_nukeCallerIDCache;
- (void)_postCallerIDChanged;
- (void)setCellularDataEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)cellularDataEnabled;
- (void)deviceCapabilityChanged:(id)arg1;
- (void)connect;
- (void)connect:(_Bool)arg1;
- (_Bool)isConnected;
@property(readonly, nonatomic, getter=isServiceSupported) _Bool serviceSupported;
@property(nonatomic, getter=isServiceEnabled) _Bool serviceEnabled;
- (void)removeAllHandlers;
- (void)vettedAliasesChanged:(id)arg1;
- (void)aliasesChanged:(id)arg1;
- (void)handleAliasRemoved:(id)arg1;
- (void)handleAliasAdded:(id)arg1;
- (void)aliasStatusChanged:(id)arg1;
- (void)accountActivationStateChanged:(id)arg1;
- (void)authorizationCredentialsChanged:(id)arg1;
- (void)profileValidationStateChanged:(id)arg1;
- (void)profileChanged:(id)arg1;
- (void)callerIdChanged:(id)arg1;
- (void)accountRegistrationChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
- (_Bool)shouldHandleAccountNotification:(id)arg1;
- (void)stopListeningForAccountChanges;
- (void)startListeningForAccountChanges;
- (_Bool)shouldShowAlertForError:(id)arg1;
- (_Bool)hasFailedLoginDueToBadLogin;
- (_Bool)hasFailedLogin;
- (_Bool)accountIsAuthenticating;
- (unsigned long long)accountState;
- (unsigned long long)accountStateForAccount:(id)arg1;
- (unsigned long long)accountState:(id)arg1;
- (_Bool)_accountHasValidatedLocale:(id)arg1;
- (_Bool)_accountIsAuthenticated:(id)arg1;
- (id)aliasSummaryString:(_Bool *)arg1;
- (_Bool)unvalidateAlias:(id)arg1;
- (_Bool)validateAlias:(id)arg1;
- (_Bool)setAliases:(id)arg1 onAccount:(id)arg2;
- (_Bool)canRemoveAlias:(id)arg1;
- (_Bool)removeAlias:(id)arg1 fromAccount:(id)arg2;
- (_Bool)addAlias:(id)arg1;
- (_Bool)addAlias:(id)arg1 toAccount:(id)arg2;
- (_Bool)_addAliases:(id)arg1 toAccount:(id)arg2 validate:(_Bool)arg3;
- (id)aliasNamed:(id)arg1;
- (_Bool)hasAlias:(id)arg1;
- (_Bool)hasAliasNamed:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *emailAliases;
@property(readonly, retain, nonatomic) NSArray *useableAliases;
@property(readonly, retain, nonatomic) NSArray *allAvailableAliases;
@property(readonly, retain, nonatomic) NSArray *vettedAliases;
@property(readonly, retain, nonatomic) NSArray *aliases;
- (id)useableAliasesForAccounts:(id)arg1;
- (id)allAvailableAliasesForAccounts:(id)arg1;
- (id)vettedAliasesForAccounts:(id)arg1;
- (id)aliasesForAccounts:(id)arg1;
- (CDUnknownBlockType)_aliasComparator;
- (id)_aliasesPassingTest:(CDUnknownBlockType)arg1;
- (id)_aliasesFromAccounts:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_allAvailableAliasesForAccount:(id)arg1;
- (id)_vettedAliasesForAccount:(id)arg1;
- (id)_aliasesForAccount:(id)arg1;
- (_Bool)_shouldFilterOutAlias:(id)arg1 onAccount:(id)arg2;
- (id)localPhoneNumberSentinelAlias;
- (_Bool)_aliasIsDevicePhoneNumber:(id)arg1;
- (id)accountForAlias:(id)arg1;
- (id)_accountForAlias:(id)arg1 accounts:(id)arg2;
- (void)deactivateAccounts;
- (void)activateAccounts;
- (void)enablePhoneNumberRegistration;
- (void)activateAccountsExcludingAccounts:(id)arg1;
- (void)clearAllCaches;
- (void)_clearAccountCache;
- (id)loginForAccount:(id)arg1;
- (void)signoutAccount:(id)arg1;
- (void)_signOutAccount:(id)arg1 delete:(_Bool)arg2;
- (id)beginAccountSetupWithAccount:(id)arg1;
- (id)beginAccountSetupWithLogin:(id)arg1 password:(id)arg2 foundExisting:(_Bool *)arg3;
- (id)beginAccountSetupWithLogin:(id)arg1 authID:(id)arg2 authToken:(id)arg3 regionInfo:(id)arg4 foundExisting:(_Bool *)arg5;
- (id)_createAccountWithLogin:(id)arg1 foundExisting:(_Bool *)arg2;
- (_Bool)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg1;
- (void)_purgeExcessAccounts;
- (id)accountWithLogin:(id)arg1;
- (id)firstAccount;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (void)systemApplicationDidEnterBackground;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSSet *serviceNames; // @dynamic serviceNames;
@property(readonly, retain, nonatomic) IMServiceImpl *firstService; // @dynamic firstService;
- (id)initWithServiceType:(long long)arg1;
- (id)init;
- (void)showSetupFaceTimeOverCellularAlertWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *failedAccounts;
- (id)activeAccounts;
@property(readonly, copy, nonatomic) NSArray *appleIDAccounts;
@property(readonly, copy, nonatomic) NSArray *phoneAccounts;
- (id)_predicatesWithFilter:(long long)arg1;
- (id)_accountsPassingTests:(id)arg1 message:(id)arg2;
- (id)accountsWithFilter:(long long)arg1;
- (id)accountsWithFilter:(long long)arg1 message:(id)arg2;
- (void)_clearFilterCache;
- (CDUnknownBlockType)__filter_operationalPredicate;
- (CDUnknownBlockType)__filter_signedInPredicate;
- (CDUnknownBlockType)__filter_validatedProfilePredicate;
- (CDUnknownBlockType)__filter_signInCompletePredicate;
- (CDUnknownBlockType)__filter_validatedAliasPredicate;
- (CDUnknownBlockType)__filter_failedAccountsPredicate;
- (CDUnknownBlockType)__filter_inactiveAccountsPredicate;
- (CDUnknownBlockType)__filter_activeAccountsPredicate;
- (CDUnknownBlockType)__filter_phoneAccountPredicate;
- (CDUnknownBlockType)__filter_appleIDAccountPredicate;
- (id)guessedDisplayAlias;
- (id)_guessedDisplayAliasFromAccounts:(id)arg1;
- (_Bool)_isValidCallerIDAlias:(id)arg1 forAccount:(id)arg2;
- (id)guessedAlias;
- (id)guessedAccountName;
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (void)_stopWiFiAlertWatchTimer;
- (void)_startWiFiAlertWatchTimer;
- (void)_wifiAlertWatchTimerFired:(id)arg1;
- (void)resetNetworkFirstRunAlert;
- (void)showNetworkFirstRunAlert:(id)arg1;
- (void)showNetworkAlertIfNecessary:(id)arg1;
- (void)showNetworkAlert:(id)arg1;
- (void)_showNetworkAlertWithMessage:(id)arg1 andViewController:(id)arg2;
- (id)networkSettingsURLAllowingCellular:(_Bool)arg1;
- (_Bool)deviceCanTakeNetworkAction;
- (_Bool)deviceHasNetworkEnabled;
- (_Bool)deviceHasSaneNetworkConnection;
- (void)openURL:(id)arg1;
- (void)refreshSystemAccount;
@property(readonly, nonatomic) long long systemAccountType;
@property(readonly, retain, nonatomic) IMAccount *systemAccount;
- (_Bool)hasSystemAccount;
- (void)__updateSystemAccount;

@end

