//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class HUApplier, HUNonAnimatingTintImageView, NSLayoutConstraint, UIImageView;

@interface HUFanIconContentView : HUIconContentView
{
    unsigned long long _rotationState;
    double _rotationSpeed;
    UIImageView *_baseView;
    HUNonAnimatingTintImageView *_bladesView;
    double _baseImageAspectRatio;
    NSLayoutConstraint *_aspectRatioConstraint;
    HUApplier *_speedRampApplier;
}

@property(retain, nonatomic) HUApplier *speedRampApplier; // @synthesize speedRampApplier=_speedRampApplier;
@property(retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(nonatomic) double baseImageAspectRatio; // @synthesize baseImageAspectRatio=_baseImageAspectRatio;
@property(retain, nonatomic) HUNonAnimatingTintImageView *bladesView; // @synthesize bladesView=_bladesView;
@property(retain, nonatomic) UIImageView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) unsigned long long rotationState; // @synthesize rotationState=_rotationState;
- (void).cxx_destruct;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_rampBladesLayerToSpeed:(float)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateImages;
- (void)_updateRotationAnimationFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 rotationSpeed:(double)arg3 shouldRampSpeed:(_Bool)arg4;
- (void)setDisableContinuousAnimation:(_Bool)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setIconSize:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
