//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_colorForValue:(unsigned long long)arg1;
+ (id)optionWithFaceColor:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) double desaturation;
@property(readonly, nonatomic) UIColor *colorValue;
@property(readonly, nonatomic) unsigned long long color;

@end

