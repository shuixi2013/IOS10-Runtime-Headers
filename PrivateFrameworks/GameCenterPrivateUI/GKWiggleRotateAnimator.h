//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubblePathAnimator.h>

@interface GKWiggleRotateAnimator : GKBubblePathAnimator
{
    _Bool _aggroBubbles;
}

@property(nonatomic) _Bool aggroBubbles; // @synthesize aggroBubbles=_aggroBubbles;
- (void)animateTransition:(id)arg1;
- (void)animateWithBounce:(id)arg1;
- (void)animateWithoutBounce:(id)arg1;
- (_Bool)updateInFlightAnimations:(id)arg1;
- (_Bool)rotatingRightWithTransitionContext:(id)arg1;
- (long long)animatorType;

@end

