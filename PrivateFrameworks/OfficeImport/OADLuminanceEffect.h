//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADBlipEffect.h>

__attribute__((visibility("hidden")))
@interface OADLuminanceEffect : OADBlipEffect
{
    float mBrightness;
    float mContrast;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setContrast:(float)arg1;
- (float)contrast;
- (void)setBrightness:(float)arg1;
- (float)brightness;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

