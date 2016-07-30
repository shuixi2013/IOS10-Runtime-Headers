//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (_Bool)canBeginEditing;
- (void)beginEditing;
- (void)beginEditingWithString:(id)arg1;
- (_Bool)canBeUsedForImageMask;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)shouldHitTestWithFill;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (_Bool)isEditingChildRep;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (id)colorBehindLayer:(id)arg1;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (struct CGRect)clipRect;
- (struct CGRect)frameInUnscaledCanvas;
- (id)shapeLayout;
- (id)shapeInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

