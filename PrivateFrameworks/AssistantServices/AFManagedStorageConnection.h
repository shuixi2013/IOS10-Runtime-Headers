//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFManagedStore-Protocol.h>

@class NSString, NSXPCConnection;

@interface AFManagedStorageConnection : NSObject <AFManagedStore>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;
- (id)domainObjectForKey:(id)arg1;
- (id)_managedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_managedStoreService;
- (id)_connection;
- (void)_clearConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

