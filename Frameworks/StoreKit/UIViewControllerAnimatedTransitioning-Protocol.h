//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@protocol UIViewControllerContextTransitioning, UIViewImplicitlyAnimating;

@protocol UIViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransition:(id <UIViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <UIViewControllerContextTransitioning>)arg1;

@optional
- (void)animationEnded:(_Bool)arg1;
- (id <UIViewImplicitlyAnimating>)interruptibleAnimatorForTransition:(id <UIViewControllerContextTransitioning>)arg1;
@end

