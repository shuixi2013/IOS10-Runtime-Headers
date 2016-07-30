//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PUFiltersToolControllerSpec, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface PUFiltersToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _didPerformInitialScrollToReveal;
    NSArray *_collectionViewConstraints;
    _Bool __needsThumbnails;
    UICollectionView *__collectionView;
    UICollectionViewFlowLayout *__collectionViewLayout;
    NSMutableDictionary *__thumbnailImages;
    unsigned long long __cachedSelectionIndex;
}

@property(nonatomic, setter=_setCachedSelectionIndex:) unsigned long long _cachedSelectionIndex; // @synthesize _cachedSelectionIndex=__cachedSelectionIndex;
@property(retain, nonatomic, setter=_setThumbnailImages:) NSMutableDictionary *_thumbnailImages; // @synthesize _thumbnailImages=__thumbnailImages;
@property(retain, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) _Bool _needsThumbnails; // @synthesize _needsThumbnails=__needsThumbnails;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_scrollToNextEffectIfNecessaryIncludingOffscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_scrollToSelectedEffectAnimated:(_Bool)arg1;
- (id)_selectedIndexPath;
- (void)_updateEffectSelection;
- (void)_updateCollectionViewInsets;
- (void)_updateCollectionView;
- (id)_thumbnailImageForIndex:(unsigned long long)arg1;
- (void)_saveThumbnail:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_setNeedsThumbnails;
- (void)_loadStateFromModelAnimated:(_Bool)arg1;
- (void)_changeModelEffect:(id)arg1 explicitly:(_Bool)arg2;
- (void)photoEditModelDidChange;
- (void)specDidChange;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (id)localizedResetToolActionTitle;
- (_Bool)canResetToDefaultValue;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (id)localizedName;
- (void)setDelegate:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PUFiltersToolControllerSpec *spec; // @dynamic spec;
@property(readonly) Class superclass;

@end

