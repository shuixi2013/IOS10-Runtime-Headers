//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class AVPlayer, NSHashTable, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlayPauseBarItemsControllerChange;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>
{
    _Bool __isPerformingChanges;
    _Bool __isUpdating;
    _Bool __needsUpdateVideoPlayer;
    _Bool __needsUpdatePlayPauseState;
    _Bool __needsUpdateAVPlayer;
    _Bool __needsUpdateCurrentPlaybackTimeAndDuration;
    PUPlayPauseBarItemsControllerChange *__currentChange;
    PUBrowsingViewModel *_viewModel;
    long long _playPauseState;
    NSObject<OS_dispatch_queue> *__observerQueue;
    NSHashTable *__changeObservers;
    PUBrowsingVideoPlayer *__videoPlayer;
    AVPlayer *__avPlayer;
    id __timeObservationToken;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property(retain, nonatomic, setter=_setTimeObservationToken:) id _timeObservationToken; // @synthesize _timeObservationToken=__timeObservationToken;
@property(retain, nonatomic, setter=_setAVPlayer:) AVPlayer *_avPlayer; // @synthesize _avPlayer=__avPlayer;
@property(retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property(nonatomic, setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:) _Bool _needsUpdateCurrentPlaybackTimeAndDuration; // @synthesize _needsUpdateCurrentPlaybackTimeAndDuration=__needsUpdateCurrentPlaybackTimeAndDuration;
@property(nonatomic, setter=_setNeedsUpdateAVPlayer:) _Bool _needsUpdateAVPlayer; // @synthesize _needsUpdateAVPlayer=__needsUpdateAVPlayer;
@property(nonatomic, setter=_setNeedsUpdatePlayPauseState:) _Bool _needsUpdatePlayPauseState; // @synthesize _needsUpdatePlayPauseState=__needsUpdatePlayPauseState;
@property(nonatomic, setter=_setNeedsUpdateVideoPlayer:) _Bool _needsUpdateVideoPlayer; // @synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer;
@property(nonatomic, setter=_setUpdating:) _Bool _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property(nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // @synthesize _observerQueue=__observerQueue;
@property(nonatomic, setter=_setPlaybackDuration:) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic, setter=_setCurrentPlaybackTime:) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic, setter=_setPlayPauseState:) long long playPauseState; // @synthesize playPauseState=_playPauseState;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
- (void)_invalidateCurrentPlaybackTimeAndDuration;
- (void)_updateAVPlayerIfNeeded;
- (void)_invalidateAVPlayer;
- (void)_updatePlayPauseStateIfNeeded;
- (void)_invalidatePlayPauseState;
- (void)_updateVideoPlayerIfNeeded;
- (void)_invalidateVideoPlayer;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_assertInsideUpdate;
- (void)_assertInsideChangeBlock;
- (void)_publishChanges;
@property(readonly, nonatomic) PUPlayPauseBarItemsControllerChange *_currentChange; // @synthesize _currentChange=__currentChange;
- (void)_stopObservingAVPlayer;
- (void)_startObservingAVPlayer;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

