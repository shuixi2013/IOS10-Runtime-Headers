//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADOperationProxy, ClientIdentity, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol ClientConnectionDelegate, OS_dispatch_queue;

@interface ClientConnection : NSObject
{
    _Bool _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    NSLock *_restrictionsLock;
    NSSet *_restrictedStoreRowIDs;
    NSSet *_restrictedCalendarRowIDs;
    int _sourceAccountManagement;
    struct CalDatabase *_database;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    int _databaseInitializationOptions;
    CADOperationProxy *_cadOperationProxy;
    id <ClientConnectionDelegate> _delegate;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
    NSString *_databasePath;
}

@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) int databaseInitializationOptions; // @synthesize databaseInitializationOptions=_databaseInitializationOptions;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) ClientIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) struct CalDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <ClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CADOperationProxy *cadOperationProxy; // @synthesize cadOperationProxy=_cadOperationProxy;
- (void).cxx_destruct;
- (_Bool)isCalendarItemRestricted:(void *)arg1;
- (_Bool)isCalendarRestricted:(void *)arg1;
- (_Bool)isStoreRestricted:(void *)arg1;
- (id)restrictedCalendarRowIDsWithValidator:(id)arg1;
- (id)restrictedCalendarRowIDs;
- (id)_restrictedStoreRowIDs;
- (_Bool)_shouldUseMCToBlacklist;
- (id)restrictedStoreRowIDs;
- (void)setSourceAccountManagement:(int)arg1;
- (_Bool)reminderAccessGranted;
- (_Bool)eventAccessGranted;
- (void)clearCachedAuthorizationStatus;
- (void)_loadAccessPermissionsIfNeeded;
- (void)dumpState;
- (void)_databaseChanged;
- (id)insertedObjects;
- (void)clearInsertedObjects;
- (void *)objectForKey:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)operations;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;

@end

