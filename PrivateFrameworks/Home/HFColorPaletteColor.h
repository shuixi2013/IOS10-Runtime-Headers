//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSNumber, NSString, UIColor;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>
{
    float _red;
    float _green;
    float _blue;
    NSNumber *_temperature;
    unsigned long long _colorType;
}

@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(readonly, nonatomic) NSNumber *temperature; // @synthesize temperature=_temperature;
@property(readonly, nonatomic) float blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) float green; // @synthesize green=_green;
@property(readonly, nonatomic) float red; // @synthesize red=_red;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1 ignoreTemperature:(_Bool)arg2;
@property(readonly, nonatomic) UIColor *UIColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 temperature:(id)arg4;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

