//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VSMobileAssetsManager : NSObject
{
}

+ (long long)voiceTypeForBundleIdentifier:(id)arg1;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (_Bool)isVoiceAssetWellDefined:(id)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (id)_builtInVoiceForLanguage:(id)arg1;
+ (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)voiceDataFromAsset:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)installedVoiceResources;
+ (id)_nonCacheInstalledVoiceResources;
+ (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)_nonCacheInstalledAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)voiceResourceFromAsset:(id)arg1;
+ (id)selectVoiceResourceAssetForLanguage:(id)arg1;
+ (id)queryForVoiceResourceAsset:(id)arg1 localOnly:(_Bool)arg2;
+ (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
+ (id)queryForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 localOnly:(_Bool)arg6;
+ (void)amendVoiceWithDefaultSettings:(id)arg1;
+ (id)_defaultVoiceSettingsForLanguage:(id)arg1;
+ (void)_reloadAndCacheVoiceResourcesAssets;
+ (id)_cachedVoiceResourcesAssetsForLanguage:(id)arg1;
+ (id)_cachedVoiceResourcesAssets;
+ (void)_reloadAndCacheVoiceAssets;
+ (id)_cachedVoiceAssetsForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)_cachedVoiceAssets;
+ (id)sharedManager;
- (void)cleanOldVoiceAssets;
- (void)reinstallVoiceData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_purgeAsset:(id)arg1;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadVoiceResource:(id)arg1 useBattery:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeVoiceAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(_Bool)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

