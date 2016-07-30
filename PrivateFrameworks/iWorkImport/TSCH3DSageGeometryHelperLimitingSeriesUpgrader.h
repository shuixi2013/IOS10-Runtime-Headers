//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartBoundsLayout, TSCH3DChartResizerHelper;

__attribute__((visibility("hidden")))
@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader
{
    TSCH3DChartResizerHelper *mResizerHelper;
    TSCH3DChartBoundsLayout *mBoundsLayout;
}

@property(readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout; // @synthesize boundsLayout=mBoundsLayout;
@property(readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper; // @synthesize resizerHelper=mResizerHelper;
- (id)boundsLayoutByResizingToLayoutSize:(const tvec2_84d5962d *)arg1;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect)arg2;
- (struct CGRect)oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(CDStruct_339a9a6e)arg1;
- (void)dealloc;

@end

