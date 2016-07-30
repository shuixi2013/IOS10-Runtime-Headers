//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (iAdAdditions)
+ (void)prepareInterstitialAds;
@property(readonly, nonatomic) _Bool shouldPresentInterstitialAd;
- (_Bool)requestInterstitialAdPresentation;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd;
@property(readonly, nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;
@property(readonly, retain, nonatomic) UIView *originalContentView;
@property(nonatomic) _Bool canDisplayBannerAds;
@property(nonatomic) long long interstitialPresentationPolicy;
@end

