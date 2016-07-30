//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject
{
    int mLabelType;
    int mKnobsMode;
    NSMutableArray *mLabelsBounds;
}

+ (id)boundsWithLabelType:(int)arg1 knobsMode:(int)arg2;
@property(readonly, nonatomic) int knobsMode; // @synthesize knobsMode=mKnobsMode;
@property(readonly, nonatomic) int labelType; // @synthesize labelType=mLabelType;
- (void)mergeBoundsIntoProjectedPoints:(id)arg1;
- (_Bool)p_hasExtentPointsForBounds:(id)arg1 returningMinPoint:(struct CGPoint *)arg2 maxPoint:(struct CGPoint *)arg3;
- (struct CGPoint)p_maxPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (struct CGPoint)p_minPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (_Bool)p_isHorizontal;
- (void)addBounds:(struct CGRect)arg1;
- (void)addNewBoundsArray;
- (void)dealloc;
- (id)initWithLabelType:(int)arg1 knobsMode:(int)arg2;

@end

