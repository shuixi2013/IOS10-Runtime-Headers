//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSIndexSet, TSCHChartLayout, TSDLayoutGeometry;

@protocol TSCHSupportsRendering <NSObject>
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)requireSeparateLabelLayer;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderLabels;
- (_Bool)renderReferenceLines;
- (_Bool)renderGrid;
- (_Bool)renderElements;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (NSIndexSet *)renderSeriesIndexSet;
- (_Bool)is2DRepFor3DChartRep;
- (_Bool)isDrawingIntoPDF;
- (_Bool)forceRenderBlankBackground;
- (_Bool)shadowsEnabled;
- (double)viewScale;
- (TSDLayoutGeometry *)geometry;
- (TSCHChartLayout *)chartLayout;
@end

