//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, _UIFloatingContentSpecialAnimatingView, _UIFocusAnimationConfiguration;
@protocol _UIFloatingContentViewDelegate;

@interface _UIFloatingContentView : UIView
{
    id <_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
    UIView *_shadowView;
    _UIFloatingContentSpecialAnimatingView *_containerView;
    _UIFloatingContentSpecialAnimatingView *_visualEffectContainerView;
    _UIFloatingContentSpecialAnimatingView *_highlightView;
    UIView *_contentView;
    struct __CFDictionary *_backgroundColorsByState;
    NSMutableArray *_contentMotionEffects;
    double _shadowOpacityLight;
    double _shadowOpacityDark;
    struct CGPoint _focusDirection;
    struct CGPoint _contentRotation;
    struct CGPoint _contentTranslation;
    _Bool _customScale;
    _Bool _symmetricScale;
    _Bool _stretchableShadowImage;
    _Bool _useShadowImage;
    _Bool _shadowEnabled;
    _Bool _contentOpaque;
    _Bool _scalesBackwards;
    _Bool _roundContentWhenDeselected;
    _Bool __disableOutsetShadowPath;
    double _cornerRadius;
    _UIFocusAnimationConfiguration *_focusAnimationConfiguration;
    double _shadowRadius;
    double _shadowVerticalOffset;
    double _unfocusedShadowRadius;
    double _unfocusedShadowOpacity;
    double _unfocusedShadowVerticalOffset;
    UIImage *_shadowImage;
    unsigned long long _controlState;
    long long _highlightStyle;
    CDUnknownBlockType _focusAnimationConfigurationHandler;
    struct CGPoint _focusScaleAnchorPoint;
    struct CGSize _shadowSize;
    struct CGSize _unfocusedShadowExpansion;
    struct CGSize _shadowExpansion;
    struct CGSize _asymmetricScaleFactor;
    struct CGSize _asymmetricFocusedSizeIncrease;
    struct CGRect _shadowContentsCenter;
}

+ (id)_defaultFocusAnimationConfiguration;
+ (Class)layerClass;
@property(copy, nonatomic) CDUnknownBlockType focusAnimationConfigurationHandler; // @synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler;
@property(nonatomic) _Bool _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) struct CGSize asymmetricFocusedSizeIncrease; // @synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease;
@property(nonatomic) struct CGSize asymmetricScaleFactor; // @synthesize asymmetricScaleFactor=_asymmetricScaleFactor;
@property(nonatomic) _Bool roundContentWhenDeselected; // @synthesize roundContentWhenDeselected=_roundContentWhenDeselected;
@property(nonatomic) _Bool scalesBackwards; // @synthesize scalesBackwards=_scalesBackwards;
@property(nonatomic, getter=isContentOpaque) _Bool contentOpaque; // @synthesize contentOpaque=_contentOpaque;
@property(nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(nonatomic) struct CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) struct CGSize shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) struct CGSize unfocusedShadowExpansion; // @synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion;
@property(nonatomic) double unfocusedShadowVerticalOffset; // @synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset;
@property(nonatomic) double unfocusedShadowOpacity; // @synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity;
@property(nonatomic) double unfocusedShadowRadius; // @synthesize unfocusedShadowRadius=_unfocusedShadowRadius;
@property(nonatomic) double shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) _Bool useShadowImage; // @synthesize useShadowImage=_useShadowImage;
@property(copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration; // @synthesize focusAnimationConfiguration=_focusAnimationConfiguration;
@property(nonatomic) struct CGPoint focusScaleAnchorPoint; // @synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_setShadowImageIfNeeded;
- (void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1;
- (void)_updateTransformForPrimaryState:(unsigned long long)arg1;
- (void)_updateBackgroundViewForPrimaryState:(unsigned long long)arg1;
- (void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1;
- (void)_updateScaleFactor;
@property(nonatomic) double focusedSizeIncrease;
@property(nonatomic) double scaleFactor;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (double)_currentShadowOpacity;
- (double)shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2;
@property(nonatomic) double shadowOpacity;
- (void)_updateShadowLayer;
- (void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1;
- (double)_effectiveShadowOpacity;
- (double)_effectiveShadowRadius;
@property(nonatomic) _Bool clipsContentToBounds;
- (void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFocused;
- (void)_layoutShadow;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;
- (void)setShadowImage:(id)arg1 stretchable:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *visualEffectContainerView;
@property(readonly, nonatomic) UIView *contentView;
- (_Bool)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1;
- (_Bool)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1;
- (unsigned long long)_primaryStateForState:(unsigned long long)arg1;
- (void)_uninstallContentMotionEffects;
- (void)_installContentMotionEffects;
- (void)removeContentMotionEffect:(id)arg1;
- (void)addContentMotionEffect:(id)arg1;
- (void)setContentMotionRotation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
@property(nonatomic) __weak id <_UIFloatingContentViewDelegate> floatingContentDelegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

