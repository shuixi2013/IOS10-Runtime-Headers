//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlColorPickerViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUColorPaletteView, HUColorPickerView, HUQuickControlCircleButton, HUQuickControlSegmentedControl, HUQuickControlSimpleViewProfile, NSLayoutConstraint, NSNumber, NSString;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlInteractiveView>
{
    id <HUQuickControlColorViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    HUQuickControlSimpleViewProfile *_profile;
    HFColorPaletteColor *_selectedColor;
    unsigned long long _activeMode;
    NSNumber *_indexOfEditingColorPaletteColor;
    HUColorPaletteView *_colorPaletteView;
    HUColorPickerView *_colorPickerView;
    HUQuickControlCircleButton *_switchButton;
    HUQuickControlSegmentedControl *_colorPickerModeSegmentedControl;
    NSLayoutConstraint *_switchButtonWidthConstraint;
    NSLayoutConstraint *_switchButtonHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *switchButtonHeightConstraint; // @synthesize switchButtonHeightConstraint=_switchButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *switchButtonWidthConstraint; // @synthesize switchButtonWidthConstraint=_switchButtonWidthConstraint;
@property(retain, nonatomic) HUQuickControlSegmentedControl *colorPickerModeSegmentedControl; // @synthesize colorPickerModeSegmentedControl=_colorPickerModeSegmentedControl;
@property(retain, nonatomic) HUQuickControlCircleButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) HUColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) HUColorPaletteView *colorPaletteView; // @synthesize colorPaletteView=_colorPaletteView;
@property(retain, nonatomic) NSNumber *indexOfEditingColorPaletteColor; // @synthesize indexOfEditingColorPaletteColor=_indexOfEditingColorPaletteColor;
@property(nonatomic) unsigned long long activeMode; // @synthesize activeMode=_activeMode;
@property(retain, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) HUQuickControlSimpleViewProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak id <HUQuickControlColorViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
@property(retain, nonatomic) id value;
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_configureConstraints;
- (double)_circleRadius;
- (double)_switchButtonFontSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateColorPickerModeSwitchView;
- (void)_createColorPickerModeSegmentedControlIfNecessary;
- (void)_switchButtonTapped:(id)arg1;
- (void)_updateSwitchButtonText;
- (void)_updateSwitchButtonEnabledState;
- (id)_allControlViews;
@property(readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long sizeSubclass;
@property(readonly) Class superclass;

@end
