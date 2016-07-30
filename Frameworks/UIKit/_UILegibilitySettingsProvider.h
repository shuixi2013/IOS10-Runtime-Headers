//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject
{
    _Bool _hasContrast;
    _Bool _accumulatorIsPrimed;
    double _mostRecentSaturation;
    double _accumulatedSaturation;
    double _mostRecentBrightness;
    double _accumulatedBrightness;
    UIColor *_contentColor;
    double _mostRecentContrast;
    double _accumulatedContrast;
    double _mostRecentLuminance;
    double _accumulatedLuminance;
    double _nextChangeBarrier;
    long long _currentStyle;
}

+ (long long)styleForContentColor:(id)arg1 contrast:(double)arg2;
+ (long long)styleForContentColor:(id)arg1;
@property(nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) double nextChangeBarrier; // @synthesize nextChangeBarrier=_nextChangeBarrier;
@property(nonatomic) _Bool accumulatorIsPrimed; // @synthesize accumulatorIsPrimed=_accumulatorIsPrimed;
@property(nonatomic) _Bool hasContrast; // @synthesize hasContrast=_hasContrast;
@property(nonatomic) double accumulatedLuminance; // @synthesize accumulatedLuminance=_accumulatedLuminance;
@property(nonatomic) double mostRecentLuminance; // @synthesize mostRecentLuminance=_mostRecentLuminance;
@property(nonatomic) double accumulatedContrast; // @synthesize accumulatedContrast=_accumulatedContrast;
@property(nonatomic) double mostRecentContrast; // @synthesize mostRecentContrast=_mostRecentContrast;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) double accumulatedBrightness; // @synthesize accumulatedBrightness=_accumulatedBrightness;
@property(nonatomic) double mostRecentBrightness; // @synthesize mostRecentBrightness=_mostRecentBrightness;
@property(nonatomic) double accumulatedSaturation; // @synthesize accumulatedSaturation=_accumulatedSaturation;
@property(nonatomic) double mostRecentSaturation; // @synthesize mostRecentSaturation=_mostRecentSaturation;
- (id)settings;
- (void)clearContentColorAccumulator;
- (_Bool)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2;
- (_Bool)accumulateChangesToContentColor:(id)arg1;
- (void)dealloc;

@end

