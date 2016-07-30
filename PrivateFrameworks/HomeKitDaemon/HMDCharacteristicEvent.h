//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCharacteristic;

@interface HMDCharacteristicEvent : HMDEvent <NSSecureCoding>
{
    HMDCharacteristic *_characteristic;
    id _eventValue;
    id _previousValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)characteristicEventWithDictionary:(id)arg1 home:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (void)replaceCharacteristic:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 eventValue:(id)arg2;

@end

