//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, NSString;

@interface GEODeviceState : PBCodable <NSCopying>
{
    GEOCarInfo *_carInfo;
    int _deviceBatteryState;
    NSString *_deviceCarrierName;
    int _deviceConnectivity;
    NSString *_deviceCountryCode;
    NSString *_deviceInputLocale;
    int _deviceInterfaceOrientation;
    NSString *_deviceLocale;
    NSString *_deviceOutputLocale;
    struct {
        unsigned int deviceBatteryState:1;
        unsigned int deviceConnectivity:1;
        unsigned int deviceInterfaceOrientation:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceCarrierName; // @synthesize deviceCarrierName=_deviceCarrierName;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(retain, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) NSString *deviceOutputLocale; // @synthesize deviceOutputLocale=_deviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale; // @synthesize deviceInputLocale=_deviceInputLocale;
@property(retain, nonatomic) NSString *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceCarrierName;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState; // @synthesize deviceBatteryState=_deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation; // @synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation;
@property(readonly, nonatomic) _Bool hasCarInfo;
- (int)StringAsDeviceConnectivity:(id)arg1;
- (id)deviceConnectivityAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceConnectivity;
@property(nonatomic) int deviceConnectivity; // @synthesize deviceConnectivity=_deviceConnectivity;
@property(readonly, nonatomic) _Bool hasDeviceOutputLocale;
@property(readonly, nonatomic) _Bool hasDeviceInputLocale;
@property(readonly, nonatomic) _Bool hasDeviceLocale;
- (void)dealloc;

@end

