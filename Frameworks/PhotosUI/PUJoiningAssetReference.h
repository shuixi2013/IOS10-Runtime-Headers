//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetReference.h>

__attribute__((visibility("hidden")))
@interface PUJoiningAssetReference : PUAssetReference
{
    long long _hintDataSourceIndex;
    PUAssetReference *_containedAssetReference;
}

@property(readonly, nonatomic) PUAssetReference *containedAssetReference; // @synthesize containedAssetReference=_containedAssetReference;
@property(readonly, nonatomic) long long hintDataSourceIndex; // @synthesize hintDataSourceIndex=_hintDataSourceIndex;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(long long)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end

