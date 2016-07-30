//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter
{
    NSLocale *_locale;
}

+ (id)convenienceFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (long long)precipitationUnit;
- (double)convertDistanceInMetric:(double)arg1 to:(long long)arg2;
- (double)convertDistanceInImperial:(double)arg1 to:(long long)arg2;
- (id)stringFromDistance:(double)arg1 isDataMetric:(_Bool)arg2;
- (id)stringFromInches:(double)arg1;
- (id)stringFromCentimeters:(double)arg1;
- (id)init;

@end

