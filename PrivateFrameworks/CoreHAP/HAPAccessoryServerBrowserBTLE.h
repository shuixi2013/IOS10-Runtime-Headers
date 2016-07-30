//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import <CoreHAP/CBCentralManagerDelegate-Protocol.h>
#import <CoreHAP/HAPAccessoryServerBrowserWiProxBTLEDelegate-Protocol.h>

@class CBCentralManager, CBConnectionsObserver, HAPAccessoryServerBrowserWiProxBTLE, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate>
{
    _Bool _performingGeneralScan;
    unsigned long long _qosLimits;
    id <HAPAccessoryServerBrowserBTLEDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CBCentralManager *_centralManager;
    CBConnectionsObserver *_connectionsObserver;
    HAPAccessoryServerBrowserWiProxBTLE *_hapWiProxBLEBrowser;
    NSMapTable *_discoveredPeripheralsWithAccessories;
    NSMapTable *_recentlySeenPairedPeripherals;
    NSMutableArray *_powerOnCentralManagerCompletions;
    CDUnknownBlockType _reachabilityCompletion;
    NSMutableOrderedSet *_peripheralsWithConnectionRequests;
    NSMutableArray *_peripheralsPendingConnection;
    NSObject<OS_dispatch_source> *_targetedScanTimer;
    NSMutableArray *_targetedScanAccessoryIdentifiers;
    NSMapTable *_identifersWithReachabilityScanTuples;
    long long _scanState;
}

@property(nonatomic) long long scanState; // @synthesize scanState=_scanState;
@property(retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples; // @synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples;
@property(retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers; // @synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer; // @synthesize targetedScanTimer=_targetedScanTimer;
@property(retain, nonatomic) NSMutableArray *peripheralsPendingConnection; // @synthesize peripheralsPendingConnection=_peripheralsPendingConnection;
@property(retain, nonatomic) NSMutableOrderedSet *peripheralsWithConnectionRequests; // @synthesize peripheralsWithConnectionRequests=_peripheralsWithConnectionRequests;
@property(copy, nonatomic) CDUnknownBlockType reachabilityCompletion; // @synthesize reachabilityCompletion=_reachabilityCompletion;
@property(retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions; // @synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions;
@property(nonatomic, getter=isPerformingGeneralScan) _Bool performingGeneralScan; // @synthesize performingGeneralScan=_performingGeneralScan;
@property(retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals; // @synthesize recentlySeenPairedPeripherals=_recentlySeenPairedPeripherals;
@property(retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories; // @synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories;
@property(retain, nonatomic) HAPAccessoryServerBrowserWiProxBTLE *hapWiProxBLEBrowser; // @synthesize hapWiProxBLEBrowser=_hapWiProxBLEBrowser;
@property(retain, nonatomic) CBConnectionsObserver *connectionsObserver; // @synthesize connectionsObserver=_connectionsObserver;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserBTLEDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long qosLimits; // @synthesize qosLimits=_qosLimits;
- (void).cxx_destruct;
- (void)_handleTargetedScanTimeout;
- (void)_updateTargetedScanTimer;
- (_Bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 forPeripheral:(id)arg6 advertisementFormat:(unsigned long long)arg7 stateChanged:(_Bool *)arg8;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;
- (void)_connectPendingConnections;
- (void)_connectHAPPeripheralWhenAllowed:(id)arg1;
- (void)_removeFromPendingConnections:(id)arg1;
- (void)_addToPendingConnections:(id)arg1;
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 connectionIdleTime:(unsigned char)arg7 format:(unsigned long long)arg8;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)accessoryServerBrowserBTLE:(id)arg1 didDiscoverHAPPeripheral:(id)arg2 accessoryName:(id)arg3 pairingIdentifier:(id)arg4 advertisementFormat:(unsigned long long)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 category:(id)arg8 configurationNumber:(id)arg9;
- (void)_disconectFromHAPPeripheral:(id)arg1;
- (void)disconnectedHAPPeripheral:(id)arg1 error:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)failedToConnectHAPPeripheral:(id)arg1 error:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)connectedHAPPeripheral:(id)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_didDiscoverPeripheral:(id)arg1 accessoryName:(id)arg2 pairingIdentifier:(id)arg3 format:(unsigned long long)arg4 statusFlags:(id)arg5 stateNumber:(id)arg6 category:(id)arg7 configNumber:(id)arg8;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1;
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_removeIdentifiersForReachabilityScan;
- (void)_forgetPairedAccesoryWithIdentifier:(id)arg1;
- (void)forgetPairedAccesoryWithIdentifier:(id)arg1;
- (id)getCachedServiceSignatureForServiceInstanceID:(id)arg1 service:(id)arg2;
- (void)cacheServiceSignature:(id)arg1 serviceInstanceID:(id)arg2 forService:(id)arg3;
- (id)getCachedCharacteristicSignatureForCharacteristicInstanceID:(id)arg1 characteristic:(id)arg2;
- (void)cacheCharacteristicSignature:(id)arg1 characteristicInstanceID:(id)arg2 forCharacteristic:(id)arg3;
- (void)_clearCachedDescriptorsForIdentifier:(id)arg1;
- (void)updateCacheWithDescriptor:(id)arg1 forServiceInstance:(id)arg2;
- (id)cachedDescriptorsForCharacteristic:(id)arg1 forServiceInstance:(id)arg2;
- (void)markNotifyingCharacteristicUpdatedOnPeripheral:(id)arg1;
- (void)configureBTLEQoSLimits:(unsigned long long)arg1;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)configureAccessoryWithIdentifier:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(unsigned long long)arg3;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setReachabilityCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_callPowerOnCompletionsWithError:(id)arg1;
- (void)_powerOnCentralManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startScanningForReachability;
- (_Bool)_hasPairedAccessoriesOfType:(unsigned long long)arg1;
- (void)_startScanningForPairingPeers;
- (void)_stopActiveScan;
- (void)stopDiscoveringAccessoryServers;
- (void)_startDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;
- (id)initWithQueue:(id)arg1;
- (void)setConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (unsigned long long)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id *)arg3 pairingUsername:(id *)arg4 statusFlags:(id *)arg5 stateNumber:(id *)arg6 category:(id *)arg7 configNumber:(id *)arg8;
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;
- (void)connectToBTLEAccessoryServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

