//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPRemoteModelAccessDelegate-Protocol.h>

@class NSData, NSString;

@protocol MSPMapsPushDaemonProxyObserver <MSPRemoteModelAccessDelegate>
- (void)pushDaemonProxyReceivedNotificationData:(NSData *)arg1 forType:(NSString *)arg2 recordIdentifier:(NSString *)arg3;
@end

