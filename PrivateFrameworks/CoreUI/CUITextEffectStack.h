//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIShapeEffectStack.h>

__attribute__((visibility("hidden")))
@interface CUITextEffectStack : CUIShapeEffectStack
{
    _Bool renderHighQuality;
}

- (void)drawUsingQuartz:(CDUnknownBlockType)arg1 inContext:(struct CGContext *)arg2 inBounds:(struct CGRect)arg3 atScale:(double)arg4;
- (void)_drawShadow:(CDStruct_ca46f23f)arg1 usingQuartz:(CDUnknownBlockType)arg2 inContext:(struct CGContext *)arg3;
- (void)drawGlyphs:(const unsigned short *)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 atPositions:(const struct CGPoint *)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect)arg7 atScale:(double)arg8;
- (void)_drawShadow:(CDStruct_ca46f23f)arg1 forGlyphs:(const unsigned short *)arg2 inContext:(struct CGContext *)arg3 usingFont:(struct __CTFont *)arg4 atPositions:(const struct CGPoint *)arg5 count:(unsigned long long)arg6;
- (void)drawGlyphs:(const unsigned short *)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 withAdvances:(const struct CGSize *)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect)arg7 atScale:(double)arg8;
- (void)_drawShadow:(CDStruct_ca46f23f)arg1 forGlyphs:(const unsigned short *)arg2 inContext:(struct CGContext *)arg3 usingFont:(struct __CTFont *)arg4 withAdvances:(const struct CGSize *)arg5 count:(unsigned long long)arg6;
- (void)drawProcessedMask:(struct CGContext *)arg1 atBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 withScale:(double)arg4;
- (struct CGContext *)newGlyphMaskContextForBounds:(struct CGRect)arg1 fromContext:(struct CGContext *)arg2 withScale:(double)arg3;
- (struct CGColor *)newBackgroundPatternColorWithSize:(struct CGSize)arg1 contentScale:(double)arg2 forContext:(struct CGContext *)arg3;
- (double)effectiveInteriorFillOpacity;
- (_Bool)useCoreImageRendering;
- (id)initWithEffectPreset:(id)arg1;

@end

