//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer
{
    id <PUReviewAssetProvider> _reviewAssetProvider;
    id <PUPhotoMarkupViewControllerObserver> _markupObserver;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) __weak id <PUPhotoMarkupViewControllerObserver> markupObserver; // @synthesize markupObserver=_markupObserver;
@property(retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
- (void).cxx_destruct;
- (void)_presentMarkupViewControllerForReviewAsset:(id)arg1;
- (void)performUserInteractionTask;

@end

