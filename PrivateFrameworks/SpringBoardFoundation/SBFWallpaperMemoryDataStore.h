//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFWallpaperDataStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_originalImages;
    NSMutableDictionary *_thumbnails;
    NSMutableDictionary *_proceduralInfo;
    NSMutableDictionary *_videoURLs;
    NSMutableDictionary *_wallpaperOptions;
}

- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (_Bool)setVideoURL:(id)arg1 forVariant:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfStoredImages;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

