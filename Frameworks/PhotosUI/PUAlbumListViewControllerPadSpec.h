//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewControllerSpec.h>

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec
{
}

- (_Bool)canShowVirtualCollections;
- (double)maxSearchBarWidth;
- (_Bool)displaysSearchInPopover;
- (_Bool)canDisplaySearchActionInNavigationBar;
- (id)feedViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)albumViewControllerSpec;
- (id)gridViewControllerSpec;
- (long long)albumDeletionConfirmationStyle;
- (id)emptyAlbumPlaceholderImage;
- (id)_nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (_Bool)shouldShowSectionHeaders;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)lateralSectionInsetsForLayoutReferenceSize:(struct CGSize)arg1;
- (void)_getStackSize:(struct CGSize *)arg1 edgeInset:(double *)arg2 forLayoutReferenceSize:(struct CGSize)arg3;
- (_Bool)shouldUseCollageForCloudFeedPlaceholder;
- (_Bool)usesStackTransitionToGrid;
- (long long)cellContentViewLayout;
- (_Bool)showsDeleteButtonOnCellContentView;
- (double)posterSubitemCornerRadius;
- (double)posterSquareCornerRadius;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (double)collageSpacing;
- (long long)collageImageContentMode;
- (struct CGSize)collageImageSize;
- (struct UIOffset)stackPerspectiveOffset;
- (struct UIEdgeInsets)stackPerspectiveInsets;
- (struct UIOffset)stackOffset;
- (struct CGSize)stackSize;
- (id)emptyStackPhotoDecoration;
- (id)stackPhotoDecoration;
- (unsigned long long)stackViewStyle;
- (struct CGSize)imageSize;

@end
