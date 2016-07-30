//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NTKColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView
{
    _Bool _didDrawOnce;
    float _fillFraction;
    NTKColoringImageView *_fillFractionRing;
}

@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(retain, nonatomic) NTKColoringImageView *fillFractionRing; // @synthesize fillFractionRing=_fillFractionRing;
- (void).cxx_destruct;
- (id)ringColor;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)layoutSubviews;
- (void)_applyForegroundAlpha;
- (id)initWithFrame:(struct CGRect)arg1;

@end

