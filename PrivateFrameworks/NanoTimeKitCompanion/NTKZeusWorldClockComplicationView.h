//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>

#import <NanoTimeKitCompanion/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKWorldClockComplicationDisplay-Protocol.h>

@class CLKTimeFormatter, NSString, UILabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusWorldClockComplicationView : NTKZeusFramedComplicationView <CLKTimeFormatterObserver, NTKWorldClockComplicationDisplay>
{
    UILabel *_timeLabel;
    UILabel *_cityLabel;
    CLKTimeFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

