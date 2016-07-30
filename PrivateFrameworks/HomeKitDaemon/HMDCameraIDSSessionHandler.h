//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, IDSSession, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionHandler : NSObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_sessionID;
    IDSService *_idsStreamService;
    IDSSession *_idsSession;
}

+ (id)logCategory;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(readonly, nonatomic) IDSService *idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)startKeepAlive;
- (void)_reset;
- (void)reset;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

