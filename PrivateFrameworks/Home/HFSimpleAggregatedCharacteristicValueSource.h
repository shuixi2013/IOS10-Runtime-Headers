//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAggregatedCharacteristicValueSource-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource>
{
    id <HFCharacteristicValueSource> _valueSource;
    NSDictionary *_characteristicsByType;
}

@property(readonly, nonatomic) NSDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *characteristics;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

