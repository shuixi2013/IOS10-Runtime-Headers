//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import <NanoTimeKitCompanion/NTKWorldClockComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel, NTKDigitalTimeLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKWorldClockSmallModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay>
{
    NTKColoringLabel *_cityLabel;
    NTKDigitalTimeLabel *_timeLabel;
}

- (void).cxx_destruct;
- (void)endTimeTravelAnimated:(_Bool)arg1;
- (void)startTimeTravelAnimated:(_Bool)arg1;
- (void)_updateTimeFont:(_Bool)arg1;
- (id)_timeFontOfSize:(double)arg1 monospace:(_Bool)arg2;
- (id)_timeFontOfSize:(double)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)_layoutContentView;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

