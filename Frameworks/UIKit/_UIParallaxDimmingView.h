//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIParallaxDimmingView : UIView
{
    UIImageView *leftEdgeFade;
    _Bool _backgroundIsDimmed;
    UIColor *_dimmingColor;
    UIView *_addingSubview;
}

+ (id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(_Bool)arg3;
+ (id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2;
+ (id)newDimmingViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *addingSubview; // @synthesize addingSubview=_addingSubview;
@property(nonatomic) _Bool backgroundIsDimmed; // @synthesize backgroundIsDimmed=_backgroundIsDimmed;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
- (void).cxx_destruct;
- (void)crossFade;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)didMoveToWindow;
- (void)_updateLeftEdgeFade:(_Bool)arg1;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(_Bool)arg3;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2;
- (id)defaultBorderColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

