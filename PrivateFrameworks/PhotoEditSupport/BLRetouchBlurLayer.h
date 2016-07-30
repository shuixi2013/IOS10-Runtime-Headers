//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchBlurLayer : BLRetouchEffectLayer
{
    _Bool _sharpen;
    int _radius;
    double _radiusScale;
}

+ (id)layerWithBlur:(int)arg1;
+ (id)layerWithSharpen:(int)arg1;
@property(nonatomic) _Bool sharpen; // @synthesize sharpen=_sharpen;
@property(nonatomic) double radiusScale; // @synthesize radiusScale=_radiusScale;
@property(nonatomic) int radius; // @synthesize radius=_radius;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (int)radiusToApply;
- (_Bool)hasAmount;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;

@end

