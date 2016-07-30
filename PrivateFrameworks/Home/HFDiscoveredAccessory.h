//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class HMAccessory, NSDate, NSError, NSString, NSUUID;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>
{
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
    HMAccessory *_accessory;
    NSDate *_discoveryDate;
    unsigned long long _status;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSString *description;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithAccessory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

