//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PUPhotoEditLayoutStaticAdaptable-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PUAdjustmentsMode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditLevelSlider : UIView <PUPhotoEditLayoutStaticAdaptable>
{
    UIView *__sliderContentView;
    UIView *_levelIndicatorView;
    UIView *_baseValueIndicatorView;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_contentViewOffsetConstraint;
    NSArray *_levelIndicatorViewConstraints;
    NSLayoutConstraint *_levelIndicatorViewOffsetConstraint;
    NSLayoutConstraint *_levelIndicatorViewSpanConstraint;
    NSArray *_baseValueIndicatorViewConstraints;
    NSLayoutConstraint *_baseValueIndicatorViewPositionConstraint;
    _Bool _scaleFactorsAreValid;
    double _identityOffset;
    double _pointsPerUnitBelowIdentity;
    double _pointsPerUnitAboveIdentity;
    _Bool _baseValueIndicatorHidden;
    _Bool _directionReversed;
    long long _layoutOrientation;
    PUAdjustmentsMode *_adjustmentsMode;
    double _maxValue;
    double _minValue;
    double _currentValue;
    double _baseValue;
    double _identityValue;
    struct CGSize _contentSize;
}

@property(nonatomic, getter=isDirectionReversed) _Bool directionReversed; // @synthesize directionReversed=_directionReversed;
@property(nonatomic, getter=isBaseValueIndicatorHidden) _Bool baseValueIndicatorHidden; // @synthesize baseValueIndicatorHidden=_baseValueIndicatorHidden;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double identityValue; // @synthesize identityValue=_identityValue;
@property(nonatomic) double baseValue; // @synthesize baseValue=_baseValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) PUAdjustmentsMode *adjustmentsMode; // @synthesize adjustmentsMode=_adjustmentsMode;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)setBaseValueIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_sliderContentView;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (double)_levelIndicatorWidth;
- (double)_levelIndicatorOffset;
- (double)_baseValueIndicatorOffset;
- (double)_contentOffsetForLevelValue:(double)arg1;
- (double)levelValueForOffset:(double)arg1;
- (double)offsetForLevelValue:(double)arg1;
- (void)_invalidateContentViewConstraints;
- (void)_updateConversionFactorsIfNeeded;
- (void)_updateBaseValueIndicatorVisibiliyAnimated:(_Bool)arg1;
- (void)_updateLevelDisplay;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool wantsLevelIndicator;
- (void)invalidateConversionFactors;
@property(readonly, nonatomic) double identityOffset;
- (id)preferredSliderContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

