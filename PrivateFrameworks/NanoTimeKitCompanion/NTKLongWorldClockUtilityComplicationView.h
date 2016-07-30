//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>

#import <NanoTimeKitCompanion/NTKWorldClockComplicationDisplay-Protocol.h>

@class NSString, NTKDigitalTimeLabel, NTKTimeOfDayLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKLongWorldClockUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKWorldClockComplicationDisplay>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKTimeOfDayLabel *_timeTravelLabel;
    double _cachedTimeWidth;
    _Bool _timeTravel;
}

- (void).cxx_destruct;
- (void)_handleLocaleChange;
- (void)endTimeTravelAnimated:(_Bool)arg1;
- (void)startTimeTravelAnimated:(_Bool)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setLongCity:(id)arg1;
- (void)_applyForegroundAlpha;
- (double)_widthThatFits;
- (void)_updateTime;
- (void)_updateCachedTimeWidth;
- (void)_updateContentForMaxSizeChange;
- (void)_updateLocale;
- (void)setForegroundColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)fontSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

