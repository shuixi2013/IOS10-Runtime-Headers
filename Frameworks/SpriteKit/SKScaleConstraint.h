//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKScaleConstraint : SKConstraint
{
    SKRange *_xRange;
    SKRange *_yRange;
}

+ (id)constraintWithYRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1;
+ (id)constraintWithScaleRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;

@end

