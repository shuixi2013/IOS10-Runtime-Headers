//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class MDLTexture, NSData, NSMutableData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight
{
    struct RTIESLight *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
    MDLTexture *_lightCubeMap;
    unsigned long long _sphericalHarmonicsLevel;
}

@property(readonly, nonatomic) unsigned long long sphericalHarmonicsLevel; // @synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel;
@property(readonly, retain, nonatomic) MDLTexture *lightCubeMap; // @synthesize lightCubeMap=_lightCubeMap;
- (void).cxx_destruct;
- (struct CGColor *)evaluatedColorFromSHVector: /* Error: Ran out of types for this method. */;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (id)computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (float)computeInnerAngle;
- (void)computeLumens;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (id)initWithIESProfile:(id)arg1;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

@end

