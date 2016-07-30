//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, HMFMessageDispatcher, NSHashTable, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HMDLocation : NSObject <CLLocationManagerDelegate>
{
    int _locationAuthorized;
    int _authStatus;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CLLocationManager *_locationManager;
    NSHashTable *_locationCallbacks;
    NSMapTable *_regionStateCallbacks;
}

+ (void)timeZoneForCLLocationAsync:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sunsetTimeForLocation:(id)arg1;
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sunriseTimeForLocation:(id)arg1;
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;
+ (id)_getAlmanacWithLocation:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMapTable *regionStateCallbacks; // @synthesize regionStateCallbacks=_regionStateCallbacks;
@property(retain, nonatomic) NSHashTable *locationCallbacks; // @synthesize locationCallbacks=_locationCallbacks;
@property(nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(nonatomic) int locationAuthorized; // @synthesize locationAuthorized=_locationAuthorized;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)beingConfigured:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;
- (void)_updateWithLocationAutorizationStatus:(int)arg1;
- (void)_updateWithLocation:(id)arg1;
- (void)_callDelegate:(id)arg1 withLocation:(id)arg2;
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extractLocationWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

