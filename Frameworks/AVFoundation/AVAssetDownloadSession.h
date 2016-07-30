//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetDownloadSessionInternal, AVMediaSelection, NSArray, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal *_internal;
}

+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) unsigned long long availableFileSize;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSURL *destinationURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)stop;
- (void)pause;
- (void)start;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)init;
- (id)_common_init;
- (void)_removeFigAssetDownloaderListeners;
- (void)_addFigAssetDownloaderListeners;
- (id)_figAssetDownloaderNotificationNames;
- (void)_forwardLoadedTimeRangesChangedNotification:(id)arg1;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_figPlaybackItemNotificationNames;
- (void)_removeFigAssetListeners;
- (void)_addFigAssetListeners;
- (id)_figAssetNotificationNames;
- (void)_selectMediaOptionsFromMediaSelection:(id)arg1;
- (id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1;
- (id)_verifyDownloadConfigurationForAssetType;
- (int)_readyForInspection;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (_Bool)_setFileFigAsset:(struct OpaqueFigAsset *)arg1;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_weakReference;

@end

