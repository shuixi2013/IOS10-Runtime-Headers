//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol WeatherPreferencesPersistence <NSObject>
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

