//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUImageTileViewController.h>

#import <PhotosUI/PHLivePhotoViewDelegate-Protocol.h>
#import <PhotosUI/PHLivePhotoViewDelegatePrivate-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class NSString, PHLivePhotoView;
@protocol PUIrisImageTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, _UISettingsKeyObserver>
{
    struct {
        _Bool respondsToDidBeginPlaying;
        _Bool respondsToWillEndPlaying;
        _Bool respondsToDidEndPlaying;
        _Bool respondsToDidEndVitality;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToDelegateForGestureRecognizer;
    } _delegateFlags;
    _Bool _canLoadIrisContent;
    _Bool __needUpdateIrisContent;
    id <PUIrisImageTileViewControllerDelegate> _delegate;
    PHLivePhotoView *__livePhotoView;
}

@property(nonatomic, setter=_setNeedsUpdateIrisContent:) _Bool _needUpdateIrisContent; // @synthesize _needUpdateIrisContent=__needUpdateIrisContent;
@property(readonly, nonatomic) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(nonatomic) _Bool canLoadIrisContent; // @synthesize canLoadIrisContent=_canLoadIrisContent;
@property(nonatomic) __weak id <PUIrisImageTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_updatePlaybackGestureRecognizer;
- (void)_playVitalityHintIfNeeded;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_playerViewReadinessDidChange;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)_assetFocusValueDidChange;
- (void)_updateIrisContentIfNeeded;
- (void)_invalidateIrisContent;
- (void)_updateIrisIfNeeded;
- (_Bool)_needsIrisUpdate;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_setLivePhotoView:(id)arg1;
- (void)didChangeAnimating;
- (void)assetViewModelDidChange;
- (void)setAssetViewModel:(id)arg1;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

