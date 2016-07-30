//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFMultiStateValueSet, NSString;

@interface HFMultiStateControlItem : HFControlItem
{
    NSString *_multiStateCharacteristicType;
    HFMultiStateValueSet *_possibleValueSet;
}

+ (Class)valueClass;
@property(readonly, copy, nonatomic) HFMultiStateValueSet *possibleValueSet; // @synthesize possibleValueSet=_possibleValueSet;
@property(readonly, copy, nonatomic) NSString *multiStateCharacteristicType; // @synthesize multiStateCharacteristicType=_multiStateCharacteristicType;
- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;

@end

