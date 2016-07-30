//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, UIColor;

@interface NTKFaceColorScheme : NSObject
{
    NSMutableDictionary *_colorsByUnit;
    _Bool _containsOverrideFaceColor;
    NSArray *_faceColors;
    double _multicolorAlpha;
}

+ (id)interpolationFromFaceColor:(unsigned long long)arg1 toFaceColor:(unsigned long long)arg2 fraction:(double)arg3 units:(unsigned long long)arg4 brightenUnits:(unsigned long long)arg5 overrideColor:(id)arg6 alternateHighlight:(_Bool)arg7;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3 brightenUnits:(unsigned long long)arg4;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3;
+ (id)colorSchemeWithFaceColor:(unsigned long long)arg1 foregroundColor:(id)arg2 units:(unsigned long long)arg3 alternateHighlight:(_Bool)arg4;
+ (id)colorSchemeWithFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
@property(nonatomic) double multicolorAlpha; // @synthesize multicolorAlpha=_multicolorAlpha;
@property(retain, nonatomic) NSArray *faceColors; // @synthesize faceColors=_faceColors;
@property(nonatomic) _Bool containsOverrideFaceColor; // @synthesize containsOverrideFaceColor=_containsOverrideFaceColor;
- (void).cxx_destruct;
- (id)_colorForUnit:(unsigned long long)arg1;
- (void)_setColor:(id)arg1 forUnit:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long units;
@property(readonly, nonatomic) UIColor *activityTickColor;
@property(readonly, nonatomic) UIColor *alternativeTickColor;
@property(readonly, nonatomic) UIColor *tickColor;
@property(readonly, nonatomic) UIColor *stackedImagesForegroundColor;
@property(readonly, nonatomic) UIColor *shiftedBackgroundColor;
@property(readonly, nonatomic) UIColor *shiftedForegroundColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *secondaryForegroundColor;
@property(readonly, nonatomic) UIColor *foregroundColor;
- (id)init;

@end

