//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class WorldClockCity;

@interface NTKWorldClockComplication : NTKComplication
{
    WorldClockCity *_city;
}

+ (_Bool)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)_allCities;
@property(readonly, nonatomic) WorldClockCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)localizedDetailText;

@end

