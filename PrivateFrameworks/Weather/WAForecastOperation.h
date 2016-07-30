//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class City, NSArray, NSCalendar, NSData, NSDate, NSDictionary, NSError, NSLocale, NSString, WACurrentForecast, WAForecastModel, WFAirQualityConditions, WFDailyForecastRequest, WFForecastRequest, WFHourlyForecastRequest, WFLocation, WFWeatherConditions;

@interface WAForecastOperation : NSOperation
{
    _Bool _isDay;
    _Bool _shouldAttachRawAPIData;
    City *_city;
    WFLocation *_location;
    WACurrentForecast *_currentConditions;
    WFAirQualityConditions *_airQualityConditions;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSDictionary *_links;
    NSError *_error;
    WFWeatherConditions *_currentWeatherConditions;
    NSArray *_dailyForecastConditions;
    NSArray *_hourlyForecastConditions;
    WFDailyForecastRequest *_dailyForecastRequest;
    WFHourlyForecastRequest *_hourlyForecastRequest;
    WFForecastRequest *_todayForecastRequest;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSString *_trackingParameter;
    NSData *_rawAPIData;
}

@property(retain, nonatomic) NSData *rawAPIData; // @synthesize rawAPIData=_rawAPIData;
@property(nonatomic) _Bool shouldAttachRawAPIData; // @synthesize shouldAttachRawAPIData=_shouldAttachRawAPIData;
@property(retain) NSString *trackingParameter; // @synthesize trackingParameter=_trackingParameter;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) _Bool isDay; // @synthesize isDay=_isDay;
@property(retain, nonatomic) WFForecastRequest *todayForecastRequest; // @synthesize todayForecastRequest=_todayForecastRequest;
@property(retain, nonatomic) WFHourlyForecastRequest *hourlyForecastRequest; // @synthesize hourlyForecastRequest=_hourlyForecastRequest;
@property(retain, nonatomic) WFDailyForecastRequest *dailyForecastRequest; // @synthesize dailyForecastRequest=_dailyForecastRequest;
@property(retain, nonatomic) NSArray *hourlyForecastConditions; // @synthesize hourlyForecastConditions=_hourlyForecastConditions;
@property(retain, nonatomic) NSArray *dailyForecastConditions; // @synthesize dailyForecastConditions=_dailyForecastConditions;
@property(retain, nonatomic) WFWeatherConditions *currentWeatherConditions; // @synthesize currentWeatherConditions=_currentWeatherConditions;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *links; // @synthesize links=_links;
@property(retain, nonatomic) NSDate *sunset; // @synthesize sunset=_sunset;
@property(retain, nonatomic) NSDate *sunrise; // @synthesize sunrise=_sunrise;
@property(retain, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property(retain, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property(retain, nonatomic) WFAirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
@property(retain, nonatomic) WACurrentForecast *currentConditions; // @synthesize currentConditions=_currentConditions;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) City *city; // @synthesize city=_city;
- (void).cxx_destruct;
@property(readonly, nonatomic) WAForecastModel *forecastModel;
- (void)_mapReferralLinks;
- (void)_determineSunriseAndSunset;
- (void)_failWithError:(id)arg1;
- (void)main;
- (_Bool)_needsGeolocation;
- (id)initWithLocation:(id)arg1;
- (id)initWithCity:(id)arg1;

@end

