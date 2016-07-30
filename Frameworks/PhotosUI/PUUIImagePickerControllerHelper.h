//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUPhotosGridDownloadHelper, PUPhotosGridViewController;

__attribute__((visibility("hidden")))
@interface PUUIImagePickerControllerHelper : NSObject
{
    PUPhotosGridDownloadHelper *_downloadHelper;
    PUPhotosGridViewController *_gridViewController;
}

+ (id)assetsFilterPredicateForMediaTypes:(id)arg1;
+ (id)collectionsFilterPredicateForMediaTypes:(id)arg1;
+ (int)albumFilterForMediaTypes:(id)arg1;
+ (unsigned long long)imagePickerTypesForMediaTypes:(id)arg1;
+ (id)imagePickerControllerForViewController:(id)arg1;
+ (id)albumListViewControllerSpec;
+ (id)gridViewControllerSpec;
@property(readonly, nonatomic) __weak PUPhotosGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (void)updateSessionInfo;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(_Bool)arg2 expectsLivePhoto:(_Bool)arg3;
- (void)cancelCurrentAssetDownload;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)initWithGridViewController:(id)arg1;

@end

