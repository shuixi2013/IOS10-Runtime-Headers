//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic;

@interface HMCharacteristicWriteRequestTuple : NSObject
{
    HMCharacteristic *_characteristic;
    id _value;
}

+ (id)tupleWithCharacteristic:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

