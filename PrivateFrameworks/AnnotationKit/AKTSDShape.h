//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKTSDBezierPath, AKTSDBrushStroke, AKTSDLineEnd;

@interface AKTSDShape : NSObject
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    AKTSDBezierPath *mCachedClippedPath;
    AKTSDBezierPath *_path;
    AKTSDBrushStroke *_stroke;
    AKTSDLineEnd *_headLineEnd;
    AKTSDLineEnd *_tailLineEnd;
}

@property(retain, nonatomic) AKTSDLineEnd *tailLineEnd; // @synthesize tailLineEnd=_tailLineEnd;
@property(retain, nonatomic) AKTSDLineEnd *headLineEnd; // @synthesize headLineEnd=_headLineEnd;
@property(retain, nonatomic) AKTSDBrushStroke *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) AKTSDBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_newClippedPath;
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (id)clippedPathForLineEnds;
- (double)tailLineEndAngle;
- (double)headLineEndAngle;
- (struct CGPoint)tailLineEndPoint;
- (struct CGPoint)headLineEndPoint;
- (double)lineEndScale;
- (id)strokeTailLineEnd;
- (id)strokeHeadLineEnd;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

