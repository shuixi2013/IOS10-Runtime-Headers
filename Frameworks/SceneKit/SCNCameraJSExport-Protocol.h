//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLCamera, NSArray, NSString, SCNMaterialProperty;

@protocol SCNCameraJSExport <JSExport>
+ (id)cameraWithMDLCamera:(MDLCamera *)arg1;
+ (id)camera;
@property(nonatomic) unsigned long long categoryBitMask;
@property(readonly, nonatomic) SCNMaterialProperty *colorGrading;
@property(nonatomic) double contrast;
@property(nonatomic) double saturation;
@property(nonatomic) double colorFringeIntensity;
@property(nonatomic) double colorFringeStrength;
@property(nonatomic) double vignettingIntensity;
@property(nonatomic) double vignettingPower;
@property(nonatomic) double bloomBlurRadius;
@property(nonatomic) double bloomIntensity;
@property(nonatomic) double bloomThreshold;
@property(nonatomic) double maximumExposure;
@property(nonatomic) double minimumExposure;
@property(nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) _Bool wantsExposureAdaptation;
@property(nonatomic) double whitePoint;
@property(nonatomic) double averageGray;
@property(nonatomic) double exposureOffset;
@property(nonatomic) _Bool wantsHDR;
@property(nonatomic) double motionBlurIntensity;
@property(nonatomic) double aperture;
@property(nonatomic) double focalBlurRadius;
@property(nonatomic) double focalSize;
@property(nonatomic) double focalDistance;
@property(nonatomic) double orthographicScale;
@property(nonatomic) _Bool usesOrthographicProjection;
@property(nonatomic) _Bool automaticallyAdjustsZRange;
@property(nonatomic) double zFar;
@property(nonatomic) double zNear;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(copy, nonatomic) NSString *name;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@property(nonatomic) struct SCNMatrix4 projectionTransform;
@end

