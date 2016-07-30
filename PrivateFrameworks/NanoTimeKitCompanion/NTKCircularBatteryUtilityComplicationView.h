//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitySmallRingTextComplicationView.h>

#import <NanoTimeKitCompanion/NTKBatteryComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularBatteryUtilityComplicationView : NTKUtilitySmallRingTextComplicationView <NTKBatteryComplicationDisplay>
{
    long long _state;
}

- (void)_updateRingColor;
- (void)setState:(long long)arg1;
- (void)setLevel:(float)arg1;
- (void)_applyForegroundAlpha;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

