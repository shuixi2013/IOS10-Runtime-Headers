//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, PKDaemonClient;
@protocol OS_dispatch_queue;

@interface PKHost : NSObject
{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSMutableDictionary *_activeOneShots;
    NSMapTable *_discoveryMap;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_client;
}

+ (id)defaultHost;
@property(retain) PKDaemonClient *client; // @synthesize client=_client;
@property(retain) NSObject<OS_dispatch_queue> *hostQueue; // @synthesize hostQueue=_hostQueue;
@property(retain) NSMapTable *discoveryMap; // @synthesize discoveryMap=_discoveryMap;
@property(retain) NSMutableDictionary *activeOneShots; // @synthesize activeOneShots=_activeOneShots;
@property(retain) NSMutableDictionary *activePlugIns; // @synthesize activePlugIns=_activePlugIns;
- (void).cxx_destruct;
@property(readonly) NSDictionary *hostInfoPlist; // @synthesize hostInfoPlist=_hostInfoPlist;
- (void)deactivatePlugIn:(id)arg1;
- (id)activatePlugIn:(id)arg1;
- (id)activePlugInForIdentifier:(id)arg1;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)readyPlugIns:(id)arg1 ready:(CDUnknownBlockType)arg2;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(CDUnknownBlockType)arg3;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (id)init;

@end

