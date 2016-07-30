//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableProvenance, HDCodableSource, NSMutableArray, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying>
{
    NSMutableArray *_activityCaches;
    NSMutableArray *_binarySamples;
    NSMutableArray *_categorySamples;
    NSMutableArray *_cdaDocumentSamples;
    NSMutableArray *_correlations;
    NSMutableArray *_deletedSamples;
    NSMutableArray *_fitnessFriendAchievements;
    NSMutableArray *_fitnessFriendActivitySnapshots;
    NSMutableArray *_fitnessFriendWorkouts;
    NSMutableArray *_locationSeries;
    HDCodableProvenance *_provenance;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

@property(retain, nonatomic) HDCodableProvenance *provenance; // @synthesize provenance=_provenance;
@property(retain, nonatomic) NSMutableArray *fitnessFriendWorkouts; // @synthesize fitnessFriendWorkouts=_fitnessFriendWorkouts;
@property(retain, nonatomic) NSMutableArray *fitnessFriendAchievements; // @synthesize fitnessFriendAchievements=_fitnessFriendAchievements;
@property(retain, nonatomic) NSMutableArray *fitnessFriendActivitySnapshots; // @synthesize fitnessFriendActivitySnapshots=_fitnessFriendActivitySnapshots;
@property(retain, nonatomic) NSMutableArray *cdaDocumentSamples; // @synthesize cdaDocumentSamples=_cdaDocumentSamples;
@property(retain, nonatomic) NSMutableArray *locationSeries; // @synthesize locationSeries=_locationSeries;
@property(retain, nonatomic) NSMutableArray *deletedSamples; // @synthesize deletedSamples=_deletedSamples;
@property(retain, nonatomic) NSMutableArray *binarySamples; // @synthesize binarySamples=_binarySamples;
@property(retain, nonatomic) NSMutableArray *activityCaches; // @synthesize activityCaches=_activityCaches;
@property(retain, nonatomic) NSMutableArray *correlations; // @synthesize correlations=_correlations;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) NSMutableArray *quantitySamples; // @synthesize quantitySamples=_quantitySamples;
@property(retain, nonatomic) NSMutableArray *categorySamples; // @synthesize categorySamples=_categorySamples;
@property(retain, nonatomic) HDCodableSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProvenance;
- (id)fitnessFriendWorkoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendWorkoutsCount;
- (void)addFitnessFriendWorkouts:(id)arg1;
- (void)clearFitnessFriendWorkouts;
- (id)fitnessFriendAchievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendAchievementsCount;
- (void)addFitnessFriendAchievements:(id)arg1;
- (void)clearFitnessFriendAchievements;
- (id)fitnessFriendActivitySnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendActivitySnapshotsCount;
- (void)addFitnessFriendActivitySnapshots:(id)arg1;
- (void)clearFitnessFriendActivitySnapshots;
- (id)cdaDocumentSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdaDocumentSamplesCount;
- (void)addCdaDocumentSamples:(id)arg1;
- (void)clearCdaDocumentSamples;
- (id)locationSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSeriesCount;
- (void)addLocationSeries:(id)arg1;
- (void)clearLocationSeries;
- (id)deletedSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedSamplesCount;
- (void)addDeletedSamples:(id)arg1;
- (void)clearDeletedSamples;
- (id)binarySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)binarySamplesCount;
- (void)addBinarySamples:(id)arg1;
- (void)clearBinarySamples;
- (id)activityCachesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityCachesCount;
- (void)addActivityCaches:(id)arg1;
- (void)clearActivityCaches;
- (id)correlationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)correlationsCount;
- (void)addCorrelations:(id)arg1;
- (void)clearCorrelations;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)addWorkouts:(id)arg1;
- (void)clearWorkouts;
- (id)quantitySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySamplesCount;
- (void)addQuantitySamples:(id)arg1;
- (void)clearQuantitySamples;
- (id)categorySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorySamplesCount;
- (void)addCategorySamples:(id)arg1;
- (void)clearCategorySamples;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasSourceBundleIdentifier;
- (id)decodedObjects;
- (unsigned long long)count;
- (_Bool)isEquivalentToObjectCollection:(id)arg1;

@end

