//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUQuickControlInteractionCoordinator, UIView;
@protocol HUQuickControlAuxiliaryView;

@protocol HUQuickControlInteractionHost <NSObject>
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)hideAuxiliaryViewForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)interactionCoordinatorWantsDismissal:(HUQuickControlInteractionCoordinator *)arg1;
@end

