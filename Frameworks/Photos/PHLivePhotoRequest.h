//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHImageManagerRequest.h>

@class AVAsset, NSError, NSRecursiveLock, PHAsset, PHImageManager, PHLivePhotoRequestOptions, UIImage;

@interface PHLivePhotoRequest : PHImageManagerRequest
{
    _Bool __isImageDegraded;
    _Bool __imageRequestCompleted;
    _Bool __imageRequestFailed;
    _Bool __avAssetRequestCompleted;
    _Bool __avAssetRequestFailed;
    _Bool __didFinishStart;
    _Bool __isCancelled;
    _Bool __isInProgress;
    _Bool __isInCloud;
    _Bool __needsUpdateResult;
    PHAsset *__asset;
    NSRecursiveLock *__isolationLock;
    long long __contentMode;
    PHLivePhotoRequestOptions *__options;
    PHImageManager *__imageManager;
    CDUnknownBlockType __resultHandler;
    UIImage *__image;
    AVAsset *__avAsset;
    NSError *__error;
    struct CGSize __targetSize;
    CDStruct_1b6d18a9 __stillDisplayTime;
}

@property(nonatomic, setter=_setNeedsUpdateResult:) _Bool _needsUpdateResult; // @synthesize _needsUpdateResult=__needsUpdateResult;
@property(nonatomic, setter=_setInCloud:) _Bool _isInCloud; // @synthesize _isInCloud=__isInCloud;
@property(retain, nonatomic, setter=_setError:) NSError *_error; // @synthesize _error=__error;
@property(nonatomic, setter=_setInProgress:) _Bool _isInProgress; // @synthesize _isInProgress=__isInProgress;
@property(nonatomic, setter=_setCancelled:) _Bool _isCancelled; // @synthesize _isCancelled=__isCancelled;
@property(nonatomic, setter=_setDidFinishStart:) _Bool _didFinishStart; // @synthesize _didFinishStart=__didFinishStart;
@property(nonatomic, setter=_setStillDisplayTime:) CDStruct_1b6d18a9 _stillDisplayTime; // @synthesize _stillDisplayTime=__stillDisplayTime;
@property(nonatomic, setter=_setAVAssetRequestFailed:) _Bool _avAssetRequestFailed; // @synthesize _avAssetRequestFailed=__avAssetRequestFailed;
@property(nonatomic, setter=_setAVAssetRequestCompleted:) _Bool _avAssetRequestCompleted; // @synthesize _avAssetRequestCompleted=__avAssetRequestCompleted;
@property(retain, nonatomic, setter=_setAVAsset:) AVAsset *_avAsset; // @synthesize _avAsset=__avAsset;
@property(nonatomic, setter=_setImageRequestFailed:) _Bool _imageRequestFailed; // @synthesize _imageRequestFailed=__imageRequestFailed;
@property(nonatomic, setter=_setImageRequestCompleted:) _Bool _imageRequestCompleted; // @synthesize _imageRequestCompleted=__imageRequestCompleted;
@property(nonatomic, setter=_setImageDegraded:) _Bool _isImageDegraded; // @synthesize _isImageDegraded=__isImageDegraded;
@property(retain, nonatomic, setter=_setImage:) UIImage *_image; // @synthesize _image=__image;
@property(readonly, nonatomic) CDUnknownBlockType _resultHandler; // @synthesize _resultHandler=__resultHandler;
@property(readonly, nonatomic) __weak PHImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(readonly, nonatomic) PHLivePhotoRequestOptions *_options; // @synthesize _options=__options;
@property(readonly, nonatomic) long long _contentMode; // @synthesize _contentMode=__contentMode;
@property(readonly, nonatomic) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(readonly, nonatomic) NSRecursiveLock *_isolationLock; // @synthesize _isolationLock=__isolationLock;
@property(readonly, nonatomic) PHAsset *_asset; // @synthesize _asset=__asset;
- (void).cxx_destruct;
- (void)_updateInProgress;
- (void)_updateResultIfNeeded;
- (void)_invalidateResult;
- (void)_update;
- (void)_handleVideoResultHandlerWithAVAsset:(id)arg1 info:(id)arg2;
- (void)_handleImageResultHandlerWithImage:(id)arg1 info:(id)arg2;
- (void)start;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 imageManager:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

