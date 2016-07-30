//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class NSString, NSURL, PHLivePhoto, PLPhotoEditModel, PLPhotoEditRenderer, PUVideoEditRenderer;
@protocol OS_dispatch_queue, PUPhotoEditLivePhotoControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditLivePhotoController : NSObject <PUViewModelChangeObserver>
{
    struct {
        _Bool respondsToRenderedLivePhotoDidChange;
        _Bool respondsToRenderingProgressDidChange;
        _Bool respondsToIsRenderingDidChange;
        _Bool respondsToShouldRender;
    } _delegateFlags;
    id _notificationObserver;
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Bool _rendering;
    _Bool __needsUpdateRenderedLivePhoto;
    float _renderingProgress;
    PHLivePhoto *_baseLivePhoto;
    PLPhotoEditRenderer *_photoEditRenderer;
    PHLivePhoto *_renderedLivePhoto;
    id <PUPhotoEditLivePhotoControllerDelegate> _delegate;
    PLPhotoEditModel *__lastRenderedPhotoEditModel;
    PHLivePhoto *__lastRenderedLivePhoto;
    PUVideoEditRenderer *__videoRenderer;
    NSURL *__renderURL;
}

@property(retain, nonatomic, setter=_setRenderURL:) NSURL *_renderURL; // @synthesize _renderURL=__renderURL;
@property(nonatomic, setter=_setNeedsUpdateRenderedLivePhoto:) _Bool _needsUpdateRenderedLivePhoto; // @synthesize _needsUpdateRenderedLivePhoto=__needsUpdateRenderedLivePhoto;
@property(retain, nonatomic, setter=_setVideoRenderer:) PUVideoEditRenderer *_videoRenderer; // @synthesize _videoRenderer=__videoRenderer;
@property(retain, nonatomic, setter=_setLastRenderedLivePhoto:) PHLivePhoto *_lastRenderedLivePhoto; // @synthesize _lastRenderedLivePhoto=__lastRenderedLivePhoto;
@property(copy, nonatomic, setter=_setLastRenderedPhotoEditModel:) PLPhotoEditModel *_lastRenderedPhotoEditModel; // @synthesize _lastRenderedPhotoEditModel=__lastRenderedPhotoEditModel;
@property(nonatomic) __weak id <PUPhotoEditLivePhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isRendering, setter=_setRendering:) _Bool rendering; // @synthesize rendering=_rendering;
@property(nonatomic, setter=_setRenderingProgress:) float renderingProgress; // @synthesize renderingProgress=_renderingProgress;
@property(retain, nonatomic, setter=_setRenderedLivePhoto:) PHLivePhoto *renderedLivePhoto; // @synthesize renderedLivePhoto=_renderedLivePhoto;
@property(readonly, nonatomic) PLPhotoEditRenderer *photoEditRenderer; // @synthesize photoEditRenderer=_photoEditRenderer;
@property(readonly, nonatomic) PHLivePhoto *baseLivePhoto; // @synthesize baseLivePhoto=_baseLivePhoto;
- (void).cxx_destruct;
- (void)_handleRenderCompletionWithSuccess:(_Bool)arg1 error:(id)arg2 photoEditModel:(id)arg3;
- (void)_updateRenderedLivePhotoIfNeeded;
- (void)_invalidateRenderedLivePhoto;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)renderIfNeeded;
- (id)initWithBaseLivePhoto:(id)arg1 editRenderer:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

