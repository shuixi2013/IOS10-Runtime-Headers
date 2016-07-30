//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSMutableDictionary, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource
{
    NSMutableDictionary *_layoutItemByAssetCache;
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
}

@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (id)inputForItem:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (_Bool)containsMultipleItems;
- (_Bool)containsAnyItems;
- (id)startingAssetReference;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;

@end

