//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry
{
    double _sphereradius;
    double _sphereradialSpan;
    long long _spheresegmentCount;
    long long _sphereprimitiveType;
    _Bool _spheregeodesic;
    _Bool _spherehemispheric;
}

+ (_Bool)supportsSecureCoding;
+ (id)sphereWithRadius:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long segmentCount;
@property(nonatomic) double radius;
- (void)setRadialSpan:(double)arg1;
- (double)radialSpan;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
- (void)setHemispheric:(_Bool)arg1;
- (_Bool)isHemispheric;
@property(nonatomic, getter=isGeodesic) _Bool geodesic;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationSphere;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end

