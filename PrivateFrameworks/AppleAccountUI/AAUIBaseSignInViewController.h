//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <AppleAccountUI/AAUIAccountCreationDelegate-Protocol.h>
#import <AppleAccountUI/AAUIAccountRepairRemoteUIDelegate-Protocol.h>
#import <AppleAccountUI/AAUICredentialRecoveryPresentationDelegate-Protocol.h>
#import <AppleAccountUI/AAUIGenericTermsRemoteUIDelegate-Protocol.h>

@class AAUIAccountCreationRemoteUI, AAUIAccountRepairRemoteUI, AAUICredentialRecoveryController, AAUIGenericTermsRemoteUI, ABMonogrammer, ACAccount, ACAccountType, NSMutableArray, NSString, PSSpecifier, RUILoader, UIImageView, UINavigationController;

@interface AAUIBaseSignInViewController : ACUIViewController <AAUIAccountCreationDelegate, AAUICredentialRecoveryPresentationDelegate, AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate>
{
    ACAccount *_account;
    ACAccountType *_appleAccountType;
    ACAccount *_appleAccount;
    _Bool _isPasswordDirty;
    _Bool _shouldHideBackButton;
    NSString *_recommendedUsername;
    _Bool _shouldHideCreateNewAccount;
    ABMonogrammer *_monogrammer;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createNewAccountButtonSpecifier;
    NSString *_initialTitle;
    AAUIAccountCreationRemoteUI *_remoteAccountCreationUI;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    AAUICredentialRecoveryController *_credentialRecoveryUIController;
    id _textFieldTextDidChangeObserver;
    RUILoader *_remoteUILoader;
    NSMutableArray *_remoteUIModels;
    UINavigationController *_modalRemoteViewController;
    CDUnknownBlockType _identityConsolidationCompletion;
    UIImageView *_silhouetteView;
    _Bool _isPresentedModally;
}

@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic, setter=setPresentedModally:) _Bool isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (void)_openWebBasedCredentialRecoveryFlow;
- (id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;
- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
- (id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)_showGenericTermsUIforAccount:(id)arg1;
- (void)_accountRepairDidFail;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1;
- (void)_attemptHSALoginForAccount:(id)arg1;
- (void)_updateAccountInformation:(id)arg1;
- (id)_learnMoreURLForErrorCode:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentWrongAccountStatusAlert;
- (void)_presentInvalidUsernameAlert;
- (void)_presentNoMailServiceWhileInMailAlert;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_handleAccountPromotionCompletionForAccount:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_promoteExistingAccountToPrimary:(id)arg1;
- (void)_saveAccountWithAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_saveAccountWithAllDataclassesEnabledIfPossible;
- (void)didCompleteSignIn;
- (void)_saveAccountAndComplete;
- (void)_didFinishAccountVerificationWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_handleAccountRegistrationCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_verifyAccount;
- (void)_handleAccountSetupCompletionWithAppleID:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
- (void)accountCreationWasCanceled;
- (void)accountCreationDidFailWithError:(id)arg1;
- (void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
- (void)_createNewAccountButtonTapped:(id)arg1;
- (id)_accountDescriptionFromEmailAddress:(id)arg1;
- (_Bool)_runningInMail;
- (void)returnPressedAtEnd;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameForSpecifier:(id)arg1;
- (void)_openiForgotLink:(id)arg1;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForSignInButton;
- (id)_specifiersForLoginForm;
- (id)specifiers;
- (void)_updateDoneButton;
- (_Bool)_shouldShowCancelDone;
- (void)didCancelSignIn;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_monogrammer;
- (id)_appleAccountType;
- (id)_displayedAccountType;
- (id)descriptionPlaceholder;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

