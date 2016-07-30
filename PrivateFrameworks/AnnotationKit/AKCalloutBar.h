//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, _UIBackdropView;

@interface AKCalloutBar : UIView
{
    double _arrowX;
    _Bool _up;
    NSArray *_controls;
    _UIBackdropView *_backgroundView;
    _UIBackdropView *_separatorBackgroundView;
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    UIImageView *_separatorMaskView;
    struct CGRect _highlightRect;
}

@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(nonatomic) _Bool up; // @synthesize up=_up;
@property(nonatomic) double arrowX; // @synthesize arrowX=_arrowX;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFitsControls:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)dividerLineRectForControl:(long long)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 forControl:(id)arg2;
- (void)setBlurDisabled:(_Bool)arg1;
- (id)newMaskView:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

