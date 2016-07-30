//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject
{
}

+ (void)batchFetchScenesByAssetUUIDWithAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 assetUUID:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4;
- (id)debugLogDescription;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(nonatomic) int sceneIdentifier; // @dynamic sceneIdentifier;

@end

