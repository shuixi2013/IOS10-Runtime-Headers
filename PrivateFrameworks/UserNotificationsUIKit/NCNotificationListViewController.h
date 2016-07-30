//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UserNotificationsUIKit/NCNotificationListCellDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCollectionViewDelegateFlowLayout-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NCNotificationListCell, NCNotificationListTouchEater, NCNotificationViewController, NSHashTable, NSMapTable, NSString;
@protocol NCNotificationListViewControllerDestinationDelegate, NCNotificationListViewControllerUserInteractionDelegate;

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerDelegatePrivate, NCNotificationListCollectionViewDelegateFlowLayout>
{
    _Bool _backgroundBlurred;
    _Bool _supportsSwipeToDefaultAction;
    _Bool _onscreen;
    _Bool _needsReloadData;
    id <NCNotificationListViewControllerUserInteractionDelegate> _userInteractionDelegate;
    id <NCNotificationListViewControllerDestinationDelegate> _destinationDelegate;
    NCNotificationViewController *_notificationViewControllerForSizing;
    NCNotificationViewController *_viewControllerPresentingLongLook;
    NSMapTable *_cellsSizesCache;
    NSHashTable *_observers;
    NCNotificationListTouchEater *_touchEater;
    NCNotificationListCell *_cellWithRevealedActions;
    struct UIEdgeInsets _insetMargins;
}

@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(nonatomic, getter=isOnscreen) _Bool onscreen; // @synthesize onscreen=_onscreen;
@property(nonatomic) __weak NCNotificationListCell *cellWithRevealedActions; // @synthesize cellWithRevealedActions=_cellWithRevealedActions;
@property(retain, nonatomic) NCNotificationListTouchEater *touchEater; // @synthesize touchEater=_touchEater;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMapTable *cellsSizesCache; // @synthesize cellsSizesCache=_cellsSizesCache;
@property(retain, nonatomic) NCNotificationViewController *viewControllerPresentingLongLook; // @synthesize viewControllerPresentingLongLook=_viewControllerPresentingLongLook;
@property(readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(retain, nonatomic) NCNotificationViewController *notificationViewControllerForSizing; // @synthesize notificationViewControllerForSizing=_notificationViewControllerForSizing;
@property(nonatomic) _Bool supportsSwipeToDefaultAction; // @synthesize supportsSwipeToDefaultAction=_supportsSwipeToDefaultAction;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(nonatomic) __weak id <NCNotificationListViewControllerDestinationDelegate> destinationDelegate; // @synthesize destinationDelegate=_destinationDelegate;
@property(nonatomic) __weak id <NCNotificationListViewControllerUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
- (void).cxx_destruct;
- (void)_performCollectionViewOperationBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_performCollectionViewOperationBlock:(CDUnknownBlockType)arg1;
- (_Bool)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_installTouchEater;
- (_Bool)notificationListCellShouldShowActionsForNotificationRequest:(id)arg1;
- (void)notificationListCellDidHideCellActions:(id)arg1;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCell:(id)arg1 requestsClearingNotificationRequest:(id)arg2;
- (void)notificationListCell:(id)arg1 requestsPerformAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)willTearDownNotificationListCell:(id)arg1;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notificationViewController:(id)arg1 didDismissLongLook:(_Bool)arg2;
- (void)notificationViewController:(id)arg1 didPresentLongLook:(_Bool)arg2;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)setTouchEaterEnabled:(_Bool)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (_Bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)notifyContentObservers;
- (void)removeContentObserver:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (void)reloadCollectionViewDataIfNecessary;
- (void)setNeedsReload;
- (_Bool)dismissModalFullScreenIfNeeded;
- (_Bool)dismissLongLookViewControllerIfPresented;
- (id)notificationRequestInLongLook;
- (_Bool)hasContent;
- (void)showMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)hideMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)clearAllNonPersistent;
- (void)clearAll;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

