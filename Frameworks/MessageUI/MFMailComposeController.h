//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MessageUI/CNContactPickerDelegate-Protocol.h>
#import <MessageUI/CNContactViewControllerDelegate-Protocol.h>
#import <MessageUI/MFComposeActivityContinuationOperationDelegate-Protocol.h>
#import <MessageUI/MFComposeHeaderViewDelegate-Protocol.h>
#import <MessageUI/MFComposeImageSizeViewDelegate-Protocol.h>
#import <MessageUI/MFComposeRecipientTextViewDelegate-Protocol.h>
#import <MessageUI/MFComposeSubjectViewDelegate-Protocol.h>
#import <MessageUI/MFComposeTypeFactoryDelegate-Protocol.h>
#import <MessageUI/MFGroupDetailViewControllerDelegate-Protocol.h>
#import <MessageUI/MFMailComposeToFieldDelegate-Protocol.h>
#import <MessageUI/MFMailComposeViewDelegate-Protocol.h>
#import <MessageUI/MFSecureMIMECompositionManagerDelegate-Protocol.h>
#import <MessageUI/NSUserActivityDelegate-Protocol.h>
#import <MessageUI/UIImagePickerControllerDelegate-Protocol.h>
#import <MessageUI/UINavigationControllerDelegate-Protocol.h>
#import <MessageUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CNContactPickerViewController, CNContactViewController, MFAddressPickerReformatter, MFComposeActivityContinuationOperation, MFComposeBodyField, MFComposeImageSizeView, MFComposeRecipient, MFComposeSubjectView, MFComposeTextContentView, MFLANContinuationAgent, MFLock, MFMailAccountProxyGenerator, MFMailComposeRecipientView, MFMailMarkup, MFMailPopoverManager, MFMailSignatureController, MFMailboxUid, MFMessageContentProgressLayer, MFModernComposeRecipientAtom, MFMutableMessageHeaders, MFOutgoingMessageDelivery, MFRecentComposeRecipient, MFSecureMIMECompositionManager, NSArray, NSDate, NSDictionary, NSObject, NSString, NSTimer, UIAlertController, UIBarButtonItem, UIImagePickerController, UIKeyCommand, UIProgressView, UITapGestureRecognizer, UIView, _MFMailCompositionContext;
@protocol MFMailComposeViewControllerDelegate, NSCoding, OS_dispatch_group;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactViewControllerDelegate, MFMailComposeToFieldDelegate, NSUserActivityDelegate, MFComposeActivityContinuationOperationDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientTextViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, MFGroupDetailViewControllerDelegate, CNContactPickerDelegate>
{
    id <MFMailComposeViewControllerDelegate> _delegate;
    id _autorotationDelegate;
    id _remoteViewControllerProxy;
    MFMailAccountProxyGenerator *_accountProxyGenerator;
    _MFMailCompositionContext *_compositionContext;
    unsigned long long _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    long long _sendingEmailAddressIndex;
    id _content;
    unsigned long long _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    CNContactPickerViewController *_peoplePicker;
    UIImagePickerController *_photosImagePickerController;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFMailComposeRecipientView *_lastFocusedRecipientView;
    MFModernComposeRecipientAtom *_atomPresentingCard;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeBodyField *_bodyField;
    MFComposeTextContentView *_bodyTextView;
    MFMailSignatureController *_signatureController;
    MFRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    MFMailMarkup *_markupExtension;
    MFOutgoingMessageDelivery *_delivery;
    MFMutableMessageHeaders *_savedHeaders;
    NSString *_lastDraftMessageID;
    MFMailboxUid *_lastDraftMailboxUid;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    id _autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_certificatesByRecipient;
    NSDictionary *_errorsByRecipient;
    NSString *_addressForMissingIdentity;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    _Bool _encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    unsigned int _isDirty:1;
    unsigned int _bodyTextChanged:1;
    unsigned int _shouldAutosaveWithSuspendInfo:1;
    unsigned int _isSuspended:1;
    unsigned int _viewWasUnloaded:1;
    unsigned int _fromAddressPickerWasVisible:1;
    unsigned int _stillLoading:1;
    unsigned int _hosted:1;
    unsigned int _hasViewAppeared:1;
    unsigned int _rotationSnapshotTaken:1;
    unsigned int _isPopoverVisible:1;
    unsigned int _useSuspended:1;
    unsigned int _didShowNotifyConfirmation:1;
    unsigned int _showingNotifyConfirmation:1;
    MFAddressPickerReformatter *_addressPickerReformatter;
    _Bool _contentVisible;
    _Bool _allowRestrictedAccounts;
    _Bool _encryptionOverrideSetting;
    UIKeyCommand *_sendKeyCommand;
    UIKeyCommand *_escapeKeyCommand;
    UITapGestureRecognizer *_requestModalTapGestureRecognizer;
    UIAlertController *_notifyConfirmation;
    MFComposeActivityContinuationOperation *_continuationOperation;
    UIProgressView *_continuationProgressView;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFLANContinuationAgent *_LANContinuationAgent;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    unsigned short _lastTypedCharacter;
    NSTimer *_autosaveTimer;
    NSDate *_autosavedDate;
    NSDate *_lastActiveDate;
    NSDictionary *_securityScopes;
    _Bool _isModal;
    _Bool _useMailDrop;
    _Bool _autosaveIsValid;
    _Bool _attachmentToMarkupIsLoaded;
    _Bool _delayToShowMarkupHasPassed;
    int _sourceAccountManagement;
    MFComposeRecipient *_recipientPresentingCard;
    NSString *_originatingBundleID;
    UIAlertController *_popoverAlert;
    CNContactViewController *_contactViewController;
    unsigned long long _markupReplyAttachmentLoadingProgress;
}

+ (id)preferenceForKey:(id)arg1;
+ (_Bool)isSetupForDeliveryAllowingRestrictedAccounts:(_Bool)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (_Bool)isSetupForDeliveryAllowingRestrictedAccounts:(_Bool)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long markupReplyAttachmentLoadingProgress; // @synthesize markupReplyAttachmentLoadingProgress=_markupReplyAttachmentLoadingProgress;
@property(nonatomic) _Bool delayToShowMarkupHasPassed; // @synthesize delayToShowMarkupHasPassed=_delayToShowMarkupHasPassed;
@property(nonatomic) _Bool attachmentToMarkupIsLoaded; // @synthesize attachmentToMarkupIsLoaded=_attachmentToMarkupIsLoaded;
@property(retain, nonatomic) CNContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(retain, nonatomic) UIAlertController *popoverAlert; // @synthesize popoverAlert=_popoverAlert;
@property(nonatomic) _Bool autosaveIsValid; // @synthesize autosaveIsValid=_autosaveIsValid;
@property(nonatomic) _Bool useMailDrop; // @synthesize useMailDrop=_useMailDrop;
@property(nonatomic) int sourceAccountManagement; // @synthesize sourceAccountManagement=_sourceAccountManagement;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(readonly, nonatomic) NSDate *autosavedDate; // @synthesize autosavedDate=_autosavedDate;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(readonly, nonatomic) MFOutgoingMessageDelivery *delivery; // @synthesize delivery=_delivery;
@property(readonly, nonatomic) MFMailboxUid *lastDraftMailboxUid; // @synthesize lastDraftMailboxUid=_lastDraftMailboxUid;
@property(readonly, nonatomic) NSString *lastDraftMessageID; // @synthesize lastDraftMessageID=_lastDraftMessageID;
@property(copy, nonatomic) NSString *addressForMissingIdentity; // @synthesize addressForMissingIdentity=_addressForMissingIdentity;
@property(retain, nonatomic) NSDictionary *errorsByRecipient; // @synthesize errorsByRecipient=_errorsByRecipient;
@property(retain, nonatomic) NSDictionary *certificatesByRecipient; // @synthesize certificatesByRecipient=_certificatesByRecipient;
@property(retain, nonatomic) MFComposeRecipient *recipientPresentingCard; // @synthesize recipientPresentingCard=_recipientPresentingCard;
@property(retain, nonatomic) MFModernComposeRecipientAtom *atomPresentingCard; // @synthesize atomPresentingCard=_atomPresentingCard;
@property(retain, nonatomic) CNContactPickerViewController *peoplePicker; // @synthesize peoplePicker=_peoplePicker;
@property(retain, nonatomic) id remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)activityContinuationOperationReceivedBytes:(id)arg1;
- (void)activityContinuationOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishSendingDataWithResult:(unsigned long long)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (id)_documentForActivityContinuation;
- (void)handleLargeMessageComposeContinuationWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3;
- (void)setProgressUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_makeComposeUserActivityCurrent;
- (void)updateUserActivityState:(id)arg1;
- (void)_hideContinuationProgressViewAnimated:(_Bool)arg1;
- (void)_createAndAddContinuationProgressViewIfNecessary;
- (_Bool)_hasEncryptionIdentityError;
- (_Bool)_wantsEncryption;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)_showMissingIdentityAlert;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (void)_updateIdentityStatus:(int *)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity *)arg3 error:(id)arg4;
- (void)_updatePersonCard;
- (unsigned long long)_defaultAtomPresentationOptions;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)arg1;
- (void)_updateRecipientAtomStyles;
- (_Bool)_secureCompositionManagerHasRecipients;
- (void)_resetSecureCompositionManagerUsingNewAccount:(_Bool)arg1;
- (void)_resetSecureCompositionManager;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateTableCell:(id)arg1 isChecked:(_Bool)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (void)didSelectCellAtRow:(unsigned long long)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (unsigned long long)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned long long)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_finishPopoverAlertClosingComposition:(_Bool)arg1;
- (void)_displayPopoverAlert:(id)arg1;
- (void)_finishModalAlertClosingComposition:(_Bool)arg1;
- (void)_presentModalAlert:(id)arg1;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (_Bool)presentSearchResultsForComposeRecipientView:(id)arg1;
- (_Bool)composeRecipientViewShowingSearchResults:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)navigationControllerForRecentPersonCard;
- (_Bool)isShowingRecentPersonCard;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(_Bool)arg2;
- (id)_contactViewControllerForRecipient:(id)arg1;
- (id)_newLegacyAddressBookViewControllerForRecipient:(id)arg1;
- (void)_removeRecent;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)_updateBodyFieldAutoCorrectionContext;
- (void)composeSubjectViewWillRemoveContent:(id)arg1;
- (void)composeSubjectViewDidSelectNotifyButton:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)_dismissPersonCard;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_dismissPeoplePicker:(id)arg1;
- (long long)popoverPresentationStyleForViewController:(id)arg1;
@property(readonly, nonatomic, getter=isVerticallyCompact) _Bool verticallyCompact;
- (id)keyCommands;
- (void)_focusBccHeaderCommandInvoked:(id)arg1;
- (void)_tabKeyCommandInvoked:(id)arg1;
- (_Bool)_isTabKeyCommandInvocationPossible;
- (_Bool)canBecomeFirstResponder;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_popoverWillBePresented:(id)arg1;
- (id)popoverManager;
- (id)popoverManagerCreateIfNeeded:(_Bool)arg1;
- (void)hostApplicationWillEnterForeground;
- (void)applicationDidResume;
- (void)didBecomeActiveComposeController;
- (_Bool)_isActiveComposeController;
- (void)_prepareForSuspend;
- (void)_restoreMessageValues;
- (void)_saveMessageValues;
- (void)_clearMessageValues;
- (void)hostApplicationDidEnterBackground;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)composeShortcutInvoked:(id)arg1;
- (void)setRecipientsKeyboardType:(long long)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (void)_finishedComposing;
- (long long)deliverMessageRemotely;
- (void)_explainAirplaneMode;
- (_Bool)isSavingAsDraft;
- (void)forceSaveAsDraft;
- (void)_setupForSaveAsDraft;
- (_Bool)needsDelivery;
- (int)resolution;
- (void)sendMessage;
- (void)securityScopeForURL:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)_prepareImagesForSendWithContinuation:(CDUnknownBlockType)arg1;
- (void)_physicallyScaleImagesToScale:(unsigned long long)arg1;
- (_Bool)_shouldUseMailDrop;
- (void)_promptForMailDropIfNecessaryWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForCanSendMailWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForEmptySubjectWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForInvalidAddressesWithContinuation:(CDUnknownBlockType)arg1;
- (void)send:(id)arg1;
- (unsigned long long)_estimateMessageSize;
- (void)_setUpDeliveryObject;
- (Class)_deliveryClass;
- (id)_messageForAutosave;
- (id)_messageForRemoteDelivery;
- (id)_messageForDraft;
- (id)_messageUseSuspendInfo:(_Bool)arg1 endingEditing:(_Bool)arg2;
- (id)_outgoingMessageWithSubstituteDocument:(id)arg1 useSuspendInfo:(_Bool)arg2 endingEditing:(_Bool)arg3;
- (void)_leaveMessageInOutbox;
- (void)close:(id)arg1;
- (void)_close;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <NSCoding> autosaveIdentifier;
- (void)_autosaveTimerFired:(id)arg1;
- (_Bool)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1;
- (void)_setAutosaveIsValid:(_Bool)arg1;
- (unsigned long long)_sizeForScale:(unsigned long long)arg1 imagesOnly:(_Bool)arg2;
- (void)_setIsLoading:(_Bool)arg1;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned long long)arg2;
- (void)_unscaleImages;
- (void)_scaleImages;
- (void)_setInitialStateForImageField;
- (void)_updateImageSizeTitles;
- (id)currentScaleImageSize;
- (id)_attachmentToMarkup;
- (void)attachmentFinishedLoading:(id)arg1;
- (void)attachmentsRemoved:(id)arg1;
- (void)didInsertAttachment:(id)arg1;
- (void)setContentVisible:(_Bool)arg1;
- (struct CGRect)rectOfAttachment:(id)arg1;
- (struct CGRect)frameForAttachmentWithIdentifier:(id)arg1;
- (_Bool)hasAttachments;
- (id)attachments;
- (_Bool)shouldCreateRichTextRepresentation;
- (_Bool)_shouldEnableCloseButton;
- (_Bool)_shouldEnableSendButton;
- (_Bool)_isPopoverOrActionSheetOrAlertVisible;
- (void)_updateSendAndCloseEnabled;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)insertPhotoOrVideo;
- (struct CGRect)_optimalRectForPresentingPopoverInWebView:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)importDocument;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (int)compositionType;
- (void)_finishEnteringRecipients;
- (_Bool)_anyRecipientViewContainsAddress:(id)arg1;
- (_Bool)_hasRecipients;
- (id)_allRecipientViews;
- (void)removeAddressAtIndex:(unsigned long long)arg1 field:(int)arg2;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2;
- (void)_updateOriginalBccStatusForRestore;
- (void)_tryAddSenderToBccRecipients;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(_Bool)arg1;
- (id)bodyField;
- (id)savedHeaders;
- (void)setSavedHeaders:(id)arg1;
- (id)bccRecipients;
- (void)setBccRecipients:(id)arg1;
- (id)ccRecipients;
- (void)setCcRecipients:(id)arg1;
- (id)toRecipients;
- (void)setToRecipients:(id)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (id)addressesForField:(int)arg1;
- (id)_addressFieldForField:(int)arg1;
- (int)_fieldForAddressField:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)_focusGained:(id)arg1;
- (_Bool)canShowAttachmentPicker;
- (_Bool)canShowImageSizeField;
- (_Bool)canShowFromField;
- (_Bool)bccAddressesDirtied;
- (_Bool)sendingEmailDirtied;
- (void)finalizeSignature;
- (void)updateSignature;
- (void)addSignature:(_Bool)arg1;
- (void)handleMarkupURL:(id)arg1 attachment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4;
- (void)handleMarkupError:(id)arg1 attachment:(id)arg2;
- (void)dismissMarkupViewController;
- (void)presentMarkupViewController:(id)arg1;
- (void)markupAttachment:(id)arg1;
- (id)attachmentIcon:(id)arg1;
- (id)markupReplacementAttachment;
- (struct CGRect)markupAttachmentMaskForAttachment:(id)arg1;
- (struct CGRect)markupAttachmentBoundsForAttachment:(id)arg1;
- (id)presentationViewController;
- (void)changeQuoteLevel:(long long)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (_Bool)_setSendingEmailAddress:(id)arg1 addIfNotPresent:(_Bool)arg2;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(_Bool)arg2;
- (void)setSendingEmailAddress:(id)arg1;
- (id)sendingEmailAddressIfExists;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (void)didInsertBodyText:(id)arg1;
- (void)_bodyTextChanged:(id)arg1;
- (void)_composeViewDidDraw:(id)arg1;
- (void)_recipientTextChanged:(id)arg1;
- (void)_subjectTextChanged:(id)arg1;
- (void)_draftContentDidChange;
- (_Bool)isDirty;
- (void)pickInitialFirstResponder;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (_Bool)_shouldPrependBlankLineForAttachments;
- (void)_loadingContextDidLoadMessage;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1;
- (void)_loadAttachments;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForDraft:(id)arg1;
- (id)compositionContext;
- (void)_checkForReplyAndForwardRestriction;
- (void)_loadCompositionContext;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (_Bool)_isReplyOrForward;
- (_Bool)_isRestoredComposition;
- (int)composeType;
- (id)_reformattedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)arg1 defaultFontSize:(double)arg2;
- (void)_resetProxyGenerator;
- (id)_availableAccountProxies;
- (id)_emailAddresses;
- (id)emailAddresses;
- (void)_accountsChanged:(id)arg1;
- (id)_defaultAccount;
- (_Bool)_isSetupForDelivery;
- (id)accountProxyGenerator;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (void)tappedSMIMEButton;
- (_Bool)shouldShowSMIMEButton;
- (void)_updateNavigationBarTitleAnimated:(_Bool)arg1;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned long long)arg2;
- (id)_alternateTitleView;
- (void)clearInitialTitle;
- (void)setInitialTitle:(id)arg1;
- (id)navigationBarTitle;
- (void)_requestBecomeModalGestureRecognized:(id)arg1;
- (void)clearAllFields;
- (void)dismissSheet;
- (_Bool)hosted;
- (void)setHosted:(_Bool)arg1;
- (id)mailComposeView;
- (void)dealloc;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

