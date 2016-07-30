//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUI/CUIThemeGradientDrawing-Protocol.h>

__attribute__((visibility("hidden")))
@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing>
{
    id gradientEvaluator;
    struct CGFunction *colorShader;
    struct CGColorSpace *colorSpace;
    struct CGImage *_gradientImage;
}

- (struct CGImage *)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2;
- (id)interpolatedColorAtLocation:(double)arg1;
- (void)drawFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 options:(unsigned long long)arg3 withContext:(struct CGContext *)arg4;
- (void)drawAngleGradientInRect:(struct CGRect)arg1 relativeCenterPosition:(struct CGPoint)arg2 withContext:(struct CGContext *)arg3;
- (void)drawRadialGradientInRect:(struct CGRect)arg1 relativeCenterPosition:(struct CGPoint)arg2 withContext:(struct CGContext *)arg3;
- (void)drawFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 options:(unsigned long long)arg3;
- (void)drawInRect:(struct CGRect)arg1 angle:(double)arg2;
- (void)drawInRect:(struct CGRect)arg1 angle:(double)arg2 withContext:(struct CGContext *)arg3;
- (struct CGFunction *)colorShader;
- (struct CGFunction *)_newColorShaderForDistance:(double)arg1;
- (void)dealloc;
- (int)blendMode;
- (id)fillColor;
- (_Bool)isDithered;
- (double)smoothingCoefficient;
- (id)opacityLocations;
- (id)opacityStops;
- (id)colorLocations;
- (id)colorStops;
- (id)_colorFromPSDGradientColor:(struct _psdGradientColor)arg1;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace *)arg9 dither:(_Bool)arg10;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace *)arg9;
- (id)_initWithGradientEvaluator:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (struct _psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2;

@end

