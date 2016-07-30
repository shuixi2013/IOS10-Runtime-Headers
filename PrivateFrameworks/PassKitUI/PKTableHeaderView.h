//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKTableHeaderView : UIView
{
    struct CGSize _originalImageViewSize;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_checkmarkView;
    _Bool _shouldResizeImageToFit;
    _Bool _accessoryViewsDisabled;
    unsigned long long _style;
    double _topPadding;
    double _bottomPadding;
    double _extraTextPadding;
}

@property(readonly, retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool accessoryViewsDisabled; // @synthesize accessoryViewsDisabled=_accessoryViewsDisabled;
@property(nonatomic) double extraTextPadding; // @synthesize extraTextPadding=_extraTextPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool shouldResizeImageToFit; // @synthesize shouldResizeImageToFit=_shouldResizeImageToFit;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setSubtitleBody:(id)arg1;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)_sizeThatFitsExcludingImage:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, retain, nonatomic) UIButton *actionButton;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel;
- (void)dealloc;

@end

