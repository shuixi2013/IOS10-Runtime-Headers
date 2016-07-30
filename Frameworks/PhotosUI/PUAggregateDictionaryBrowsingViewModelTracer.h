//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSHashTable, NSString, PUBrowsingViewModel;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject <PUBrowsingViewModelChangeObserver>
{
    _Bool __isPerformingChanges;
    _Bool __isPerformingUpdate;
    _Bool __needsUpdateViewedAsset;
    _Bool __needsUpdateViewedAssetLongEnough;
    _Bool __needsUpdatePlayingVideo;
    _Bool __didScheduleCurrentAssetChange;
    _Bool __isApplicationActive;
    _Bool __viewedAssetLongEnough;
    _Bool __didScheduleViewUpdate;
    _Bool __isPlayingVideo;
    _Bool __isPlayingStreamedVideo;
    _Bool __isStreamedVideoActuallyPlaying;
    _Bool __isStreamedVideoStalled;
    _Bool __needsUpdateOneUpSessionActive;
    _Bool __oneUpSessionActive;
    PUBrowsingViewModel *_browsingViewModel;
    NSHashTable *__viewingContexts;
    id <PUDisplayAsset> __viewedAsset;
    double __viewedAssetStartTime;
    double __oneUpSessionStartTime;
}

@property(nonatomic, setter=_setOneUpSessionStartTime:) double _oneUpSessionStartTime; // @synthesize _oneUpSessionStartTime=__oneUpSessionStartTime;
@property(nonatomic, setter=_setOneUpSessionActive:) _Bool _oneUpSessionActive; // @synthesize _oneUpSessionActive=__oneUpSessionActive;
@property(nonatomic, setter=_setNeedsUpdateOneUpSessionActive:) _Bool _needsUpdateOneUpSessionActive; // @synthesize _needsUpdateOneUpSessionActive=__needsUpdateOneUpSessionActive;
@property(nonatomic, setter=_setStreamedVideoStalled:) _Bool _isStreamedVideoStalled; // @synthesize _isStreamedVideoStalled=__isStreamedVideoStalled;
@property(nonatomic, setter=_setStreamedVideoActuallyPlaying:) _Bool _isStreamedVideoActuallyPlaying; // @synthesize _isStreamedVideoActuallyPlaying=__isStreamedVideoActuallyPlaying;
@property(nonatomic, setter=_setPlayingStreamedVideo:) _Bool _isPlayingStreamedVideo; // @synthesize _isPlayingStreamedVideo=__isPlayingStreamedVideo;
@property(nonatomic, setter=_setPlayingVideo:) _Bool _isPlayingVideo; // @synthesize _isPlayingVideo=__isPlayingVideo;
@property(nonatomic, setter=_setDidScheduleViewUpdate:) _Bool _didScheduleViewUpdate; // @synthesize _didScheduleViewUpdate=__didScheduleViewUpdate;
@property(nonatomic, setter=_setViewedAssetLongEnough:) _Bool _viewedAssetLongEnough; // @synthesize _viewedAssetLongEnough=__viewedAssetLongEnough;
@property(nonatomic, setter=_setViewedAssetStartTime:) double _viewedAssetStartTime; // @synthesize _viewedAssetStartTime=__viewedAssetStartTime;
@property(retain, nonatomic, setter=_setViewedAsset:) id <PUDisplayAsset> _viewedAsset; // @synthesize _viewedAsset=__viewedAsset;
@property(nonatomic, setter=_setApplicationActive:) _Bool _isApplicationActive; // @synthesize _isApplicationActive=__isApplicationActive;
@property(nonatomic, setter=_setDidScheduleCurrentAssetChange:) _Bool _didScheduleCurrentAssetChange; // @synthesize _didScheduleCurrentAssetChange=__didScheduleCurrentAssetChange;
@property(nonatomic, setter=_setNeedsUpdatePlayingVideo:) _Bool _needsUpdatePlayingVideo; // @synthesize _needsUpdatePlayingVideo=__needsUpdatePlayingVideo;
@property(nonatomic, setter=_setNeedsUpdateViewedAssetLongEnough:) _Bool _needsUpdateViewedAssetLongEnough; // @synthesize _needsUpdateViewedAssetLongEnough=__needsUpdateViewedAssetLongEnough;
@property(nonatomic, setter=_setNeedsUpdateViewedAsset:) _Bool _needsUpdateViewedAsset; // @synthesize _needsUpdateViewedAsset=__needsUpdateViewedAsset;
@property(nonatomic, setter=_setPerformingUpdate:) _Bool _isPerformingUpdate; // @synthesize _isPerformingUpdate=__isPerformingUpdate;
@property(nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(readonly, nonatomic) NSHashTable *_viewingContexts; // @synthesize _viewingContexts=__viewingContexts;
@property(readonly, nonatomic) __weak PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void).cxx_destruct;
- (void)_handleScheduledCurrentAssetChange;
- (void)_scheduleCurrentAssetChange;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updatePlayingVideoIfNeeded;
- (void)_invalidatePlayingVideo;
- (void)_updateViewedAssetLongEnoughIfNeeded;
- (void)_invalidateViewedAssetLongEnough;
- (void)_updateViewedAssetIfNeeded;
- (void)_invalidateViewedAsset;
- (void)_updateOneUpSessionActive;
- (void)_invalidateOneUpSessionActive;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_handleScheduledViewUpdate;
- (void)_scheduleViewUpdate;
- (void)_assertInsideChangeBlock;
- (void)removeViewingContext:(id)arg1;
- (void)addViewingContext:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)initWithBrowsingViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

