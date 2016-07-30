//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSHashTable, NSSet;

@interface HKDateCache : NSObject
{
    NSDate *_startOfDayMidnight;
    NSDate *_endOfDayMidnight;
    NSDate *_oneMinuteBeforeEndOfDayMidnight;
    NSDate *_startOfDayNoon;
    NSDate *_endOfDayNoon;
    NSDate *_startOfWeekMidnight;
    NSDate *_endOfWeekMidnight;
    NSDate *_startOfWeekNoon;
    NSDate *_endOfWeekNoon;
    NSDate *_startOfMonthMidnight;
    NSDate *_endOfMonthMidnight;
    NSDate *_startOfMonthNoon;
    NSDate *_endOfMonthNoon;
    NSDate *_startOfYear;
    NSDate *_endOfYear;
    NSDate *_startOfYearNoon;
    NSDate *_endOfYearNoon;
    NSHashTable *_observers;
    NSSet *_weekendDays;
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (void)_flushCacheAndNotifyObservers:(id)arg1;
- (void)flushCache;
- (_Bool)isDayOfWeekNumberOnWeekend:(id)arg1;
- (_Bool)isDateInToday:(id)arg1;
- (id)weekendDays;
- (void)_notifyObserversDidUpdateOnNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)endOfYear:(_Bool)arg1;
- (id)startOfYear:(_Bool)arg1;
- (id)endOfMonth:(_Bool)arg1;
- (id)startOfMonth:(_Bool)arg1;
- (id)endOfWeek:(_Bool)arg1;
- (id)startOfWeek:(_Bool)arg1;
- (id)endOfDay:(_Bool)arg1;
- (id)startOfDay:(_Bool)arg1;
@property(readonly, nonatomic) NSDate *endOfYearMidnight;
@property(readonly, nonatomic) NSDate *startOfYearMidnight;
@property(readonly, nonatomic) NSDate *endOfYearNoon;
@property(readonly, nonatomic) NSDate *startOfYearNoon;
@property(readonly, nonatomic) NSDate *endOfMonthNoon;
@property(readonly, nonatomic) NSDate *startOfMonthNoon;
@property(readonly, nonatomic) NSDate *endOfMonthMidnight;
@property(readonly, nonatomic) NSDate *startOfMonthMidnight;
@property(readonly, nonatomic) NSDate *endOfWeekNoon;
@property(readonly, nonatomic) NSDate *startOfWeekNoon;
@property(readonly, nonatomic) NSDate *endOfWeekMidnight;
@property(readonly, nonatomic) NSDate *startOfWeekMidnight;
@property(readonly, nonatomic) NSDate *endOfDayNoon;
@property(readonly, nonatomic) NSDate *startOfDayNoon;
@property(readonly, nonatomic) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property(readonly, nonatomic) NSDate *endOfDayMidnight;
@property(readonly, nonatomic) NSDate *startOfDayMidnight;
- (void)dealloc;
- (id)init;
- (id)initWithCalendar:(id)arg1;

@end

