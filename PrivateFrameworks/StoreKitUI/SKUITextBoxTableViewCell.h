//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell
{
    SKUITextBoxView *_textBoxView;
    struct UIEdgeInsets _textBoxInsets;
}

@property(nonatomic) struct UIEdgeInsets textBoxInsets; // @synthesize textBoxInsets=_textBoxInsets;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView; // @synthesize textBoxView=_textBoxView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

