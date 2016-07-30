//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CBCentralManagerPrivateDelegate-Protocol.h>

@class CBCentralManager, CBUUID, HDIdentifierTable, NSLock, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol HDHealthDaemon, HDHealthDataCollectionManager, OS_dispatch_queue;

@interface HDHealthServiceManager : NSObject <CBCentralManagerPrivateDelegate>
{
    CBCentralManager *_central;
    NSObject<OS_dispatch_queue> *_queue;
    id <HDHealthDataCollectionManager> _dataCollectionManager;
    id <HDHealthDaemon> _daemon;
    NSLock *_discoveryLock;
    HDIdentifierTable *_discoveryInfosTable;
    NSMutableDictionary *_discoveryInfosByServiceUUID;
    NSSet *_scanServiceUUIDs;
    CBUUID *_allServicesUUID;
    NSMutableArray *_allServicesArray;
    NSLock *_connectionLock;
    HDIdentifierTable *_connectionInfosTable;
    NSMutableDictionary *_connectionInfosByPeripheralUUID;
    NSMutableDictionary *_healthServicesByPeripheralUUID;
    NSMutableDictionary *_connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary *_propertyManagerByPeripheralUUID;
    NSMutableDictionary *_bluetoothUpdateHandlers;
}

+ (Class)_serviceClassWithServiceUUID:(id)arg1;
+ (id)serviceClassesByUUIDKeys;
+ (Class)_serviceClassWithServiceType:(long long)arg1;
+ (long long)_isBTLESupportedWithCentral:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableDictionary *bluetoothUpdateHandlers; // @synthesize bluetoothUpdateHandlers=_bluetoothUpdateHandlers;
@property(retain, nonatomic) NSMutableDictionary *propertyManagerByPeripheralUUID; // @synthesize propertyManagerByPeripheralUUID=_propertyManagerByPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *connectedPeripheralsByPeripheralUUID; // @synthesize connectedPeripheralsByPeripheralUUID=_connectedPeripheralsByPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *healthServicesByPeripheralUUID; // @synthesize healthServicesByPeripheralUUID=_healthServicesByPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *connectionInfosByPeripheralUUID; // @synthesize connectionInfosByPeripheralUUID=_connectionInfosByPeripheralUUID;
@property(retain, nonatomic) HDIdentifierTable *connectionInfosTable; // @synthesize connectionInfosTable=_connectionInfosTable;
@property(retain, nonatomic) NSLock *connectionLock; // @synthesize connectionLock=_connectionLock;
@property(retain, nonatomic) NSMutableArray *allServicesArray; // @synthesize allServicesArray=_allServicesArray;
@property(retain, nonatomic) CBUUID *allServicesUUID; // @synthesize allServicesUUID=_allServicesUUID;
@property(retain, nonatomic) NSSet *scanServiceUUIDs; // @synthesize scanServiceUUIDs=_scanServiceUUIDs;
@property(retain, nonatomic) NSMutableDictionary *discoveryInfosByServiceUUID; // @synthesize discoveryInfosByServiceUUID=_discoveryInfosByServiceUUID;
@property(retain, nonatomic) HDIdentifierTable *discoveryInfosTable; // @synthesize discoveryInfosTable=_discoveryInfosTable;
@property(retain, nonatomic) NSLock *discoveryLock; // @synthesize discoveryLock=_discoveryLock;
@property(nonatomic) __weak id <HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) id <HDHealthDataCollectionManager> dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CBCentralManager *central; // @synthesize central=_central;
- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)connectHealthService:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)_reportExistingDiscoveriesForService:(id)arg1;
- (id)_reportPeripheral:(id)arg1 serviceUUID:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)performOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getSupportedPropertyNamesWithHandler:(CDUnknownBlockType)arg1;
- (void)reportTransitoryData:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;
- (void)dataReceived:(id)arg1 deviceEntity:(id)arg2;
- (id)healthServiceForUUID:(id)arg1;
- (void)_queue_stopScan;
- (void)_queue_updateScan;
- (void)_removeConnectedPeripheral:(unsigned long long)arg1 withError:(id)arg2;
- (unsigned long long)_addConnectedPeripheral:(id)arg1 forService:(id)arg2 withSessionHandler:(CDUnknownBlockType)arg3 withTransitoryHandler:(CDUnknownBlockType)arg4 withCharacteristicsHandler:(CDUnknownBlockType)arg5;
- (id)_copyConnectionInfosForPeripheralUUID:(id)arg1;
- (id)_copyDiscoveryInfosForServiceUUID:(id)arg1;
- (void)servicesInvalidatedForDevice:(id)arg1 withError:(id)arg2;
- (void)disconnectHealthService:(unsigned long long)arg1;
- (unsigned long long)connectHealthService:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(CDUnknownBlockType)arg3 transitoryHandler:(CDUnknownBlockType)arg4 characteristicsHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (void)discoveredCharacteristics:(id)arg1 forDevice:(id)arg2 service:(id)arg3;
- (void)discoveredServices:(id)arg1 forPeripheral:(id)arg2;
- (id)_serviceFromUUID:(id)arg1 peripheral:(id)arg2;
- (id)_createDiscoveryTimeout:(unsigned long long)arg1 forIdentifier:(unsigned long long)arg2;
- (void)stopDiscoveryWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)discoverHealthServicesWithType:(long long)arg1 timeout:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)_notifyBluetoothStatusUpdates:(long long)arg1 error:(id)arg2;
- (void)sendBluetoothStatusUpdatesForServer:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setHealthUpdatesEnabled:(_Bool)arg1 fromDevice:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (_Bool)healthUpdatesEnabledFromDevice:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)reviewSavedHealthServiceSessions:(id)arg1 withError:(id *)arg2;
- (id)initWithCentralManager:(id)arg1 healthDaemon:(id)arg2 queue:(id)arg3;
- (id)initWithHealthDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

