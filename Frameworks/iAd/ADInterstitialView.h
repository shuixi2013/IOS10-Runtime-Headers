//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADDimmerViewDelegate-Protocol.h>

@class ADInterstitialAd, ADPrivacyButton, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate>
{
    ADInterstitialAd *_interstitialAd;
    ADPrivacyButton *_privacyButton;
    struct CGRect _dismissButtonRect;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) ADPrivacyButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(nonatomic) struct CGRect dismissButtonRect; // @synthesize dismissButtonRect=_dismissButtonRect;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_privacyButtonWasTapped;
- (_Bool)enableDimmerView:(id)arg1;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)enablePrivacyButton;
@property(readonly, nonatomic) ADInterstitialAd *interstitialAd;
- (id)initForInterstitialAd:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

