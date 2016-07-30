//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TSCHLegendCellMetrics, TSCHLegendViewCache, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHLegendModelCache : NSObject
{
    TSCHLegendCellMetrics *mMetrics;
    _Bool mLegendOn;
    NSArray *mCells;
    unsigned long long mCellCount;
    TSWPParagraphStyle *mParagraphStyle;
    TSDStroke *mStroke;
    TSDShadow *mShadow;
    id mFill;
    double mOpacity;
    double mHorizontalCellSpacing;
    double mVerticalCellSpacing;
    struct CGSize mLargestCellSize;
    double mEffectiveStrokeWidth;
    _Bool mReverseSingleColumnLegendOrder;
    double mLastLegendWidth;
    TSCHLegendViewCache *mLastLegendViewCache;
    double mSymbolGap;
}

@property(readonly) _Bool reverseSingleColumnLegendOrder; // @synthesize reverseSingleColumnLegendOrder=mReverseSingleColumnLegendOrder;
@property(readonly) double effectiveStrokeWidth; // @synthesize effectiveStrokeWidth=mEffectiveStrokeWidth;
@property(readonly) struct CGSize largestCellSize; // @synthesize largestCellSize=mLargestCellSize;
@property(readonly) double symbolGap; // @synthesize symbolGap=mSymbolGap;
@property(readonly) double verticalCellSpacing; // @synthesize verticalCellSpacing=mVerticalCellSpacing;
@property(readonly) double horizontalCellSpacing; // @synthesize horizontalCellSpacing=mHorizontalCellSpacing;
@property(readonly) double opacity; // @synthesize opacity=mOpacity;
@property(readonly) id fill; // @synthesize fill=mFill;
@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) NSArray *cells; // @synthesize cells=mCells;
@property(readonly) unsigned long long cellCount; // @synthesize cellCount=mCellCount;
@property(readonly) _Bool legendOn; // @synthesize legendOn=mLegendOn;
- (id)viewCacheForWidth:(double)arg1;
- (id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;

@end

