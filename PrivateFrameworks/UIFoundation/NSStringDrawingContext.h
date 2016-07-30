//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSDictionary;

@interface NSStringDrawingContext : NSObject
{
    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    struct CGRect _totalBounds;
    NSDictionary *_linkAttributes;
    CUICatalog *_CUICatalog;
    CUIStyleEffectConfiguration *_CUIStyleEffects;
    unsigned long long _numberOfLineFragments;
    unsigned long long _maximumNumberOfLines;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    double _firstBaselineOffset;
    id _layout;
    struct {
        unsigned int _wantsNumberOfLineFragments:1;
        unsigned int _wrapsForTruncationMode:1;
        unsigned int _wantsBaselineOffset:1;
        unsigned int _wantsScaledBaselineOffset:1;
        unsigned int _wantsScaledLineHeight:1;
        unsigned int _drawsDebugBaselines:1;
        unsigned int _cachesLayout:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _activeRenderers:4;
    } _sdcFlags;
}

@property(nonatomic) double actualTrackingAdjustment; // @synthesize actualTrackingAdjustment=_actualTrackingAdjustment;
@property(retain, nonatomic) id layout; // @synthesize layout=_layout;
@property(nonatomic) double firstBaselineOffset; // @synthesize firstBaselineOffset=_firstBaselineOffset;
@property(nonatomic) double scaledLineHeight; // @synthesize scaledLineHeight=_scaledLineHeight;
@property(nonatomic) double scaledBaselineOffset; // @synthesize scaledBaselineOffset=_scaledBaselineOffset;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_CUIStyleEffects;
@property(retain, nonatomic) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_CUICatalog;
@property(nonatomic) unsigned long long numberOfLineFragments; // @synthesize numberOfLineFragments=_numberOfLineFragments;
@property(nonatomic) struct CGRect totalBounds; // @synthesize totalBounds=_totalBounds;
@property(nonatomic) double actualScaleFactor; // @synthesize actualScaleFactor=_actualScaleFactor;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) unsigned long long activeRenderers;
@property(nonatomic) _Bool usesSimpleTextEffects;
@property(nonatomic) _Bool cachesLayout;
@property(nonatomic) _Bool drawsDebugBaselines;
@property(nonatomic) _Bool wantsScaledLineHeight;
@property(nonatomic) _Bool wantsScaledBaselineOffset;
@property(nonatomic) _Bool wantsBaselineOffset;
@property(nonatomic) _Bool wrapsForTruncationMode;
@property(nonatomic) _Bool wantsNumberOfLineFragments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
@property(nonatomic) double minimumTrackingAdjustment; // @dynamic minimumTrackingAdjustment;

@end

