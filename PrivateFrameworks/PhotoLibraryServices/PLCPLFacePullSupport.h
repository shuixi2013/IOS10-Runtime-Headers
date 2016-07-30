//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol PLSyncContext, PLSyncableAsset;

@interface PLCPLFacePullSupport : NSObject
{
    id <PLSyncContext> _syncContext;
    NSMutableSet *_existingFaces;
    id <PLSyncableAsset> _currentAsset;
}

+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inPhotoLibrary:(id)arg3;
- (void)applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)applyRejectedPeopleFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)applyFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (id)findExistingFaceMatchingRef:(id)arg1;
- (id)findOrMakeFaceMatchingRef:(id)arg1;
- (id)detectedFaceFromFaceRef:(id)arg1 algorithmVersion:(long long)arg2;
- (id)detectedFacesFromFaces:(id)arg1 algorithmVersion:(long long)arg2;
- (id)detectedFacesFromAssetChange:(id)arg1;
- (void)setupExistingFacesForAsset:(id)arg1 withAssetChange:(id)arg2;
- (_Bool)shouldSkipAssetChange:(id)arg1;
- (void)applyFacesChangesFromAssetChange:(id)arg1;
- (void)_cleanUpFaceNotIn:(id)arg1;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;

@end

