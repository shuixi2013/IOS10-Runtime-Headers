//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSArray, NSNumberFormatter, NSString, NSTimer, UIButton, UILabel, UISlider, _UISettings;

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    _Bool _enabled;
    _Bool _showsValueLabel;
    int _alignment;
    float _increment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    UISlider *_sliderControl;
    UILabel *_titleLabel;
    NSNumberFormatter *_valueLabelFormatter;
    NSArray *_valueLabelStrings;
    UILabel *_valueLabel;
    UIButton *_upIncrementButton;
    UIButton *_downIncrementButton;
    NSArray *_subviewConstraints;
    NSTimer *_buttonRepeatTimer;
    CDStruct_dcaade61 _valueChangePublishTTL;
}

+ (id)zeroToOneSliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;
+ (id)sliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5;
+ (id)slider;
+ (struct CGRect)defaultFrame;
@property(nonatomic) CDStruct_dcaade61 valueChangePublishTTL; // @synthesize valueChangePublishTTL=_valueChangePublishTTL;
@property(retain, nonatomic) NSTimer *buttonRepeatTimer; // @synthesize buttonRepeatTimer=_buttonRepeatTimer;
@property(retain, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property(retain, nonatomic) UIButton *downIncrementButton; // @synthesize downIncrementButton=_downIncrementButton;
@property(retain, nonatomic) UIButton *upIncrementButton; // @synthesize upIncrementButton=_upIncrementButton;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) float increment; // @synthesize increment=_increment;
@property(copy, nonatomic) NSArray *valueLabelStrings; // @synthesize valueLabelStrings=_valueLabelStrings;
@property(retain, nonatomic) NSNumberFormatter *valueLabelFormatter; // @synthesize valueLabelFormatter=_valueLabelFormatter;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UISlider *sliderControl; // @synthesize sliderControl=_sliderControl;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool showsValueLabel; // @synthesize showsValueLabel=_showsValueLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)layoutSubviews;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float value; // @dynamic value;
- (id)makeValueLabel;
- (id)makeTitleLabel;
- (id)makeIncrementButtonWithAction:(SEL)arg1 imageName:(id)arg2;
- (id)makeSliderControl;
- (void)downIncrementAction:(id)arg1;
- (void)downIncrement;
- (void)upIncrementAction:(id)arg1;
- (void)upIncrement;
- (void)stopIncrementRepeatAction;
- (void)publishValueChanged;
- (void)valueChanged:(id)arg1;
- (void)updateValueLabel;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) float maximumValue; // @dynamic maximumValue;
@property(nonatomic) float minimumValue; // @dynamic minimumValue;
@property(readonly) Class superclass;

@end

