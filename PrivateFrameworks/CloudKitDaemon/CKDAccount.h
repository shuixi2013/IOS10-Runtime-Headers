//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    _Bool _isUnitTestingAccount;
    _Bool _accountWantsPushRegistration;
    _Bool _isAnonymousAccount;
    _Bool _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
}

@property(nonatomic) _Bool haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(nonatomic) _Bool isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(retain, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property(nonatomic) _Bool accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) _Bool isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
- (void).cxx_destruct;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)enabledKeyboards;
- (id)regionCode;
- (id)languageCode;
- (_Bool)shouldFailAllTasks;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renewAuthTokenWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)deviceName;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isDataclassEnabled:(id)arg1;
- (id)hardwareID;
@property(readonly, nonatomic) _Bool cloudPhotosIsEnabled;
@property(readonly, nonatomic) _Bool cloudKitIsEnabled;
@property(readonly, nonatomic) _Bool canAccessAccount;
@property(readonly, nonatomic) _Bool iCloudDriveAllowsCellularAccess;
- (id)iCloudAuthToken;
- (id)cloudKitAuthToken;
- (id)containerScopedUserID;
- (id)dsid;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)serverPreferredPushEnvironment;
- (id)trafficContainerIdentifier;
- (id)applicationBundle;
- (id)bundleID;
- (id)containerID;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) _Bool isFakeAccount;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 serverType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchConfigurationUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)config;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)_initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

