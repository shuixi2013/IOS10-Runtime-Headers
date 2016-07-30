//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneRotationTransform : FBSceneTransform
{
    long long _degrees;
    double _radians;
}

@property(nonatomic) long long degrees; // @synthesize degrees=_degrees;
@property(nonatomic) double radians; // @synthesize radians=_radians;
- (void)_updateTransform;
- (id)description;
- (id)initWithRadians:(double)arg1;
- (id)initWithDegrees:(long long)arg1;

@end

