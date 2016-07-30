//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton
{
    int _color;
    _UIBackdropView *_backdropView;
    _Bool _blursBackground;
    _Bool _roundsCorners;
    _Bool _usesOverlayBlendingForContents;
}

+ (double)maxWidthForCenterButton;
+ (double)defaultWidthForCenterButton;
+ (double)defaultWidthForSideButton;
+ (double)defaultHeightForColor:(int)arg1;
+ (double)defaultHeight;
+ (id)defaultStandardFont;
@property(nonatomic) _Bool usesOverlayBlendingForContents; // @synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents;
@property(nonatomic) _Bool roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
- (void).cxx_destruct;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setTitleVerticalOffset:(double)arg1;
- (void)setIconVerticalOffset:(double)arg1;
- (void)setTitleImagePadding:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;
- (void)setMinimumTitleFontSize:(double)arg1;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (int)buttonColor;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect)arg4;
- (void)setButtonColor:(int)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

