//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Widgets/WGWidgetHostingViewControllerDelegate-Protocol.h>
#import <Widgets/WGWidgetHostingViewControllerHost-Protocol.h>

@class NSString, WGWidgetHostingViewController;
@protocol WGWidgetViewControllerDelegate;

@interface WGWidgetViewController : UIViewController <WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost>
{
    WGWidgetHostingViewController *_widgetHost;
    id <WGWidgetViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) WGWidgetHostingViewController *widgetHost; // @synthesize widgetHost=_widgetHost;
@property(nonatomic) __weak id <WGWidgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)userSpecifiedDisplayModeForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (struct CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (void)_addWidgetButtonTapped:(id)arg1;
- (id)_shortLookViewIfLoaded;
- (id)_shortLookViewLoadingIfNecessary:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithWidgetHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

