//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Collection.h>

@interface ML3Composer : ML3Collection
{
}

+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (_Bool)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)defaultOrderingTerms;
+ (id)joinClausesForProperty:(id)arg1;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
- (void)updateTrackValues:(id)arg1;
- (id)protocolItem;
- (id)multiverseIdentifier;

@end

