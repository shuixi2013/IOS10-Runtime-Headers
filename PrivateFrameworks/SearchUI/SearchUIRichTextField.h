//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/NUIContainerStackView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, SFRichText, SearchUIContentAdvisoryView, SearchUIImageView, SearchUIStarView, SearchUIVibrantLabel;

@interface SearchUIRichTextField : NUIContainerStackView <NUIContainerStackViewDelegate>
{
    unsigned long long _style;
    SFRichText *_richText;
    SearchUIVibrantLabel *_textLabel;
    SearchUIContentAdvisoryView *_contentAdvisoryView;
    SearchUIStarView *_starRatingView;
    SearchUIImageView *_iconView;
}

+ (id)font;
@property(retain) SearchUIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) SearchUIStarView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain) SearchUIContentAdvisoryView *contentAdvisoryView; // @synthesize contentAdvisoryView=_contentAdvisoryView;
@property(retain) SearchUIVibrantLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain) SFRichText *richText; // @synthesize richText=_richText;
@property unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (struct CGRect)containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)updateIcon:(id)arg1;
- (void)updateContentRating:(id)arg1;
- (void)updateStarViewWithRating:(double)arg1;
- (void)updateWithRichText:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

