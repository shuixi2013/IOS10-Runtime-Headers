//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HAPOSTransaction, IDSService, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStream : NSObject <IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uniqueIdentifier;
    IDSService *_idsProxyService;
    HAPOSTransaction *_snapshotStreamTransaction;
}

@property(retain, nonatomic) HAPOSTransaction *snapshotStreamTransaction; // @synthesize snapshotStreamTransaction=_snapshotStreamTransaction;
@property(readonly, nonatomic) IDSService *idsProxyService; // @synthesize idsProxyService=_idsProxyService;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

