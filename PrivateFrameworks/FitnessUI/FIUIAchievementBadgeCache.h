//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIUIAchievementBadgeCache : NSObject
{
}

+ (_Bool)_decompressZipFileAtPath:(id)arg1 toDirectory:(id)arg2;
+ (id)badgeModelPathForAchievement:(id)arg1;
+ (id)thumbnailForAchievement:(id)arg1 size:(struct CGSize)arg2;
+ (id)_cachedModelPathForAchievement:(id)arg1;
+ (id)_cachedImagePathForAchievement:(id)arg1 size:(struct CGSize)arg2;
+ (id)_cachedModelsPath;
+ (id)_cachedImagesPath;
+ (id)_cacheKeyForAchievement:(id)arg1 size:(struct CGSize)arg2;
+ (void)_cleanUpOldAssets;
+ (id)_thumbnailCache;

@end

