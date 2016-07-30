//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreBluetooth/CBManager.h>

@class NSMapTable;
@protocol CBCentralManagerDelegate;

@interface CBCentralManager : CBManager
{
    struct {
        unsigned int willRestoreState:1;
        unsigned int didDiscoverPeripheral:1;
        unsigned int didConnectPeripheral:1;
        unsigned int didFailToConnectPeripheral:1;
        unsigned int didDisconnectPeripheral:1;
        unsigned int didUpdatePeripheralConnectionState:1;
        unsigned int didLoseZone:1;
        unsigned int didUpdateConnectionParameters:1;
    } _delegateFlags;
    _Bool _isScanning;
    id <CBCentralManagerDelegate> _delegate;
    NSMapTable *_peripherals;
}

@property(readonly, retain, nonatomic) NSMapTable *peripherals; // @synthesize peripherals=_peripherals;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) __weak id <CBCentralManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1 force:(_Bool)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(_Bool)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)orphanPeripherals;
- (void)forEachPeripheral:(CDUnknownBlockType)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;

@end

