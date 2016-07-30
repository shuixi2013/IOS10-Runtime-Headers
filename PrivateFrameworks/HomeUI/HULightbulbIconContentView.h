//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class HUAnimatableFilterImageView, NSArray, UIVisualEffectView;

@interface HULightbulbIconContentView : HUIconContentView
{
    double _brightness;
    UIVisualEffectView *_vibrantBaseEffectView;
    UIVisualEffectView *_vibrantOutlineEffectView;
    HUAnimatableFilterImageView *_vibrantBulbView;
    HUAnimatableFilterImageView *_coloredBulbView;
    HUAnimatableFilterImageView *_vibrantBaseView;
    HUAnimatableFilterImageView *_coloredBaseView;
    NSArray *_contentConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) HUAnimatableFilterImageView *coloredBaseView; // @synthesize coloredBaseView=_coloredBaseView;
@property(retain, nonatomic) HUAnimatableFilterImageView *vibrantBaseView; // @synthesize vibrantBaseView=_vibrantBaseView;
@property(retain, nonatomic) HUAnimatableFilterImageView *coloredBulbView; // @synthesize coloredBulbView=_coloredBulbView;
@property(retain, nonatomic) HUAnimatableFilterImageView *vibrantBulbView; // @synthesize vibrantBulbView=_vibrantBulbView;
@property(retain, nonatomic) UIVisualEffectView *vibrantOutlineEffectView; // @synthesize vibrantOutlineEffectView=_vibrantOutlineEffectView;
@property(retain, nonatomic) UIVisualEffectView *vibrantBaseEffectView; // @synthesize vibrantBaseEffectView=_vibrantBaseEffectView;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setVibrancyEffect:(id)arg1;
- (_Bool)_shouldApplyVibrancy;
- (_Bool)wantsManagedVibrancyEffect;
- (void)_updateVisualEffect;
- (void)_updateBulbState;
- (void)_updateDisplayContextState;
- (void)_updateImages;
- (id)_tintColorForImageView:(id)arg1 style:(unsigned long long)arg2;
- (id)_allImageViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

