//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion
{
    _Bool hasCentredParagraph;
    _Bool hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
    _Bool complete;
}

@property _Bool complete; // @synthesize complete;
- (id)description;
- (double)selectionBottom;
- (struct CGRect)paddedBounds;
- (void)setMaxRightPad:(double)arg1;
- (double)maxRightPad;
- (void)setMaxLeftPad:(double)arg1;
- (double)maxLeftPad;
- (double)rightPad;
- (double)leftPad;
- (void)setHasCentredParagraph:(_Bool)arg1;
- (_Bool)hasCentredParagraph;
- (double)bottomBaseline;
- (struct CGRect)columnBounds;
- (_Bool)isShapeRegion;
- (_Bool)isImageRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isRowRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isBoxRegion;
- (void)setHasColumnBreak:(_Bool)arg1;
- (void)accept:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (int)inOrder;
- (int)outOrder;

@end

