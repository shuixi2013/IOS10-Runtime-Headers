//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADShade.h>

__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade
{
    float mAngle;
    _Bool mIsAngleOverridden;
    _Bool mScaled;
    _Bool mIsScaledOverridden;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isScaledOverridden;
- (void)setScaled:(_Bool)arg1;
- (_Bool)scaled;
- (_Bool)isAngleOverridden;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

