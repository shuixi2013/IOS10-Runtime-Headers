//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIStatusBarCorners : UIView
{
    int _cornerStyle;
    int _cornerAlignment;
    UIView *_leftCorner;
    UIView *_rightCorner;
}

+ (double)cornerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)_imageForCornerWithStyle:(int)arg1;
- (int)cornerStyle;
- (id)initForAlignment:(int)arg1 style:(int)arg2;

@end

