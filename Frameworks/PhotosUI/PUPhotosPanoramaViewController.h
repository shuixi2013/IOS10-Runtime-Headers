//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController
{
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PHAssetCollection *_userPanoAlbum;
}

@property(retain, nonatomic) PHAssetCollection *userPanoAlbum; // @synthesize userPanoAlbum=_userPanoAlbum;
@property(retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec; // @synthesize panoramaSpec=_panoramaSpec;
- (void).cxx_destruct;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
- (void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (_Bool)canBeginStackCollapseTransition;
- (long long)cellFillMode;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)_hasScrollableContent;
- (_Bool)wantsGlobalFooter;
- (void)updateLayoutMetrics;
- (_Bool)updateSpec;
- (id)newGridLayout;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PUSectionedGridLayout *mainGridLayout; // @dynamic mainGridLayout;

@end

