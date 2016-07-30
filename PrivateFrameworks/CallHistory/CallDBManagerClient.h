//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;
    id _syncHelperReadyNotificationRef;
}

@property(retain) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (void).cxx_destruct;
- (id)permDBLocation:(unsigned char *)arg1;
- (id)tempDBLocation:(unsigned char *)arg1;
- (void)pokeSyncHelperToInitDB;
- (void)moveCallsFromTempDatabase;
- (_Bool)validateTempDatabase;
- (_Bool)validatePermDatabase;
- (void)createTemporary;
- (void)createPermanent;
- (void)createHelperConnection;
- (void)handlePermanentCreated;
- (_Bool)willMoveCallsFromTempDatabase;

@end

