//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPServerObject : NSObject
{
    int _clientPID;
    CDStruct_6ad76789 *_clientAuditToken;
}

+ (id)_center;
@property(readonly, nonatomic) CDStruct_6ad76789 *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, nonatomic) int clientPID; // @synthesize clientPID=_clientPID;
- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;
- (void)_registerNotificationsForSelectors;
- (id)init;

@end

