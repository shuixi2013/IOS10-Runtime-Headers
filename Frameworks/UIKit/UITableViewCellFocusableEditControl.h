//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
{
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldHandlePressEvent:(id)arg1;
- (void)focusedViewDidChange;
- (_Bool)wantsImageShadow;
- (_Bool)wantsMaskingWhileAnimatingDisabled;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)_currentImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (void)_ensureFocusedFloatingContentView;

@end

