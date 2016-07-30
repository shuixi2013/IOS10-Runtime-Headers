//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, CIFilter, CIImage, EAGLContext, NSDictionary, PLPhotoEditModel;
@protocol OS_dispatch_queue;

@interface PLPhotoEditRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *__renderingQueue;
    CIContext *_generatingCIContext;
    CIContext *_drawingCIContext;
    EAGLContext *_lastUsedEAGLContext;
    CIFilter *_effectFilter;
    CIFilter *_smartToneFilter;
    CIFilter *_localLightFilter;
    CIFilter *_smartColorFilter;
    CIFilter *_smartBWFilter;
    CIFilter *_faceBalanceFilter;
    CIFilter *_redEyeFilter;
    CIImage *_cachedEditedImage;
    PLPhotoEditModel *_photoEditModelInCachedEditedImage;
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    NSDictionary *_smartBWStatisticsInCachedAdjustments;
    _Bool _useNewestLocalLightFilter;
    CIImage *_originalImage;
    PLPhotoEditModel *_photoEditModel;
    unsigned long long _renderMode;
    long long _smartFiltersCubeSize;
}

+ (id)_editedImagePropertiesFromOriginalImageProperties:(id)arg1 preserveRegions:(_Bool)arg2;
+ (id)newImageDataFromCGImage:(struct CGImage *)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(_Bool)arg4;
@property(nonatomic) long long smartFiltersCubeSize; // @synthesize smartFiltersCubeSize=_smartFiltersCubeSize;
@property(nonatomic) unsigned long long renderMode; // @synthesize renderMode=_renderMode;
@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(retain, nonatomic) CIImage *originalImage; // @synthesize originalImage=_originalImage;
- (id)_renderingQueue;
- (id)_smartBWAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
@property(readonly, nonatomic) double smartBWBaseGrain;
@property(readonly, nonatomic) double smartBWBaseHue;
@property(readonly, nonatomic) double smartBWBaseTone;
@property(readonly, nonatomic) double smartBWBaseNeutralGamma;
@property(readonly, nonatomic) double smartBWBaseStrength;
- (double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2;
@property(readonly, nonatomic) double smartColorBaseCast;
@property(readonly, nonatomic) double smartColorBaseVibrancy;
@property(readonly, nonatomic) double smartColorBaseContrast;
@property(readonly, nonatomic) double smartToneBaseLocalLight;
@property(readonly, nonatomic) double smartToneBaseBlackPoint;
@property(readonly, nonatomic) double smartToneBaseShadows;
@property(readonly, nonatomic) double smartToneBaseHighlights;
@property(readonly, nonatomic) double smartToneBaseExposure;
@property(readonly, nonatomic) double smartToneBaseContrast;
@property(readonly, nonatomic) double smartToneBaseBrightness;
@property(readonly, nonatomic) struct CGSize outputImageSize;
@property(readonly, retain, nonatomic) CIImage *outputImage;
- (void)drawEditedImageInContext:(id)arg1 inRect:(struct CGRect)arg2 viewportWidth:(int)arg3 viewportHeight:(int)arg4;
- (struct CGImage *)_newCGImageFromEditedCIImage:(id)arg1;
- (struct CGColorSpace *)_newOutputColorSpace;
- (void)generateEditedImageDataWithCompressionQuality:(double)arg1 metadataSourceImageURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createEditedImageWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGImage *)newEditedImage;
- (void)_invalidateCachedFilters;
- (_Bool)_isOrientationMirrored;
- (id)_editedGeometryImageWithBaseImage:(id)arg1;
- (id)_imageByApplyingEdits:(id)arg1 toImage:(id)arg2 randomSeed:(unsigned long long)arg3;
- (id)_imageByApplyingEditsToImage:(id)arg1;
- (void)_handleAssetDidLoadForVideoComposition:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareVideoCompositionForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_editedImage;
- (id)_videoEditModel;
- (id)_lightMapImageForLightMap:(id)arg1 guideImage:(id)arg2;
- (void)dealloc;
- (id)init;

@end

