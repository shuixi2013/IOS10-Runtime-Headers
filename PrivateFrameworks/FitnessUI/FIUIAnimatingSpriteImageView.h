//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface FIUIAnimatingSpriteImageView : UIView
{
    CALayer *_imageLayer;
    UIImage *_spriteImage;
    long long _spriteFrameCount;
    long long _spriteColumnCount;
}

@property(nonatomic) long long spriteColumnCount; // @synthesize spriteColumnCount=_spriteColumnCount;
@property(nonatomic) long long spriteFrameCount; // @synthesize spriteFrameCount=_spriteFrameCount;
@property(retain, nonatomic) UIImage *spriteImage; // @synthesize spriteImage=_spriteImage;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (struct CGSize)_spriteFrameSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

