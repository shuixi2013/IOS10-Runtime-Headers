//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_entitlementCache;
    GEONavdClientInfo *_clientInfo;
    _Bool _expectingUpdates;
}

@property(nonatomic) _Bool expectingUpdates; // @synthesize expectingUpdates=_expectingUpdates;
@property(readonly, nonatomic) GEONavdClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (_Bool)hasEntitlement:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end

