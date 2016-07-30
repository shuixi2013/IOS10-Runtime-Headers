//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RMUIUpNextLabel, RMUIUpNextRowSeparator, UIImageView, UIVisualEffectView;

@interface RMUIUpNextCell : UITableViewCell
{
    UIVisualEffectView *_primaryVibrantView;
    UIVisualEffectView *_secondaryVibrantView;
    UIVisualEffectView *_tertiaryVibrantView;
    RMUIUpNextLabel *_timeLabel;
    RMUIUpNextLabel *_titleLabel;
    RMUIUpNextLabel *_locationLabel;
    UIImageView *_circleImageView;
    RMUIUpNextRowSeparator *_rowSeparator;
}

- (void).cxx_destruct;
- (void)updateMaxLayoutWidth;
- (void)setFrame:(struct CGRect)arg1;
- (double)rightMarginForTimeViewWidth:(double)arg1;
- (double)leftMarginForTimeViewWidth:(double)arg1;
- (double)timeViewWidth;
- (id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2;
- (id)titleStringForReminder:(id)arg1;
- (void)setupConstraints;
- (id)initWithReminder:(id)arg1 reuseIdentifier:(id)arg2 showRowSeparator:(_Bool)arg3;

@end

