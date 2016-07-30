//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SUScriptModalDialogDelegate-Protocol.h>
#import <iTunesStoreUI/SUScriptXMLHTTPRequestDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, SSAuthenticationContext, SUClientInterface, SUScriptAccount, SUScriptAccountManager, SUScriptAppleAccountStore, SUScriptApplication, SUScriptDevice, SUScriptDictionary, SUScriptFairPlayContext, SUScriptKeyValueStore, SUScriptMediaLibrary, SUScriptNavigationBar, SUScriptNotificationObserver, SUScriptOperationDelegate, SUScriptPassbookLibrary, SUScriptPreviewOverlay, SUScriptProtocol, SUScriptPurchaseManager, SUScriptSectionsController, SUScriptStoreBagLoader, SUScriptTelephony, SUScriptViewController, SUScriptWindow, SUScriptWindowContext, WebFrame;
@protocol SUScriptInterfaceDelegate;

@interface SUScriptInterface : SUScriptObject <SUScriptModalDialogDelegate, SUScriptXMLHTTPRequestDelegate>
{
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUScriptInterfaceDelegate> _delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    NSMutableSet *_requireCellularURLs;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptStoreBagLoader *_scriptStoreBagLoader;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (_Bool)scriptXMLHTTPRequest:(id)arg1 requiresCellularForURL:(id)arg2;
- (id)presentingViewControllerForScriptModalDialog:(id)arg1;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)_globalEventNotification:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (_Bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (_Bool)isExplicitContentDisabled;
- (id)hardwareType;
- (id)diskSpaceAvailable;
- (_Bool)canSendEmail;
- (_Bool)arePodcastsDisabled;
- (id)activeNetworkType;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (_Bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(_Bool)arg2;
- (id)systemVersion;
- (_Bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (_Bool)haveAccount;
- (id)accountName;
- (id)accountDSID;
@property(readonly) long long storeSheetTypeAskToBuy;
@property(readonly) long long storeSheetTypeDefault;
@property(readonly) NSString *askToBuyPrompt;
@property(readonly) long long storeSheetType;
- (void)setNavigationBar:(id)arg1;
- (void)setReferringUserAgent:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setLoggingEnabled:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
@property(copy) NSString *cookie;
@property(readonly) id screenReaderRunning;
@property(readonly) SUScriptPreviewOverlay *previewOverlay;
- (id)requestInfo;
@property(readonly) NSString *referringUserAgent;
@property(readonly) NSNumber *orientation;
@property(readonly) SUScriptNavigationBar *navigationBar;
- (id)makeXMLHTTPRequest;
@property(readonly) id loggingEnabled;
@property(readonly) id globalRootObject;
@property(readonly) NSString *clientIdentifier;
- (id)_className;
@property(readonly) SUScriptKeyValueStore *applicationLocalStorage;
@property(readonly) id applicationAccessibilityEnabled;
- (void)accessibilityPostScreenChange;
- (void)accessibilityPostLayoutChange;
- (void)_accessibilityPostLayoutChange;
- (void)signOutPrimaryAccount;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)requireCellularForResourceWithURL:(id)arg1;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)perfLog:(id)arg1;
- (id)machineGUID;
- (void)log:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)dispatchXEvent:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (id)parentViewController;
- (id)DOMElementWithElement:(id)arg1;
@property(retain) WebFrame *webFrame;
@property(readonly) id <SUScriptInterfaceDelegate> threadSafeDelegate;
@property(retain) SUScriptWindowContext *scriptWindowContext;
@property id <SUScriptInterfaceDelegate> delegate;
@property(retain) SUClientInterface *clientInterface;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SUScriptKeyValueStore *deviceLocalStorage;
- (struct OpaqueJSContext *)copyJavaScriptContext;
- (void)dealloc;
- (id)init;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)startedTest:(id)arg1;
- (_Bool)isRunningTest;
- (_Bool)launchedToTest;
@property(readonly) SUScriptDictionary *scriptStoreBagDictionary;
- (void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *installedSoftwareApplications;
- (id)softwareApplicationWithBundleID:(id)arg1;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2;
- (void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2;
- (void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)systemItemUndo;
- (id)systemItemTrash;
- (id)systemItemStop;
- (id)systemItemSearch;
- (id)systemItemRewind;
- (id)systemItemReplay;
- (id)systemItemRefresh;
- (id)systemItemRedo;
- (id)systemItemPlay;
- (id)systemItemPause;
- (id)systemItemPageCurl;
- (id)systemItemOrganize;
- (id)systemItemFlexibleSpace;
- (id)systemItemFixedSpace;
- (id)systemItemFastForward;
- (id)systemItemEdit;
- (id)systemItemDone;
- (id)systemItemCompose;
- (id)systemItemCancel;
- (id)systemItemCamera;
- (id)systemItemBookmarks;
- (id)systemItemAdd;
- (id)systemItemAction;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeDialog;
- (long long)dialogDisplayCountForKey:(id)arg1;
@property(retain) SUScriptAccount *primaryLockerAccount;
@property(retain) SUScriptAccount *primaryAccount;
- (void)setAccounts:(id)arg1;
@property(readonly) NSArray *accounts;
- (id)makeAccount;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (id)accountForDSID:(id)arg1;
- (void)initAuthentication;
- (void)deallocAuthentication;
- (id)makeFamilySetupViewController;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(_Bool)arg3 forceAuthentication:(_Bool)arg4;
- (void)gotoStoreURL:(id)arg1;
- (void)goBack;
- (void)dismissSheet;
@property(readonly) SUScriptViewController *viewController;
@property(readonly) SUScriptSectionsController *sectionsController;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)redeemCode:(id)arg1;
- (void)openURL:(id)arg1;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)handleProtocolPropertyListString:(id)arg1;
@property(readonly) SUScriptProtocol *protocol;
- (void)retryAllRestoreDownloads;
- (void)pingURL:(id)arg1;
@property(readonly) SUScriptWindow *window;
- (void)setWindow:(id)arg1;
- (id)makeWindow;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makeSplitViewController;
- (id)makeMenuViewController;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)setMediaLibrary:(id)arg1;
@property(readonly) SUScriptMediaLibrary *mediaLibrary;
- (void)deallocMediaLibrary;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addExternalDownloads:(id)arg1;
- (void)approveInPerson:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (id)makeReviewWithAdamID:(id)arg1;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
@property(readonly) SUScriptPassbookLibrary *passbookLibrary;
@property(readonly) SUScriptApplication *application;
- (id)makeVolumeViewController;
- (id)makeSegmentedControl;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (void)setDevice:(id)arg1;
@property(readonly) SUScriptDevice *device;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeSubscriptionStatusRequest;
@property(readonly, nonatomic) SUScriptTelephony *telephony;
- (id)makeDocumentInteractionController;
@property(readonly) NSString *actionTypeDismissSheet;
@property(readonly) NSString *actionTypeDismissWindows;
@property(readonly) NSString *actionTypeReturnToLibrary;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeDateFormatter;
@property(readonly) SUScriptPurchaseManager *purchaseManager;
- (id)makeTweetComposeViewController;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)activeAudioPlayers;
- (id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2;
- (id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2;
- (id)makeActivity;
@property(readonly) SUScriptAppleAccountStore *appleAccountStore;
- (id)makeActivityItemProviderWithMIMEType:(id)arg1;
- (id)makeLookupRequest;
- (id)makeFacebookSessionWithAccount:(id)arg1;
- (id)makeCalloutView;
@property(readonly) SUScriptFairPlayContext *accountCreationSecureContext;
- (id)makeGiftViewController;
- (id)makeRedeemViewController;
- (id)makeDonationViewControllerWithCharityIdentifier:(id)arg1;
- (id)makeStoreSheetViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

