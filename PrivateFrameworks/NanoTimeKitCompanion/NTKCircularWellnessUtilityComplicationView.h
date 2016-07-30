//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    _Bool _animationsAllowed;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (id)_ringColor;
- (void)_applyForegroundAlpha;
- (void)_layoutContentView;
- (void)_updateRingColors;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

