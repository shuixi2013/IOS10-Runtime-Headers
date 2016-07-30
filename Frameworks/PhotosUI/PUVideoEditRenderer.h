//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, NSString, NSURL, PLPhotoEditRenderer;
@protocol PUVideoEditRendererDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoEditRenderer : NSObject
{
    struct {
        _Bool respondsToStatusDidChange;
    } _delegateFlags;
    PLPhotoEditRenderer *_photoEditRenderer;
    AVAsset *_sourceAsset;
    NSURL *_outputURL;
    NSString *_exportPresetName;
    long long _status;
    id <PUVideoEditRendererDelegate> _delegate;
    AVAssetExportSession *__exportSession;
    CDUnknownBlockType __progressHandler;
    CDUnknownBlockType __completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler=__progressHandler;
@property(retain, nonatomic, setter=_setExportSession:) AVAssetExportSession *_exportSession; // @synthesize _exportSession=__exportSession;
@property(nonatomic) __weak id <PUVideoEditRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *exportPresetName; // @synthesize exportPresetName=_exportPresetName;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, copy, nonatomic) AVAsset *sourceAsset; // @synthesize sourceAsset=_sourceAsset;
@property(readonly, copy, nonatomic) PLPhotoEditRenderer *photoEditRenderer; // @synthesize photoEditRenderer=_photoEditRenderer;
- (void).cxx_destruct;
- (void)_runCompletionHandlerWithError:(id)arg1;
- (void)_reportProgress;
- (void)_handleDidExport;
- (void)_handleDidPrepareVideoComposition:(id)arg1 forAsset:(id)arg2 error:(id)arg3;
- (void)cancelRendering;
- (void)render;
- (id)initWithSourceAsset:(id)arg1 photoEditRenderer:(id)arg2 outputURL:(id)arg3 exportPresetName:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)dealloc;

@end

