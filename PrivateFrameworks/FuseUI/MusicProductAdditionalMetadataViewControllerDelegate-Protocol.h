//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicProductAdditionalMetadataViewController;

@protocol MusicProductAdditionalMetadataViewControllerDelegate <NSObject>

@optional
- (_Bool)productAdditionalMetadataViewControllerShouldDeferContentHeightAnimationUpdates:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateVisibleSwitchState:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdatePublicSwitchState:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateProductDescription:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidSelectAddSongsButton:(MusicProductAdditionalMetadataViewController *)arg1;
@end

