//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SAWeatherBarometricPressure, SAWeatherCondition, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>
{
}

+ (id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)currentConditions;
@property(retain, nonatomic) SAWeatherWindSpeed *windSpeed;
@property(copy, nonatomic) NSString *windChill;
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSNumber *uvIndex;
@property(copy, nonatomic) NSString *totalDailyPrecipitation;
@property(copy, nonatomic) NSString *timeZone;
@property(copy, nonatomic) NSString *timeOfObservation;
@property(copy, nonatomic) NSString *temperature;
@property(copy, nonatomic) NSString *sunset;
@property(copy, nonatomic) NSString *sunrise;
@property(copy, nonatomic) NSNumber *percentOfMoonFaceVisible;
@property(copy, nonatomic) NSString *percentHumidity;
@property(copy, nonatomic) NSString *moonPhase;
@property(copy, nonatomic) NSString *heatIndex;
@property(copy, nonatomic) NSString *dewPoint;
@property(copy, nonatomic) NSNumber *dayOfWeek;
@property(retain, nonatomic) SAWeatherCondition *condition;
@property(retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

