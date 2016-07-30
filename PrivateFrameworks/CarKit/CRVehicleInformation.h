//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVExternalDevice;

@interface CRVehicleInformation : NSObject
{
    AVExternalDevice *_externalDevice;
    unsigned long long _mapsFallbackAmbientBrightness;
}

@property(nonatomic) unsigned long long mapsFallbackAmbientBrightness; // @synthesize mapsFallbackAmbientBrightness=_mapsFallbackAmbientBrightness;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
- (void).cxx_destruct;
- (void)_handleNightModeChanged:(id)arg1;
- (void)_handleLimitedUIChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long vehicleAmbientBrightness;
@property(readonly, nonatomic) unsigned long long interactionRestrictions;
@property(readonly, nonatomic) unsigned long long driverPosition;
- (void)_screenDidUpdate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

