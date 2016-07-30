//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDevice-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSNumber, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDevice : IKJSObject <IKJSDevice, JSExport>
{
    id _isNetworkTypeChangedToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;
@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
- (void).cxx_destruct;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)capacity:(id)arg1;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) NSNumber *pixelRatio;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (_Bool)isAdvertisingTrackingEnabled;
- (id)advertisingIdentifier;
@property(readonly, nonatomic) NSString *vendorIdentifier;
@property(readonly, nonatomic) NSString *vendorID;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;

@end

