//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationsUI/NCInteractiveNotificationServiceInterface-Protocol.h>

@class NSDictionary;

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface>
{
    _Bool _modal;
    NSDictionary *_context;
    double _maximumHeight;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (void)_handleActionIdentifier:(id)arg1;
- (void)_proximityStateDidChange:(_Bool)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_getActionTitlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(_Bool)arg1;
- (void)_setContext:(id)arg1;
- (void)_getInitialStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)accessoryViewService;
- (id)inlayViewService;
- (void)handleActionIdentifier:(id)arg1;
- (void)proximityStateDidChange:(_Bool)arg1;
- (void)requestProximityMonitoringEnabled:(_Bool)arg1;
- (void)setActionEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)handleActionAtIndex:(unsigned long long)arg1;
- (id)actionTitles;
- (id)actionContext;
- (double)bottomOverhangHeight;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)didChangeRevealPercent:(double)arg1;
- (void)interactiveNotificationDidAppear;
- (_Bool)showsKeyboard;
- (double)preferredContentHeight;
- (void)requestPreferredContentHeight:(double)arg1;
- (void)requestDismissalEnabled:(_Bool)arg1;
- (void)dismissWithContext:(id)arg1;

@end

