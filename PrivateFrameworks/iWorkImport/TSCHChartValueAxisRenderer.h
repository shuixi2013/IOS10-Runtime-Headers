//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartAxisRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer
{
    unsigned long long mEditingLabelIndex;
}

- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id)labelsLayoutItem;
- (id)transparencyLayers;
- (id)valueAxisLayoutItem;

@end

