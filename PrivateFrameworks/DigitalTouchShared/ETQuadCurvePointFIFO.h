//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETQuadCurvePointFIFO : ETPointFIFO
{
    _Bool _emitInterpolatedPoints;
    float _unitSize;
    CDUnknownBlockType _emissionHandler;
    // Error parsing type: , name: _lastPoint
    vector_761af77e _prevPoints;
    vector_761af77e _points;
    vector_761af77e _controlPoints;
}

// Error parsing type for property lastPoint:
// Property attributes: T,N,V_lastPoint

@property(nonatomic) vector_b97278d5 controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) vector_b97278d5 points; // @synthesize points=_points;
@property(nonatomic) vector_b97278d5 prevPoints; // @synthesize prevPoints=_prevPoints;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) _Bool emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitSize; // @synthesize unitSize=_unitSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
-     // Error parsing type: v32@0:8^16Q24, name: addPoints:count:
- (id)initWithFIFO:(id)arg1;

@end

