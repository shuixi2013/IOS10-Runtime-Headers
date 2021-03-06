//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUTileTransitionCoordinator : NSObject
{
}

+ (id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 layout:(id)arg2 viewModel:(id)arg3;
+ (id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2;
+ (id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(_Bool)arg1 tilingView:(id)arg2;
+ (id)defaultTileTransitionCoordinatorForUpdates;
+ (id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5;
+ (id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5;
- (id)newTileAnimationOptions;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end

