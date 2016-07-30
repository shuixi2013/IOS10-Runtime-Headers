//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMetadataItem, NSArray, NSDictionary, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject
{
    NSDictionary *format;
    unsigned int rawPhotoPixelFormatType;
    long long uniqueID;
    long long flashMode;
    long long HDRMode;
    _Bool originalPhotoDeliveryEnabled;
    _Bool autoStillImageStabilizationEnabled;
    _Bool highResolutionPhotoEnabled;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewFormat;
    _Bool squareCropEnabled;
    unsigned int shutterSound;
    _Bool turboModeEnabled;
    AVMetadataItem *defaultLivePhotoGUID;
    AVMetadataItem *defaultLivePhotoGUIDForOriginalPhoto;
}

@end

