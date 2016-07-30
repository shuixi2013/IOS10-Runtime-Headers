//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationShortLookViewController.h>

@class UIView;

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController
{
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updateScrollViewWithKeyboardFrame:(struct CGRect)arg1;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(_Bool)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_finishAdditionalContentReveal;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (void)_performViewLayout;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_updateWithProvidedCustomContent;
- (void)_setupCustomContentProvider;
- (id)_legacyLookViewIfLoaded;
- (void)_loadLookView;
- (void)_configureScrollViewIfNecessary;
- (id)_newTransitionManager;
- (void)presentLongLook:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)acknowledgeAndDismissCustomContentProvidingViewControllerIfNecessary;
- (_Bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)_initWithNotificationRequest:(id)arg1;

@end

