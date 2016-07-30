//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAFilter, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIColor, UIImage, _UIBackdropEffectView, _UIBackdropViewSettings;
@protocol _UIBackdropViewGraphicsQualityChangeDelegate, _UIBackdropViewObserver;

@interface _UIBackdropView : UIView
{
    _Bool _autosizesToFitSuperview;
    _Bool _computesColorSettings;
    _Bool _appliesOutputSettingsAutomatically;
    _Bool _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
    _Bool _applyingBackdropChanges;
    _Bool _applyingTransition;
    _Bool _requiresTintViews;
    _Bool _wantsColorSettings;
    _Bool _blursBackground;
    _Bool _allowsColorSettingsSuppression;
    _Bool _autoGroup;
    _Bool _contentViewAccessed;
    _Bool _contentViewAccessorGuard;
    _Bool _applySettingsAfterLayout;
    _Bool _updateMaskViewsForViewReentrancyGuard;
    _Bool _simulatesMasks;
    _Bool _backdropVisibilitySetOnce;
    _Bool _blurRadiusSetOnce;
    _Bool _disablesOccludedBackdropBlurs;
    _Bool __backdropVisible;
    _Bool __zoomsBack;
    long long _style;
    NSHashTable *_observers;
    id <_UIBackdropViewObserver> _observer;
    double _appliesOutputSettingsAnimationDuration;
    _UIBackdropViewSettings *_inputSettings;
    _UIBackdropViewSettings *_outputSettings;
    _UIBackdropViewSettings *_savedInputSettingsDuringRenderInContext;
    long long _configuration;
    _UIBackdropEffectView *_backdropEffectView;
    NSString *_groupName;
    UIImage *_filterMaskImage;
    UIView *_grayscaleTintView;
    UIImage *_grayscaleTintMaskImage;
    UIView *_colorTintView;
    UIImage *_colorTintMaskImage;
    UIView *_colorBurnTintView;
    UIImage *_colorBurnTintMaskImage;
    CAFilter *_gaussianBlurFilter;
    CAFilter *_colorSaturateFilter;
    CAFilter *_tintFilter;
    CAFilter *_colorOffsetFilter;
    UIView *_contentView;
    UIView *_darkeningTintView;
    UIImage *_darkeningTintMaskImage;
    long long _maskMode;
    NSMutableSet *_partialMaskViews;
    UIView *_grayscaleTintMaskViewContainer;
    NSMutableDictionary *_grayscaleTintMaskViewMap;
    UIView *_colorTintMaskViewContainer;
    NSMutableDictionary *_colorTintMaskViewMap;
    UIView *_colorBurnTintMaskViewContainer;
    NSMutableDictionary *_colorBurnTintMaskViewMap;
    UIView *_darkeningTintMaskViewContainer;
    NSMutableDictionary *_darkeningTintMaskViewMap;
    UIView *_filterMaskViewContainer;
    NSMutableDictionary *_filterMaskViewMap;
    id _computeAndApplySettingsNotificationObserver;
    double _colorMatrixGrayscaleTintLevel;
    double _colorMatrixGrayscaleTintAlpha;
    UIColor *_colorMatrixColorTint;
    double _colorMatrixColorTintAlpha;
    double _previousBackdropStatisticsRed;
    double _previousBackdropStatisticsGreen;
    double _previousBackdropStatisticsBlue;
    double _previousBackdropStatisticsContrast;
    id <_UIBackdropViewGraphicsQualityChangeDelegate> _graphicsQualityChangeDelegate;
    NSString *__blurQuality;
    double __blurRadius;
    double __saturationDeltaFactor;
}

+ (Class)layerClass;
+ (Class)defaultSettingsClass;
+ (void)setAllBackdropViewsToGraphicsQuality:(long long)arg1;
+ (void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1;
+ (void)restoreColorSettingsForRequester:(id)arg1;
+ (void)suppressColorSettingsForRequester:(id)arg1;
+ (void)restoreColorSettingsForDidBecomeActive:(id)arg1;
+ (void)suppressColorSettingsForWillResignActive:(id)arg1;
+ (void)restoreColorSettingsForRunLoopModePop:(id)arg1;
+ (void)suppressColorSettingsForRunLoopModePush:(id)arg1;
+ (id)allBackdropViews;
@property(nonatomic, setter=setZoomsBack:) _Bool _zoomsBack; // @synthesize _zoomsBack=__zoomsBack;
@property(nonatomic) _Bool _backdropVisible; // @synthesize _backdropVisible=__backdropVisible;
@property(nonatomic) double _saturationDeltaFactor; // @synthesize _saturationDeltaFactor=__saturationDeltaFactor;
@property(nonatomic) double _blurRadius; // @synthesize _blurRadius=__blurRadius;
@property(copy, nonatomic) NSString *_blurQuality; // @synthesize _blurQuality=__blurQuality;
@property(nonatomic) _Bool disablesOccludedBackdropBlurs; // @synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs;
@property(nonatomic) id <_UIBackdropViewGraphicsQualityChangeDelegate> graphicsQualityChangeDelegate; // @synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate;
@property(nonatomic) double previousBackdropStatisticsContrast; // @synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast;
@property(nonatomic) double previousBackdropStatisticsBlue; // @synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue;
@property(nonatomic) double previousBackdropStatisticsGreen; // @synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen;
@property(nonatomic) double previousBackdropStatisticsRed; // @synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed;
@property(nonatomic) _Bool blurRadiusSetOnce; // @synthesize blurRadiusSetOnce=_blurRadiusSetOnce;
@property(nonatomic) _Bool backdropVisibilitySetOnce; // @synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce;
@property(nonatomic) _Bool simulatesMasks; // @synthesize simulatesMasks=_simulatesMasks;
@property(nonatomic) double colorMatrixColorTintAlpha; // @synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha;
@property(retain, nonatomic) UIColor *colorMatrixColorTint; // @synthesize colorMatrixColorTint=_colorMatrixColorTint;
@property(nonatomic) double colorMatrixGrayscaleTintAlpha; // @synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha;
@property(nonatomic) double colorMatrixGrayscaleTintLevel; // @synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel;
@property(nonatomic) _Bool updateMaskViewsForViewReentrancyGuard; // @synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard;
@property(retain, nonatomic) id computeAndApplySettingsNotificationObserver; // @synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver;
@property(nonatomic) _Bool applySettingsAfterLayout; // @synthesize applySettingsAfterLayout=_applySettingsAfterLayout;
@property(retain, nonatomic) NSMutableDictionary *filterMaskViewMap; // @synthesize filterMaskViewMap=_filterMaskViewMap;
@property(retain, nonatomic) UIView *filterMaskViewContainer; // @synthesize filterMaskViewContainer=_filterMaskViewContainer;
@property(retain, nonatomic) NSMutableDictionary *darkeningTintMaskViewMap; // @synthesize darkeningTintMaskViewMap=_darkeningTintMaskViewMap;
@property(retain, nonatomic) UIView *darkeningTintMaskViewContainer; // @synthesize darkeningTintMaskViewContainer=_darkeningTintMaskViewContainer;
@property(retain, nonatomic) NSMutableDictionary *colorBurnTintMaskViewMap; // @synthesize colorBurnTintMaskViewMap=_colorBurnTintMaskViewMap;
@property(retain, nonatomic) UIView *colorBurnTintMaskViewContainer; // @synthesize colorBurnTintMaskViewContainer=_colorBurnTintMaskViewContainer;
@property(retain, nonatomic) NSMutableDictionary *colorTintMaskViewMap; // @synthesize colorTintMaskViewMap=_colorTintMaskViewMap;
@property(retain, nonatomic) UIView *colorTintMaskViewContainer; // @synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer;
@property(retain, nonatomic) NSMutableDictionary *grayscaleTintMaskViewMap; // @synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap;
@property(retain, nonatomic) UIView *grayscaleTintMaskViewContainer; // @synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer;
@property(retain, nonatomic) NSMutableSet *partialMaskViews; // @synthesize partialMaskViews=_partialMaskViews;
@property(nonatomic) long long maskMode; // @synthesize maskMode=_maskMode;
@property(nonatomic) _Bool contentViewAccessorGuard; // @synthesize contentViewAccessorGuard=_contentViewAccessorGuard;
@property(nonatomic) _Bool contentViewAccessed; // @synthesize contentViewAccessed=_contentViewAccessed;
@property(retain, nonatomic) UIImage *darkeningTintMaskImage; // @synthesize darkeningTintMaskImage=_darkeningTintMaskImage;
@property(retain, nonatomic) UIView *darkeningTintView; // @synthesize darkeningTintView=_darkeningTintView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAFilter *colorOffsetFilter; // @synthesize colorOffsetFilter=_colorOffsetFilter;
@property(retain, nonatomic) CAFilter *tintFilter; // @synthesize tintFilter=_tintFilter;
@property(retain, nonatomic) CAFilter *colorSaturateFilter; // @synthesize colorSaturateFilter=_colorSaturateFilter;
@property(retain, nonatomic) CAFilter *gaussianBlurFilter; // @synthesize gaussianBlurFilter=_gaussianBlurFilter;
@property(retain, nonatomic) UIImage *colorBurnTintMaskImage; // @synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage;
@property(retain, nonatomic) UIView *colorBurnTintView; // @synthesize colorBurnTintView=_colorBurnTintView;
@property(retain, nonatomic) UIImage *colorTintMaskImage; // @synthesize colorTintMaskImage=_colorTintMaskImage;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(retain, nonatomic) UIImage *grayscaleTintMaskImage; // @synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(retain, nonatomic) UIImage *filterMaskImage; // @synthesize filterMaskImage=_filterMaskImage;
@property(nonatomic) _Bool autoGroup; // @synthesize autoGroup=_autoGroup;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _UIBackdropEffectView *backdropEffectView; // @synthesize backdropEffectView=_backdropEffectView;
@property(nonatomic) _Bool allowsColorSettingsSuppression; // @synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) _Bool wantsColorSettings; // @synthesize wantsColorSettings=_wantsColorSettings;
@property(nonatomic) _Bool requiresTintViews; // @synthesize requiresTintViews=_requiresTintViews;
@property(nonatomic) _Bool applyingTransition; // @synthesize applyingTransition=_applyingTransition;
@property(nonatomic) _Bool applyingBackdropChanges; // @synthesize applyingBackdropChanges=_applyingBackdropChanges;
@property(nonatomic) _Bool appliesOutputSettingsAutomaticallyEnabledComputesColorSettings; // @synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
@property(nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) _UIBackdropViewSettings *savedInputSettingsDuringRenderInContext; // @synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext;
@property(retain, nonatomic) _UIBackdropViewSettings *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettings; // @synthesize inputSettings=_inputSettings;
@property(nonatomic) double appliesOutputSettingsAnimationDuration; // @synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration;
@property(nonatomic) _Bool appliesOutputSettingsAutomatically; // @synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically;
@property(nonatomic) _Bool computesColorSettings; // @synthesize computesColorSettings=_computesColorSettings;
@property(nonatomic) id <_UIBackdropViewObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool autosizesToFitSuperview; // @synthesize autosizesToFitSuperview=_autosizesToFitSuperview;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setTintOpacity:(double)arg1;
- (void)applySettings:(id)arg1;
- (void)setColorOffsetFilterForSettings:(id)arg1;
- (void)applySettingsWithBuiltInAnimation:(id)arg1;
- (void)computeAndApplySettingsForTransition;
- (void)computeAndApplySettings:(id)arg1;
- (void)delayedComputeAndApplySettings;
- (void)adjustTintImplementationIfNeeded:(id)arg1;
- (void)ensureProperSubviewOrdering;
- (void)addContentViewIfNeededForSettings:(id)arg1;
- (void)addDarkeningTintViewIfNeededForSettings:(id)arg1;
- (void)addColorBurnTintViewIfNeededForSettings:(id)arg1;
- (void)addColorTintViewIfNeededForSettings:(id)arg1;
- (void)addGrayscaleTintViewIfNeededForSettings:(id)arg1;
- (void)addBackdropEffectViewIfNeededForSettings:(id)arg1;
- (void)updateSubviewHierarchyIfNeededForSettings:(id)arg1;
@property(readonly, nonatomic) UIView *effectView; // @dynamic effectView;
- (void)transitionComplete;
- (void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;
- (void)transitionToSettings:(id)arg1;
- (void)transitionToColor:(id)arg1;
- (void)transitionToPrivateStyle:(long long)arg1;
- (void)transitionToStyle:(long long)arg1;
- (void)prepareForTransitionToSettings:(id)arg1;
- (void)_setBlursBackground:(_Bool)arg1;
- (void)setUsesZoom;
- (void)setBackdropVisible:(_Bool)arg1;
- (_Bool)isBackdropVisible;
- (void)setTintFilterForSettings:(id)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (double)saturationDeltaFactor;
- (void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2;
- (void)setBlurQuality:(id)arg1;
- (id)blurQuality;
- (void)setBlurRadius:(double)arg1;
- (double)blurRadius;
- (id)filters;
- (void)_updateFilters;
- (void)removeOverlayBlendModeFromView:(id)arg1;
- (void)applyOverlayBlendModeToView:(id)arg1;
- (void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2;
- (void)removeMaskViews;
- (void)updateMaskViewsForView:(id)arg1;
- (void)updateMaskViewForView:(id)arg1 flag:(long long)arg2;
- (void)setMaskImage:(id)arg1 onLayer:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (void)willCallRenderInContextOnBackdropViewLayer;
- (id)backdropViewLayer;
- (void)setShouldRasterizeEffectsView:(_Bool)arg1;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (void)settingsDidChange:(id)arg1;
- (void)_updateBackdropGroupName;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 privateStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithPrivateStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 autosizesToFitSuperview:(_Bool)arg2 settings:(id)arg3;
- (void)_transitionToGraphicsQuality:(long long)arg1;

@end

