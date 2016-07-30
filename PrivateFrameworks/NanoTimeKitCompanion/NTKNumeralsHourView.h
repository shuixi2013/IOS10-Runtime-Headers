//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView
{
    long long _hour;
    unsigned long long _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
    _Bool _isLoaded;
}

@property(readonly) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2;
- (void)_applyTintColor:(id)arg1;
- (id)_hourColorForFaceColor:(unsigned long long)arg1 colorSchemeUnits:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)load;
- (id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;

@end

