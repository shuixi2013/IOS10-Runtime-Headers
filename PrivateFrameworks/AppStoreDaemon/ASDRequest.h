//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDRequestClient-Protocol.h>

@class NSString, NSXPCConnection;

@interface ASDRequest : NSObject <ASDRequestClient>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_startRequestType:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (void)requestCompletedWithResponse:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
