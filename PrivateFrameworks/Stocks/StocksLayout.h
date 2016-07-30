//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class StockChartDisplayMode;

@interface StocksLayout : NSObject
{
    _Bool _infoViewHasBottomLine;
    _Bool _newsViewHasBottomLine;
    _Bool _chartViewHasBottomLine;
    _Bool _newsViewShouldUseLargerFonts;
    _Bool _chartViewHasTapGesture;
    _Bool _hasScrollView;
    _Bool _infoViewInScrollView;
    _Bool _chartViewInScrollView;
    _Bool _newsViewInScrollView;
    _Bool _hasBlurView;
    _Bool _hasGrayView;
    _Bool _hasSecondaryGrayView;
    _Bool _hasStatusView;
    _Bool _hasStatusViewDivider;
    _Bool _hasPrimaryHorizontalDivider;
    _Bool _hasSecondaryHorizontalDivider;
    _Bool _hasPrimaryVerticalDivider;
    _Bool _hasSecondaryVerticalDivider;
    _Bool _hasBlackView;
    _Bool _isFullScreenChart;
    unsigned long long _listViewRowCount;
    double _statusViewCenteringRatio;
    StockChartDisplayMode *_chartDisplayMode;
    struct CGSize _scrollViewContentSize;
    struct CGRect _listViewFrame;
    struct CGRect _infoViewFrame;
    struct CGRect _chartViewFrame;
    struct CGRect _newsViewFrame;
    struct UIEdgeInsets _listViewContentInsets;
    struct CGRect _scrollViewFrame;
    struct CGRect _blurViewFrame;
    struct CGRect _grayViewFrame;
    struct CGRect _secondaryGrayViewFrame;
    struct CGRect _statusViewFrame;
    struct CGRect _statusViewDividerFrame;
    struct CGRect _primaryHorizontalDividerFrame;
    struct CGRect _secondaryHorizontalDividerFrame;
    struct CGRect _primaryVerticalDividerFrame;
    struct CGRect _secondaryVerticalDividerFrame;
}

+ (unsigned long long)numberOfRowsForSize:(struct CGSize)arg1;
+ (id)threeColumnsLandscapeLayoutForSize:(struct CGSize)arg1;
+ (id)twoColumnsLandscapeLayoutForSize:(struct CGSize)arg1;
+ (id)fullScreenChartLayoutForSize:(struct CGSize)arg1;
+ (id)twoColumnsPortraitLayoutForSize:(struct CGSize)arg1;
+ (id)singleColumnPortraitLayoutForSize:(struct CGSize)arg1;
+ (id)layoutForSize:(struct CGSize)arg1;
@property(nonatomic) _Bool isFullScreenChart; // @synthesize isFullScreenChart=_isFullScreenChart;
@property(nonatomic) _Bool hasBlackView; // @synthesize hasBlackView=_hasBlackView;
@property(retain, nonatomic) StockChartDisplayMode *chartDisplayMode; // @synthesize chartDisplayMode=_chartDisplayMode;
@property(nonatomic) double statusViewCenteringRatio; // @synthesize statusViewCenteringRatio=_statusViewCenteringRatio;
@property(nonatomic) unsigned long long listViewRowCount; // @synthesize listViewRowCount=_listViewRowCount;
@property(nonatomic) struct CGRect secondaryVerticalDividerFrame; // @synthesize secondaryVerticalDividerFrame=_secondaryVerticalDividerFrame;
@property(nonatomic) _Bool hasSecondaryVerticalDivider; // @synthesize hasSecondaryVerticalDivider=_hasSecondaryVerticalDivider;
@property(nonatomic) struct CGRect primaryVerticalDividerFrame; // @synthesize primaryVerticalDividerFrame=_primaryVerticalDividerFrame;
@property(nonatomic) _Bool hasPrimaryVerticalDivider; // @synthesize hasPrimaryVerticalDivider=_hasPrimaryVerticalDivider;
@property(nonatomic) struct CGRect secondaryHorizontalDividerFrame; // @synthesize secondaryHorizontalDividerFrame=_secondaryHorizontalDividerFrame;
@property(nonatomic) _Bool hasSecondaryHorizontalDivider; // @synthesize hasSecondaryHorizontalDivider=_hasSecondaryHorizontalDivider;
@property(nonatomic) struct CGRect primaryHorizontalDividerFrame; // @synthesize primaryHorizontalDividerFrame=_primaryHorizontalDividerFrame;
@property(nonatomic) _Bool hasPrimaryHorizontalDivider; // @synthesize hasPrimaryHorizontalDivider=_hasPrimaryHorizontalDivider;
@property(nonatomic) struct CGRect statusViewDividerFrame; // @synthesize statusViewDividerFrame=_statusViewDividerFrame;
@property(nonatomic) _Bool hasStatusViewDivider; // @synthesize hasStatusViewDivider=_hasStatusViewDivider;
@property(nonatomic) struct CGRect statusViewFrame; // @synthesize statusViewFrame=_statusViewFrame;
@property(nonatomic) _Bool hasStatusView; // @synthesize hasStatusView=_hasStatusView;
@property(nonatomic) struct CGRect secondaryGrayViewFrame; // @synthesize secondaryGrayViewFrame=_secondaryGrayViewFrame;
@property(nonatomic) _Bool hasSecondaryGrayView; // @synthesize hasSecondaryGrayView=_hasSecondaryGrayView;
@property(nonatomic) struct CGRect grayViewFrame; // @synthesize grayViewFrame=_grayViewFrame;
@property(nonatomic) _Bool hasGrayView; // @synthesize hasGrayView=_hasGrayView;
@property(nonatomic) struct CGRect blurViewFrame; // @synthesize blurViewFrame=_blurViewFrame;
@property(nonatomic) _Bool hasBlurView; // @synthesize hasBlurView=_hasBlurView;
@property(nonatomic) _Bool newsViewInScrollView; // @synthesize newsViewInScrollView=_newsViewInScrollView;
@property(nonatomic) _Bool chartViewInScrollView; // @synthesize chartViewInScrollView=_chartViewInScrollView;
@property(nonatomic) _Bool infoViewInScrollView; // @synthesize infoViewInScrollView=_infoViewInScrollView;
@property(nonatomic) struct CGSize scrollViewContentSize; // @synthesize scrollViewContentSize=_scrollViewContentSize;
@property(nonatomic) struct CGRect scrollViewFrame; // @synthesize scrollViewFrame=_scrollViewFrame;
@property(nonatomic) _Bool hasScrollView; // @synthesize hasScrollView=_hasScrollView;
@property(nonatomic) _Bool chartViewHasTapGesture; // @synthesize chartViewHasTapGesture=_chartViewHasTapGesture;
@property(nonatomic) _Bool newsViewShouldUseLargerFonts; // @synthesize newsViewShouldUseLargerFonts=_newsViewShouldUseLargerFonts;
@property(nonatomic) _Bool chartViewHasBottomLine; // @synthesize chartViewHasBottomLine=_chartViewHasBottomLine;
@property(nonatomic) _Bool newsViewHasBottomLine; // @synthesize newsViewHasBottomLine=_newsViewHasBottomLine;
@property(nonatomic) _Bool infoViewHasBottomLine; // @synthesize infoViewHasBottomLine=_infoViewHasBottomLine;
@property(nonatomic) struct UIEdgeInsets listViewContentInsets; // @synthesize listViewContentInsets=_listViewContentInsets;
@property(nonatomic) struct CGRect newsViewFrame; // @synthesize newsViewFrame=_newsViewFrame;
@property(nonatomic) struct CGRect chartViewFrame; // @synthesize chartViewFrame=_chartViewFrame;
@property(nonatomic) struct CGRect infoViewFrame; // @synthesize infoViewFrame=_infoViewFrame;
@property(nonatomic) struct CGRect listViewFrame; // @synthesize listViewFrame=_listViewFrame;
- (void).cxx_destruct;
- (id)description;

@end

