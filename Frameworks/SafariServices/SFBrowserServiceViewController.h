//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFBrowserContentViewController.h>

#import <SafariServices/SFServiceViewControllerProtocol-Protocol.h>
#import <SafariServices/_SFActivityDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFBrowserServiceViewController : _SFBrowserContentViewController <_SFActivityDelegate, SFServiceViewControllerProtocol>
{
    CDUnknownBlockType _customActivitiesFetchCompletionHandler;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)safariActivity:(id)arg1 didFinish:(_Bool)arg2;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_didLoadWebView;
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_notifyInitialLoadDidFinish:(_Bool)arg1;
- (void)_updateRemoteSwipeGestureState;
- (void)_updateStatusBarAppearance;
- (void)_dismiss;
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;
- (void)repostNotificationInViewService:(id)arg1;
- (void)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didFetchHostAppCustomActivities:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setShowingLinkPreview:(_Bool)arg1;
- (void)setEntersReaderIfAvailable:(_Bool)arg1;
- (void)loadURL:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

