//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserTransitionCoordinator, UIView, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional
- (UIView *)entryViewSnapshotForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 willUnloadBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(_Bool)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 currentConsumerDidChange:(long long)arg2;
@end

