//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUHorizontalTiledCollectionViewLayoutDelegate-Protocol.h>

@class NSIndexPath, NSString, PUPhotosSharingCollectionViewLayout, UICollectionView;

@protocol PUPhotosSharingCollectionViewLayoutDelegate <PUHorizontalTiledCollectionViewLayoutDelegate>
- (void)layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 itemAtIndexPath:(NSIndexPath *)arg3 didChangeToVisibleFrame:(struct CGRect)arg4;
- (double)layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 bottomBadgeInsetforItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 sizeForBadgeViewOfKind:(NSString *)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
@end

