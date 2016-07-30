//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverBackgroundView.h>

@class NSMutableArray, UIColor, UIImageView, UIMotionEffect, UIView, _MKCalloutBackgroundMaskView;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    double _arrowOffset;
    unsigned long long _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    CDStruct_80aa614a _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
    UIMotionEffect *_arrowMotionEffect;
    UIMotionEffect *_arrowShadowMotionEffect;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (_Bool)wantsDefaultContentAppearance;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
@property(nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *calloutBackgroundColor;
- (void)_extendLeftRightArrow;
- (void)_retractUpDownArrow;
- (void)_showArrow;
- (void)_hideArrow;
- (void)setArrowMotionEffect:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (id)_shadowPath;
- (void)layoutSubviews;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(_Bool)arg2;
- (id)newMaskLayer;
- (void)_setupViews;
- (struct UIEdgeInsets)_contentViewInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

