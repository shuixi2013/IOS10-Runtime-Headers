//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFormatter;

__attribute__((visibility("hidden")))
@interface TSKRulerUnits : NSObject
{
    int _rulerUnits;
    _Bool _showRulerAsPercentage;
    _Bool _centerRulerOrigin;
    int _preferredPixelUnit;
    NSFormatter *_formatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
}

+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(_Bool)arg3 lenient:(_Bool)arg4;
+ (id)instance;
@property(nonatomic) int preferredPixelUnit; // @synthesize preferredPixelUnit=_preferredPixelUnit;
@property(nonatomic) _Bool centerRulerOrigin; // @synthesize centerRulerOrigin=_centerRulerOrigin;
@property(nonatomic) _Bool showRulerAsPercentage; // @synthesize showRulerAsPercentage=_showRulerAsPercentage;
@property(nonatomic) int rulerUnits; // @synthesize rulerUnits=_rulerUnits;
- (id)localizedCompatibleRulerUnits;
- (id)compatibleRulerUnits;
- (id)formatter:(_Bool)arg1 lenient:(_Bool)arg2;
- (double)convertPointsToRulerUnits:(double)arg1;
- (double)convertRulerUnitsToPoints:(double)arg1;
- (void)dealloc;
- (id)init;

@end

