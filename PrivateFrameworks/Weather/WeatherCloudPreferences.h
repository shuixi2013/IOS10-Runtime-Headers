//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/WeatherCloudPersistenceDelegate-Protocol.h>

@class NSString, WeatherPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate>
{
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    id <WeatherPreferencesPersistence> _cloudStore;
    WeatherPreferences *_localPreferences;
}

@property(retain) WeatherPreferences *localPreferences; // @synthesize localPreferences=_localPreferences;
@property(retain) id <WeatherPreferencesPersistence> cloudStore; // @synthesize cloudStore=_cloudStore;
@property(nonatomic) __weak id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void).cxx_destruct;
- (_Bool)shouldWriteCitiesToCloud:(id)arg1;
- (void)saveCitiesToCloud:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(_Bool)arg2;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(_Bool)arg3;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (_Bool)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (id)cloudCityRepresentationsFromLegacyRepresentations;
- (id)cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (_Bool)legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (id)cloudRepresentationFromCities:(id)arg1;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (id)initWithLocalPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

