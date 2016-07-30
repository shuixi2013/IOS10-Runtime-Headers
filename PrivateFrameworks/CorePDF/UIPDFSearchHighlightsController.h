//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIPDFPageView, UIPDFSelection;

@interface UIPDFSearchHighlightsController : NSObject
{
    NSMutableArray *_searchHighlightLayers;
    UIPDFPageView *_pageView;
    struct CGColor *_highlightColor;
    struct CGColor *_borderColor;
    struct CGColor *_shadowColor;
    _Bool _pageRendered;
    NSMutableArray *_rectangles;
    UIPDFSelection *_selection;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)addSearchHighlightForSelection:(id)arg1 animated:(_Bool)arg2;
- (void)makeType4Path:(struct CGPath *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath *)arg4;
- (void)makeType3Path:(struct CGPath *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath *)arg4;
- (void)makeType2Path:(struct CGPath *)arg1 to:(unsigned long long)arg2 shadowPath:(struct CGPath *)arg3;
- (void)makeType1Path:(struct CGPath *)arg1 shadowPath:(struct CGPath *)arg2;
- (void)makeType2Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2;
- (void)makeType1Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2 inset:(struct CGPoint)arg3;
- (struct CGRect)unionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (unsigned long long)indexOfColumnBreakStartingAt:(unsigned long long)arg1;
- (void)addLayer:(struct CGRect)arg1 path:(struct CGPath *)arg2 shadowPath:(struct CGPath *)arg3 animated:(_Bool)arg4;
- (void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(_Bool)arg2;
- (void)_addAnimation2:(id)arg1;
- (void)_addAnimation:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (_Bool)hasSearchHighlights;
- (void)clearSearchHighlights;
- (void)pageDidRender:(id)arg1;
- (void)dealloc;
- (id)initWithPageView:(id)arg1;

@end

