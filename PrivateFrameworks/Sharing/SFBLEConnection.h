//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CURetrier, NSMutableSet, SFBLEData, SFBLEDevice;
@protocol OS_dispatch_queue;

@interface SFBLEConnection : NSObject
{
    _Bool _acceptor;
    _Bool _activateCalled;
    NSMutableSet *_clients;
    _Bool _connected;
    _Bool _connecting;
    double _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    struct NSMutableArray *_dataSendQueue;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    CDUnknownBlockType _bluetoothBandwidthChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _dataHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    SFBLEDevice *_peerDevice;
}

@property(retain, nonatomic) SFBLEDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothBandwidthChangedHandler; // @synthesize bluetoothBandwidthChangedHandler=_bluetoothBandwidthChangedHandler;
@property(nonatomic) _Bool acceptor; // @synthesize acceptor=_acceptor;
- (void).cxx_destruct;
- (_Bool)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_cleanupQueuedData:(int)arg1;
- (void)_processQueuedData;
- (void)_connectIfNeeded;
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 acceptor:(_Bool)arg2;

@end

