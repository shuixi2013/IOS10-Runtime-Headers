//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIKeyboardEmoji, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell
{
    UILabel *_emojiLabel;
    UIKeyboardEmoji *_emoji;
}

@property(copy, nonatomic) UIKeyboardEmoji *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;
- (id)debugDescription;
@property(nonatomic) long long emojiFontSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

