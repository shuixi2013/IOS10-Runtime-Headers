//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec
{
}

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
- (id)componentOfType:(unsigned int)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)effectPreset;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *components; // @dynamic components;
@property(retain, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

@end

