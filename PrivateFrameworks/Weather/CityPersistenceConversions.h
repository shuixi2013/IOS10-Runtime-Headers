//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CityPersistenceConversions : NSObject
{
}

+ (id)cloudDictionaryRepresentationOfALCity:(id)arg1;
+ (id)cityFromALCity:(id)arg1;
+ (id)cloudDictionaryRepresentationOfCity:(id)arg1;
+ (id)cityFromCloudDictionary:(id)arg1;
+ (id)weatherDetailsDictionaryFromCity:(id)arg1;
+ (id)hourlyForecastDictionariesFromCity:(id)arg1;
+ (id)dayForecastDictionariesFromCity:(id)arg1;
+ (_Bool)cityDictionaryHasValidCoordinates:(id)arg1;
+ (id)dictionaryRepresentationOfCity:(id)arg1;
+ (id)temperatureFromDictionaryRepresentation:(id)arg1;
+ (id)dictionaryRepresentationOfTemperature:(id)arg1;
+ (_Bool)isCityValid:(id)arg1;
+ (void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2;
+ (void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2;
+ (id)cityFromDictionary:(id)arg1;

@end

