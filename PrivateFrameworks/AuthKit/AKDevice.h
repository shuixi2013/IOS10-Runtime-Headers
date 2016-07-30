//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSLocale, NSLock, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isMonitoringUnlockEvents;
    NSLock *_monitoringLock;
    NSString *_serverFriendlyDescription;
    NSString *_uniqueDeviceIdentifier;
    NSString *_color;
    NSString *_enclosureColor;
    NSLocale *_locale;
    NSString *_MLBSerialNumber;
    NSString *_ROMAddress;
    NSString *_modelNumber;
    unsigned long long _linkType;
}

+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)_buildNumber;
+ (id)_osVersion;
+ (id)_osName;
+ (id)_hardwareModel;
+ (id)_generateServerFriendlyDescription;
+ (id)_lookupModelNumber;
+ (id)_lookupMLBSerialNumber;
+ (id)_lookupROMAddress;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentColor;
+ (id)deviceWithSerializedData:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
@property(setter=setLinkType:) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(copy) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy) NSString *ROMAddress; // @synthesize ROMAddress=_ROMAddress;
@property(copy) NSString *MLBSerialNumber; // @synthesize MLBSerialNumber=_MLBSerialNumber;
@property(copy) NSLocale *locale; // @synthesize locale=_locale;
@property(copy) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy) NSString *color; // @synthesize color=_color;
@property(copy) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(copy) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
- (void).cxx_destruct;
@property(readonly) NSString *phoneNumber;
@property(readonly) _Bool isInternalBuild;
@property(readonly) NSString *integratedCircuitCardIdentifier;
@property(readonly) NSString *mobileEquipmentIdentifier;
@property(readonly) _Bool isAppleIDLoginEnabled;
@property(readonly) _Bool isProtectedWithPasscode;
@property(readonly) _Bool isUnlocked;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *internationalMobileEquipmentIdentity;
@property(readonly) NSString *userChosenName;
@property _Bool hasBeenUnlockedSinceLastCheckIn;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSData *serializedData;
- (id)init;

@end

