//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate, NSString;

@protocol NTKAlarmComplicationDisplay <NTKComplicationDisplay>
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(NSDate *)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;

@optional
- (void)setAlarmComplicationNameText:(NSString *)arg1;
@end

