//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class UIColor;
@protocol SBFProceduralWallpaper;

@protocol SBFProceduralWallpaperDelegate <NSObject>
- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didComputeAverageColor:(UIColor *)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
@end

