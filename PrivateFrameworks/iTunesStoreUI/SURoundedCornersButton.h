//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton
{
    UIBezierPath *_bezierPath;
    UIView *_highlightedBackgroundView;
    UIBezierPath *_shadowPath;
}

- (id)_highlightedBackgroundView;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

