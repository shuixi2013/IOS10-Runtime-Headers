//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface AKFingerPotView : UIButton
{
    UIImageView *_selectedOutline;
    UIImageView *_highlight;
}

@property(retain, nonatomic) UIImageView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIImageView *selectedOutline; // @synthesize selectedOutline=_selectedOutline;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) UIImage *menuImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

