//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMStickerRegistry : NSObject
{
    NSMutableDictionary *_GUIDToStickerPackMap;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *GUIDToStickerPackMap; // @synthesize GUIDToStickerPackMap=_GUIDToStickerPackMap;
- (void).cxx_destruct;
- (void)stickerPackRemoved:(id)arg1;
- (void)stickerPackUpdated:(id)arg1;
- (void)removeStickersWithHostAppBundleIdentifier:(id)arg1;
- (void)addOrUpdateStickersWithHostAppBundleIdentifier:(id)arg1 version:(id)arg2 bundleURL:(id)arg3;
- (id)allDownloadedStickers;
- (id)allDownloadedStickerPacks;
- (id)stickerPackForGUID:(struct NSString *)arg1;
- (void)handleIncomingStickers:(id)arg1;
- (void)handleIncomingStickerPacks:(id)arg1;
- (void)_clearStickerPackMap;
- (void)downloadStickerPackWithGUID:(id)arg1 isIncomingMessage:(_Bool)arg2 ignoreCache:(_Bool)arg3;
- (void)downloadStickerWithGUID:(struct NSString *)arg1;
- (id)init;

@end

