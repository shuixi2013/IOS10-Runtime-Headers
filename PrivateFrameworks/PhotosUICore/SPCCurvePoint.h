//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPCCurvePoint : NSObject
{
    double _x;
    double _y;
    double _roundness;
    double _smoothness;
    struct CGPoint _leftTangentPoint;
    struct CGPoint _rightTangentPoint;
}

+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithCGPoint:(struct CGPoint)arg1;
@property double smoothness; // @synthesize smoothness=_smoothness;
@property double roundness; // @synthesize roundness=_roundness;
@property struct CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property struct CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property double y; // @synthesize y=_y;
@property double x; // @synthesize x=_x;
@property struct CGPoint CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end

