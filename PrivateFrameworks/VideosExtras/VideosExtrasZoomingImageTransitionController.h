//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import <VideosExtras/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <VideosExtras/VideosExtrasOptionallyInteractiveAnimationController-Protocol.h>

@class NSString, VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController>
{
    _Bool _interactive;
    _Bool _shouldUseSpringAnimation;
    unsigned long long _itemIndex;
    double _initialPinchScale;
    VideosExtrasBorderedImageView *_zoomingImageView;
    struct CGPoint _initialPinchCenter;
}

@property(retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView; // @synthesize zoomingImageView=_zoomingImageView;
@property(nonatomic) double initialPinchScale; // @synthesize initialPinchScale=_initialPinchScale;
@property(nonatomic) struct CGPoint initialPinchCenter; // @synthesize initialPinchCenter=_initialPinchCenter;
@property(nonatomic) _Bool shouldUseSpringAnimation; // @synthesize shouldUseSpringAnimation=_shouldUseSpringAnimation;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
- (double)_maximumDistanceTravelledForPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 currentTransform:(struct CGAffineTransform)arg3 finalTransform:(struct CGAffineTransform)arg4;
- (double)_destinationScale;
- (float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(struct CGAffineTransform)arg2 finalTransform:(struct CGAffineTransform)arg3;
- (void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithItemIndex:(unsigned long long)arg1 forInteractiveTransition:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

