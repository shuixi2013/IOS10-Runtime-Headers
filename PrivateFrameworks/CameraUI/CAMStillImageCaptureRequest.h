//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/CAMBurstIdentifierProvider-Protocol.h>
#import <CameraUI/CAMBurstRequest-Protocol.h>
#import <CameraUI/CAMEffectFilterTypeProvider-Protocol.h>
#import <CameraUI/CAMIrisRequest-Protocol.h>
#import <CameraUI/CAMPossibleOriginalRequest-Protocol.h>
#import <CameraUI/CAMTimelapseRequest-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSMutableCopying-Protocol.h>

@class NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMPossibleOriginalRequest, CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest>
{
    NSString *_originalPersistenceUUID;
    NSString *_timelapseIdentifier;
    long long _effectFilterType;
    unsigned long long _maximumBurstLength;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    _Bool _usesStillImageStabilization;
    _Bool _wantsAudioForCapture;
    _Bool _wantsSquareCrop;
    _Bool _wantsHighResolutionStills;
    struct CGSize _desiredPreviewSize;
    NSString *_burstIdentifier;
    NSString *_irisIdentifier;
    NSURL *_localVideoDestinationURL;
    NSString *_videoPersistenceUUID;
    NSString *_originalIrisIdentifier;
    NSURL *_originalLocalVideoDestinationURL;
    NSString *_originalVideoPersistenceUUID;
    id <CAMStillImageCaptureRequestDelegate> _delegate;
}

@property(readonly, nonatomic) unsigned long long maximumBurstLength; // @synthesize maximumBurstLength=_maximumBurstLength;
@property(readonly, nonatomic) long long effectFilterType; // @synthesize effectFilterType=_effectFilterType;
@property(readonly, copy, nonatomic) NSString *timelapseIdentifier; // @synthesize timelapseIdentifier=_timelapseIdentifier;
@property(readonly, copy, nonatomic) NSString *originalPersistenceUUID; // @synthesize originalPersistenceUUID=_originalPersistenceUUID;
@property(readonly, nonatomic) __weak id <CAMStillImageCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *originalVideoPersistenceUUID; // @synthesize originalVideoPersistenceUUID=_originalVideoPersistenceUUID;
@property(readonly, copy, nonatomic) NSURL *originalLocalVideoDestinationURL; // @synthesize originalLocalVideoDestinationURL=_originalLocalVideoDestinationURL;
@property(readonly, copy, nonatomic) NSString *originalIrisIdentifier; // @synthesize originalIrisIdentifier=_originalIrisIdentifier;
@property(readonly, copy, nonatomic) NSString *videoPersistenceUUID; // @synthesize videoPersistenceUUID=_videoPersistenceUUID;
@property(readonly, copy, nonatomic) NSURL *localVideoDestinationURL; // @synthesize localVideoDestinationURL=_localVideoDestinationURL;
@property(readonly, copy, nonatomic) NSString *irisIdentifier; // @synthesize irisIdentifier=_irisIdentifier;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic) struct CGSize desiredPreviewSize; // @synthesize desiredPreviewSize=_desiredPreviewSize;
@property(readonly, nonatomic) _Bool wantsHighResolutionStills; // @synthesize wantsHighResolutionStills=_wantsHighResolutionStills;
@property(readonly, nonatomic) _Bool wantsSquareCrop; // @synthesize wantsSquareCrop=_wantsSquareCrop;
@property(readonly, nonatomic) _Bool wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property(readonly, nonatomic) _Bool usesStillImageStabilization; // @synthesize usesStillImageStabilization=_usesStillImageStabilization;
@property(readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void).cxx_destruct;
- (_Bool)shouldPersistToLivePhotoDirectory;
- (_Bool)isOriginalLocalVideoDestinationURL:(id)arg1;
- (id)irisLocalVideoDestinationURLForOriginal:(_Bool)arg1;
- (id)irisVideoPersistenceUUIDForOriginal:(_Bool)arg1;
- (id)irisStillImagePersistenceUUIDForOriginal:(_Bool)arg1;
- (id)irisIdentifierForOriginal:(_Bool)arg1;
- (id)captureRequest;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

