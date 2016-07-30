//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CommonUtilities/CUTPowerMonitorDelegate-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableSet, NSNumber, NSRecursiveLock, NSRunLoop, NSString, NSThread;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate>
{
    _Bool _shouldAutoAssociateAsForeground;
    _Bool _isHostingHotSpot;
    _Bool _isWifiEnabled;
    _Bool _isWakeOnWiFiEnabled;
    _Bool _isWakeOnWiFiSupported;
    int _linkToken;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSRecursiveLock *_lock;
    NSHashTable *_delegateMap;
    NSHashTable *_wowClients;
    void *_currentNetwork;
    void *_wifiManager;
    void *_wifiDevice;
    void *_dynamicStore;
    NSDictionary *_lastWiFiPowerInfo;
    NSThread *_wifiThread;
    struct __CFRunLoopSource *_runLoopSource;
    NSRunLoop *_wifiRunLoop;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRunLoop *wifiRunLoop; // @synthesize wifiRunLoop=_wifiRunLoop;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(retain, nonatomic) NSThread *wifiThread; // @synthesize wifiThread=_wifiThread;
@property(copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // @synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo;
@property(nonatomic) void *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property(nonatomic) void *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
@property(nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(nonatomic) int linkToken; // @synthesize linkToken=_linkToken;
@property(nonatomic) void *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(retain, nonatomic) NSHashTable *wowClients; // @synthesize wowClients=_wowClients;
@property(retain, nonatomic) NSHashTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(readonly, nonatomic) _Bool isWoWSupported; // @synthesize isWoWSupported=_isWakeOnWiFiSupported;
@property(nonatomic) _Bool autoAssociateWiFiAsForegroundClient; // @synthesize autoAssociateWiFiAsForegroundClient=_shouldAutoAssociateAsForeground;
@property(readonly, nonatomic) _Bool isWoWEnabled; // @synthesize isWoWEnabled=_isWakeOnWiFiEnabled;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (_Bool)hasWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateWiFi;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
@property(readonly, nonatomic) _Bool isWiFiCaptive;
- (_Bool)_isPrimaryCellular;
@property(readonly, retain, nonatomic) NSString *currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(CDUnknownBlockType)arg1;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
@property(readonly, nonatomic) _Bool isWiFiEnabled; // @synthesize isWiFiEnabled=_isWifiEnabled;
- (void)_updateIsWiFiEnabled;
- (void)_updateIsWiFiAssociatedAsync:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isWiFiAssociated;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) _Bool willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) _Bool willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) _Bool isHostingWiFiHotSpot; // @synthesize isHostingWiFiHotSpot=_isHostingHotSpot;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)_adjustWoWState;
- (_Bool)hasWoWClient:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

