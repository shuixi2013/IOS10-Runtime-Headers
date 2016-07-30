//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTXMotionWindow : NSObject
{
    double _radius;
    double _maxIncrease;
    long long _direction;
    double _effectiveRadius;
    double _center;
    double _upperLimit;
    double _lowerLimit;
}

- (void)reset;
- (double)mappedOffset:(double)arg1;
- (void)setIncreaseFactor:(double)arg1 fixingOffset:(double)arg2;
- (id)initWithRadius:(double)arg1 maxIncrease:(double)arg2 direction:(long long)arg3;

@end

