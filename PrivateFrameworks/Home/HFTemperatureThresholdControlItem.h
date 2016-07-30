//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class NSFormatter, NSNumber, NSString;

@interface HFTemperatureThresholdControlItem : HFControlItem
{
    NSString *_minimumCharacteristicType;
    NSString *_maximumCharacteristicType;
    NSFormatter *_valueFormatter;
}

+ (Class)valueClass;
@property(retain, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(readonly, copy, nonatomic) NSString *maximumCharacteristicType; // @synthesize maximumCharacteristicType=_maximumCharacteristicType;
@property(readonly, copy, nonatomic) NSString *minimumCharacteristicType; // @synthesize minimumCharacteristicType=_minimumCharacteristicType;
- (void).cxx_destruct;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_minimumCharacteristicTypeMetadata;
- (id)_defaultValueFormatter;
@property(readonly, copy, nonatomic) NSNumber *minimumCharacteristicTypeStepValue;
@property(readonly, copy, nonatomic) NSNumber *maximumCharacteristicTypeStepValue;
@property(readonly, copy, nonatomic) NSNumber *maximumValue;
@property(readonly, copy, nonatomic) NSNumber *minimumValue;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 minimumCharacteristicType:(id)arg2 maximumCharacteristicType:(id)arg3 displayResults:(id)arg4;

@end
