//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton;

@interface NCMediaPlayPauseButton : UIControl
{
    long long _type;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_buttonImageNamed:(id)arg1;
- (id)_pauseImage;
- (id)_playImage;
- (void)_updateButtonImages;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

