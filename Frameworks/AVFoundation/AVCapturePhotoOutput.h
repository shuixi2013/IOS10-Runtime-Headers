//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, AVCapturePhotoSettings, NSArray;

@interface AVCapturePhotoOutput : AVCaptureOutput
{
    AVCapturePhotoOutputInternal *_internal;
}

+ (id)_copyImagePropertiesAndAddAdditionalMetadataForRawSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (CDStruct_79c71658)maxLivePhotoMovieDimensions;
+ (id)jpegPhotoNSDataRepresentationForSurface:(void *)arg1 size:(unsigned long long)arg2 previewSurface:(const void *)arg3 previewSize:(unsigned long long)arg4 metadata:(id)arg5;
+ (unsigned long long)maxLivePhotoDataSize;
+ (id)dngPhotoNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1 previewImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (id)DNGPhotoDataRepresentationForRawSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (id)jpegPhotoNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1 previewImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (void)initialize;
- (void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 request:(id)arg2 payload:(id)arg3 isOriginalMovie:(_Bool)arg4;
- (void)setFigCaptureSessionSectionProperty:(struct __CFString *)arg1 withHostTime:(CDStruct_1b6d18a9)arg2;
- (void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleRawStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2;
- (void)_handleBracketPreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_photoRequestForUniqueID:(long long)arg1;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(_Bool)arg4;
- (void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3;
- (_Bool)_preparedForPhotoCaptureWithSettings:(id)arg1;
- (id)_sanitizedSettingsForSettings:(id)arg1;
- (id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)_unprepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setIsStillImageStabilizationScene:(_Bool)arg1;
- (void)_setIsHDRScene:(_Bool)arg1;
- (void)_setIsFlashScene:(_Bool)arg1;
- (void)_toggleStillImageStabilizationSceneDetectionBasedOnObserverCountOnSourceDevice:(id)arg1;
- (void)_toggleHDRSceneDetectionBasedOnObserverCountOnSourceDevice:(id)arg1;
- (void)_toggleFlashSceneDetectionBasedOnObserverCountForSourceDevice:(id)arg1;
- (void)_decrementObserverCountForKeyPath:(id)arg1;
- (void)_incrementObserverCountForKeyPath:(id)arg1;
- (void)_updateSceneMonitoringForSourceDevice:(id)arg1;
- (void)_resetLivePhotoMovieProcessingSuspended;
- (void)_resetLivePhotoCaptureSuspended;
- (void)_updateOfflineVISSupportedForSourceDevice:(id)arg1;
- (void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1;
- (void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1;
- (void)_updateSupportedFlashModesForSourceDevice:(id)arg1;
- (void)_updateSupportedHDRModesForSourceDevice:(id)arg1;
- (void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateSupportedPropertiesForSourceDevice:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)setOptimizesImagesForOfflineVideoStabilization:(_Bool)arg1;
- (_Bool)optimizesImagesForOfflineVideoStabilization;
- (_Bool)isImageOptimizationForOfflineVideoStabilizationSupported;
- (CDStruct_1b6d18a9)livePhotoMovieVideoFrameDuration;
- (CDStruct_1b6d18a9)livePhotoMovieDuration;
- (CDStruct_79c71658)livePhotoMovieDimensions;
- (void)setLivePhotoMovieProcessingSuspended:(_Bool)arg1;
- (_Bool)isLivePhotoMovieProcessingSuspended;
@property(nonatomic, getter=isLivePhotoAutoTrimmingEnabled) _Bool livePhotoAutoTrimmingEnabled;
@property(nonatomic, getter=isLivePhotoCaptureSuspended) _Bool livePhotoCaptureSuspended;
@property(nonatomic, getter=isLivePhotoCaptureEnabled) _Bool livePhotoCaptureEnabled;
@property(readonly, nonatomic, getter=isLivePhotoCaptureSupported) _Bool livePhotoCaptureSupported;
@property(readonly, nonatomic, getter=isLensStabilizationDuringBracketedCaptureSupported) _Bool lensStabilizationDuringBracketedCaptureSupported;
@property(readonly, nonatomic) unsigned long long maxBracketedCapturePhotoCount;
@property(nonatomic, getter=isHighResolutionCaptureEnabled) _Bool highResolutionCaptureEnabled;
@property(copy, nonatomic) AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
- (_Bool)flashScene;
@property(readonly, nonatomic) _Bool isFlashScene;
@property(readonly, nonatomic) NSArray *supportedFlashModes;
@property(readonly, nonatomic) _Bool isStillImageStabilizationScene;
- (_Bool)HDRScene;
- (_Bool)isHDRScene;
- (id)supportedHDRModes;
@property(readonly, nonatomic, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
- (id)availableRawPhotoCVPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availableRawPhotoPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availablePhotoCodecTypes;
- (id)availablePhotoCVPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availablePhotoPixelFormatTypes;
- (void)prepareToCapturePhotoWithSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareToCapturePhotoWithSettings:(id)arg1 reclaimResources:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

