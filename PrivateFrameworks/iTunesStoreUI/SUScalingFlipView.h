//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SUScalingFlipViewDelegate;

@interface SUScalingFlipView : UIView
{
    UIView *_backView;
    id <SUScalingFlipViewDelegate> _delegate;
    long long _direction;
    double _duration;
    struct CGRect _fromFrame;
    UIView *_frontView;
    struct CGRect _toFrame;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) id <SUScalingFlipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_transformAnimationWithStart:(struct CATransform3D)arg1 middle:(struct CATransform3D)arg2 end:(struct CATransform3D)arg3;
- (id)_positionAnimation;
- (id)_inputColorAnimation;
- (id)_frontLayerAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_backLayerAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)performFlip;
- (void)dealloc;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;

@end

