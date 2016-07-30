//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, _PXBadgeCache;

@interface PXAssetBadgeUIView : UIView
{
    struct {
        _Bool flattenSubviews;
        _Bool cloudIconView;
        _Bool favoriteBadgeView;
        _Bool badgeImageView;
        _Bool bannerText;
        _Bool textLabel;
        _Bool backgroundView;
        _Bool subviewsOrdering;
    } _needsUpdateFlags;
    _Bool _isPerformingUpdates;
    _Bool _cloudIconVisible;
    _Bool _flattensSubviews;
    _Bool __favoriteBadgeVisible;
    unsigned long long _badgeTypes;
    long long _badgeStyle;
    double _videoDuration;
    _PXBadgeCache *__badgeCache;
    unsigned long long __mediaBadgeType;
    UIImageView *__badgeImageView;
    UIImageView *__cloudIconImageView;
    UIImageView *__favoriteBadgeImageView;
    UIImageView *__backgroundImageView;
    NSString *__bannerText;
    UILabel *__textLabel;
}

+ (double)preferredHeight;
@property(retain, nonatomic, setter=_setTextLabel:) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(retain, nonatomic, setter=_setBannerText:) NSString *_bannerText; // @synthesize _bannerText=__bannerText;
@property(retain, nonatomic, setter=_setBackgroundImageView:) UIImageView *_backgroundImageView; // @synthesize _backgroundImageView=__backgroundImageView;
@property(retain, nonatomic, setter=_setFavoriteBadgeImageView:) UIImageView *_favoriteBadgeImageView; // @synthesize _favoriteBadgeImageView=__favoriteBadgeImageView;
@property(retain, nonatomic, setter=_setCloudIconImageView:) UIImageView *_cloudIconImageView; // @synthesize _cloudIconImageView=__cloudIconImageView;
@property(retain, nonatomic, setter=_setBadgeImageView:) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
@property(nonatomic, setter=_setFavoriteBadgeVisible:) _Bool _favoriteBadgeVisible; // @synthesize _favoriteBadgeVisible=__favoriteBadgeVisible;
@property(nonatomic, setter=_setMediaBadgeType:) unsigned long long _mediaBadgeType; // @synthesize _mediaBadgeType=__mediaBadgeType;
@property(retain, nonatomic, setter=_setBadgeCache:) _PXBadgeCache *_badgeCache; // @synthesize _badgeCache=__badgeCache;
@property(nonatomic) _Bool flattensSubviews; // @synthesize flattensSubviews=_flattensSubviews;
@property(nonatomic, getter=isCloudIconVisible) _Bool cloudIconVisible; // @synthesize cloudIconVisible=_cloudIconVisible;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) unsigned long long badgeTypes; // @synthesize badgeTypes=_badgeTypes;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateSubviewsOrdering;
- (void)_invalidateSubviewsOrdering;
- (void)_updateFavoriteBadgeViewIfNeeded;
- (void)_invalidateFavoriteBadgeView;
- (void)_updateBackgroundViewIfNeeded;
- (void)_invalidateBackgroundView;
- (void)_updateTextLabelIfNeeded;
- (void)_invalidateTextLabel;
- (void)_updateBadgeImageViewIfNeeded;
- (void)_invalidateBadgeImageView;
- (void)_updateCloudIconViewIfNeeded;
- (void)_invalidateCloudIconView;
- (void)_updateFlattenSubviewsIfNeeded;
- (void)_invalidateFlattenSubviews;
- (void)_updateBannerTextIfNeeded;
- (void)_invalidateBannerText;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

