//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (_Bool)_wantsPlatter;
- (void)layoutSubviews;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (double)_ringGapWidth;
- (double)_ringDiameter;
- (id)initWithFrame:(struct CGRect)arg1;

@end

