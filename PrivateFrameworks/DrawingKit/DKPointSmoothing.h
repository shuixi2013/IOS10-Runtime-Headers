//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBoxcarFilterPointFIFO, UIPointFIFO, UIQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface DKPointSmoothing : NSObject
{
    unsigned long long _width;
    float _spacing;
    float _unitScale;
    _Bool _emitInterpolatedPoints;
    UIPointFIFO *_strokeFIFO;
    UIBoxcarFilterPointFIFO *_boxcarFIFO;
    UIQuadCurvePointFIFO *_interpolatingFIFO;
}

+ (void)_interpolateFromPoint:(float)arg1 toPoint:(CDUnknownBlockType)arg2 withControlPoint:atUnitScale:emissionHandler: /* Error: Ran out of types for this method. */;
+     // Error parsing type: 68@0:8163248f64, name: interpolateFromPoint:toPoint:controlPoint:time:
@property(retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIBoxcarFilterPointFIFO *boxcarFIFO; // @synthesize boxcarFIFO=_boxcarFIFO;
@property(retain, nonatomic) UIPointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(nonatomic) _Bool emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitScale; // @synthesize unitScale=_unitScale;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (void)addPoint: /* Error: Ran out of types for this method. */;
@property(copy, nonatomic) CDUnknownBlockType emissionHandler;
- (id)init;
- (id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2;

@end

