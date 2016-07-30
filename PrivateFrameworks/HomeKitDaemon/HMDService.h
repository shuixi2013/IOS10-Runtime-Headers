//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDApplicationData, HMDBulletinBoardNotification, NSArray, NSNumber, NSString, NSUUID;

@interface HMDService : NSObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState>
{
    _Bool _hidden;
    _Bool _primary;
    HMDAccessory *_accessory;
    NSString *_name;
    NSString *_associatedServiceType;
    NSArray *_characteristics;
    NSString *_serviceType;
    HMDApplicationData *_appData;
    HMDBulletinBoardNotification *_bulletinBoardNotification;
    NSString *_providedName;
    NSNumber *_instanceID;
    NSArray *_linkedServices;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(retain, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic, getter=getName) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (void)updateLastKnownValues;
- (id)getConfiguredName;
- (void)updateName:(id)arg1;
- (_Bool)updateAssociatedServiceType:(id)arg1 error:(id *)arg2;
- (id)findCharacteristicWithType:(id)arg1;
- (id)findCharacteristic:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, copy, nonatomic) NSString *type;
- (id)initWithService:(id)arg1 accessory:(id)arg2;
- (void)_readRequiredBTLECharacteristicValues;
- (void)_updateProvidedName:(id)arg1;
- (void)_updateName:(id)arg1;
- (void)_setServiceProperties:(id)arg1;
- (void)_shouldServiceBeHidden;
- (_Bool)_supportsBulletinNotification;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

