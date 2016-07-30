//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, GEOAlmanac, NSDate;

@interface NTKSolarTimeModel : NSObject
{
    _Bool _usePlaceholderData;
    _Bool _dependentValuesNeedUpdate;
    CLLocation *_referenceLocation;
    NSDate *_referenceDate;
    NSDate *_startDateForReferenceDate;
    NSDate *_endDateForReferenceDate;
    NSDate *_localSolarMidnightDate;
    double _effectiveSolarDayLength;
    GEOAlmanac *_sunriseSunsetSolarAlmanac;
    GEOAlmanac *_dawnDuskSolarAlmanac;
}

@property(retain, nonatomic) GEOAlmanac *dawnDuskSolarAlmanac; // @synthesize dawnDuskSolarAlmanac=_dawnDuskSolarAlmanac;
@property(retain, nonatomic) GEOAlmanac *sunriseSunsetSolarAlmanac; // @synthesize sunriseSunsetSolarAlmanac=_sunriseSunsetSolarAlmanac;
@property(nonatomic) _Bool dependentValuesNeedUpdate; // @synthesize dependentValuesNeedUpdate=_dependentValuesNeedUpdate;
@property(nonatomic) double effectiveSolarDayLength; // @synthesize effectiveSolarDayLength=_effectiveSolarDayLength;
@property(retain, nonatomic) NSDate *localSolarMidnightDate; // @synthesize localSolarMidnightDate=_localSolarMidnightDate;
@property(retain, nonatomic) NSDate *endDateForReferenceDate; // @synthesize endDateForReferenceDate=_endDateForReferenceDate;
@property(retain, nonatomic) NSDate *startDateForReferenceDate; // @synthesize startDateForReferenceDate=_startDateForReferenceDate;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(nonatomic) _Bool usePlaceholderData; // @synthesize usePlaceholderData=_usePlaceholderData;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (void).cxx_destruct;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)arg1;
- (void)_updateDependentValues;
- (id)dateForPercentageThroughPeriod:(double)arg1;
- (double)percentageThroughPeriodForDate:(id)arg1;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (_Bool)includesDate:(id)arg1;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2;
- (id)init;

@end

