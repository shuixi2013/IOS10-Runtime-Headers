//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicNavigationController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSWelcomeNativeViewControllerDelegate-Protocol.h>

@class MusicClientContext, MusicWelcomePlaceholderView, NSMutableArray, NSString, SKUIClientContext;
@protocol MusicWelcomeNavigationControllerDisappearanceObserver;

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicJSWelcomeNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming>
{
    NSMutableArray *_queuedNativeViewEvents;
    _Bool _registeredWithModalNavigationStackRegistry;
    MusicWelcomePlaceholderView *_welcomePlaceholderView;
    MusicClientContext *_clientContext;
    id <MusicWelcomeNavigationControllerDisappearanceObserver> _disappearanceObserver;
    long long _presentationReason;
}

+ (_Bool)automaticallyInstallSearchBarButtonItem;
+ (_Bool)automaticallyInstallAccountBarButtonItem;
@property(nonatomic) long long presentationReason; // @synthesize presentationReason=_presentationReason;
@property(nonatomic) __weak id <MusicWelcomeNavigationControllerDisappearanceObserver> disappearanceObserver; // @synthesize disappearanceObserver=_disappearanceObserver;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_setRegisteredWithModalNavigationStackRegistry:(_Bool)arg1;
- (id)_loadEventExtraInfo;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withInfo:(id)arg2;
- (void)_dispatchNativeViewEventOfType:(long long)arg1;
- (void)_handleClientDidLoadNotification:(id)arg1;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2;
- (void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

