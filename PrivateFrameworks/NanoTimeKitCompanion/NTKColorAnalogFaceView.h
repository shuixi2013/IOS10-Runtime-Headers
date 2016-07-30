//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class NTKColorAnalogScene, UIColor;

@interface NTKColorAnalogFaceView : NTKSpriteKitAnalogFaceView
{
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
}

- (void).cxx_destruct;
- (id)_colorComplicationViewForSlot:(id)arg1;
- (void)_enumerateColorComplicationSlotsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_handAlphaForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (struct CGRect)_monogramReferenceFrameForState:(long long)arg1;
- (struct UIEdgeInsets)_monogramKeylinePadding;
- (double)_lisaGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_loadLayoutRules;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (_Bool)_supportsUnadornedSnapshot;
- (void)_loadScene;
- (_Bool)_needsForegroundContainerView;

// Remaining properties
@property(readonly, nonatomic) NTKColorAnalogScene *analogScene; // @dynamic analogScene;

@end

