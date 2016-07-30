//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardEmojiKeyView.h>

@class UIKeyboardEmojiGraphicsTraits, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView
{
    unsigned long long _selectedIndex;
    UIView *_scrubView;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isScrubbing;
    double _scrubStartXLocation;
}

@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)selectedIndexForTouches:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;
- (void)animateScrubberToRect:(struct CGRect)arg1;
- (struct CGRect)frameForDivider:(int)arg1;
- (void)updateCategory;
- (void)updateCategoryOnBar:(unsigned long long)arg1;
- (void)updateToCategory:(long long)arg1;
- (void)dimKeys:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

