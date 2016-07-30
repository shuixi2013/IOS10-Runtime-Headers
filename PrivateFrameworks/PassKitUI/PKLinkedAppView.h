//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKLinkedAppUserRatingView, PKLinkedApplication, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver>
{
    UIImageView *_iconView;
    UILabel *_appName;
    UIButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    PKLinkedApplication *_linkedApplication;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
}

@property(nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property(nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationIcon:(id)arg1;
- (void)setLoadingText:(id)arg1;
@property(copy, nonatomic) NSURL *appLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs;
- (void)reloadApplicationStateIfNecessary;
- (void)_cleanupViews;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (void)_layoutLoadingView;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

