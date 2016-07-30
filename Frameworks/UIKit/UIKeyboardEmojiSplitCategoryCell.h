//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;
    UILabel *_title;
    UIView *_selectedCircle;
}

@property(retain, nonatomic) UIView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
- (void)setSelectedCircleBlendMode:(_Bool)arg1;
- (void)setPressIndicatorHidden:(_Bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)titleFont;
- (id)symbolFont;

@end

