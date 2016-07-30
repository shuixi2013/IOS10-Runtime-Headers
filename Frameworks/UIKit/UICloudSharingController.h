//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKit/_UISharingPublicController-Protocol.h>

@class CKContainer, CKShare, NSArray, NSObject, NSString, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Private;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate>
{
    _Bool _isDelayingPresentation;
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    _Bool _shareNeedsDeletion;
    id <UICloudSharingControllerDelegate> _delegate;
    CKShare *_share;
    unsigned long long _availablePermissions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    CKContainer *_container;
    NSArray *_participantDetails;
    CDUnknownBlockType _preparationHandler;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    id <_UICloudSharingControllerDelegate_Private> _privateDelegate;
}

@property(nonatomic) __weak id <_UICloudSharingControllerDelegate_Private> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property(nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSArray *participantDetails; // @synthesize participantDetails=_participantDetails;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) unsigned long long availablePermissions; // @synthesize availablePermissions=_availablePermissions;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(nonatomic) __weak id <UICloudSharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendDidStopSharingDelegate;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (id)activityItemSource;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_deleteShareAfterDismissalWithoutSave:(CDUnknownBlockType)arg1;
- (void)_didDismiss;
- (void)_callPreparationHandler:(CDUnknownBlockType)arg1;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPreparationHandler:(CDUnknownBlockType)arg1;
- (id)initWithShare:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (_Bool)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

