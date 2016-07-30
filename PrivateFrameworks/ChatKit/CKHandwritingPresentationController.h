//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKBrowserItemPayload, CKDeviceOrientationManager, CKHandwritingWindow, CKScheduledUpdater, NSString, UIViewController;
@protocol CKHandwritingBrowserViewControllerProtocol, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate;

@interface CKHandwritingPresentationController : NSObject
{
    _Bool _requestedVisibility;
    _Bool _actualVisibility;
    _Bool _requestedVisibilityShouldBeAnimated;
    _Bool _suppressAppearanceCallbacksBecauseOfFirstInitialization;
    NSObject<CKHandwritingPresentationControllerDelegate> *_delegate;
    CKDeviceOrientationManager *_deviceOrientationManager;
    CKHandwritingWindow *_handwritingWindow;
    UIViewController<CKHandwritingBrowserViewControllerProtocol> *_browserViewController;
    CKScheduledUpdater *_animationScheduledUpdater;
    NSObject<CKHandwritingViewControllerSendDelegate> *_cachedSendDelegate;
    CKBrowserItemPayload *_cachedPluginPayload;
}

@property(nonatomic) _Bool suppressAppearanceCallbacksBecauseOfFirstInitialization; // @synthesize suppressAppearanceCallbacksBecauseOfFirstInitialization=_suppressAppearanceCallbacksBecauseOfFirstInitialization;
@property(retain, nonatomic) CKBrowserItemPayload *cachedPluginPayload; // @synthesize cachedPluginPayload=_cachedPluginPayload;
@property(nonatomic) __weak NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate; // @synthesize cachedSendDelegate=_cachedSendDelegate;
@property(nonatomic) _Bool requestedVisibilityShouldBeAnimated; // @synthesize requestedVisibilityShouldBeAnimated=_requestedVisibilityShouldBeAnimated;
@property(nonatomic) _Bool actualVisibility; // @synthesize actualVisibility=_actualVisibility;
@property(nonatomic) _Bool requestedVisibility; // @synthesize requestedVisibility=_requestedVisibility;
@property(retain, nonatomic) CKScheduledUpdater *animationScheduledUpdater; // @synthesize animationScheduledUpdater=_animationScheduledUpdater;
@property(retain, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(retain, nonatomic) CKHandwritingWindow *handwritingWindow; // @synthesize handwritingWindow=_handwritingWindow;
@property(retain, nonatomic) CKDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(nonatomic) __weak NSObject<CKHandwritingPresentationControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadCachedPayloadIntoBrowser;
- (void)_doInitialization;
- (void)_updateVisibilityState;
@property(readonly) NSString *pluginBundleID;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool visible;
@property(retain, nonatomic) CKBrowserItemPayload *pluginPayload;
@property(nonatomic) __weak NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
- (void)dealloc;
- (id)init;

@end

