//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint
{
    double _damping;
    double _frequency;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double damping; // @synthesize damping=_damping;

@end

