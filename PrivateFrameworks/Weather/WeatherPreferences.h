//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSURLConnectionDelegate-Protocol.h>
#import <Weather/WFTemperatureUnitObserver-Protocol.h>

@class City, NSArray, NSString, WeatherCloudPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate>
{
    NSString *_UUID;
    NSString *_serviceHost;
    _Bool _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id <WeatherPreferencesPersistence> _persistence;
    NSString *_cacheDirectoryPath;
    _Bool _logUnitsAndLocale;
    _Bool _userGroupPrefsLockedWhenInit;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    WeatherCloudPreferences *_cloudPreferences;
}

+ (_Bool)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;
+ (id)serviceDebuggingPath;
+ (id)readInternalDefaultValueForKey:(id)arg1;
+ (id)_getGroupDefaultsFromURLInApp:(id)arg1;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)userDefaultsPersistence;
+ (id)sharedPreferences;
@property(retain) WeatherCloudPreferences *cloudPreferences; // @synthesize cloudPreferences=_cloudPreferences;
@property(nonatomic) _Bool userGroupPrefsLockedWhenInit; // @synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit;
@property(nonatomic) __weak id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void).cxx_destruct;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (_Bool)areCitiesDefault:(id)arg1;
- (void)saveToUbiquitousStore;
- (void)_clearCachedObjects;
- (void)resetLocale;
- (_Bool)serviceDebugging;
@property(nonatomic, getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:) _Bool isLocalWeatherEnabled;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)_cacheDirectoryPath;
- (id)twcLogoURL:(id)arg1;
- (id)twcLogoURL;
- (id)serviceHost;
- (id)UUID;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(_Bool)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (id)loadDefaultSelectedCityID;
- (int)loadDefaultSelectedCity;
- (void)setActiveCity:(unsigned long long)arg1;
- (int)loadActiveCity;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)loadSavedCities;
- (void)setDefaultCities:(id)arg1;
- (id)_defaultCities;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
@property(readonly, nonatomic) City *localWeatherCity;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (_Bool)_defaultsCurrent;
- (_Bool)_defaultsAreValid;
@property(readonly) int userTemperatureUnit;
- (_Bool)isCelsius;
- (void)setCelsius:(_Bool)arg1;
- (_Bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)adjustPrefsForLocalWeatherEnabled:(_Bool)arg1;
- (_Bool)ensureValidSelectedCityID;
- (void)setupUbiquitousStoreIfNeeded;
- (id)initWithPersistence:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
