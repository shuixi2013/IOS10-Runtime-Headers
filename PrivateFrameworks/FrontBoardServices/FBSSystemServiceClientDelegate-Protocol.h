//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSSystemServiceClient, FBSXPCMessage, NSError;

@protocol FBSSystemServiceClientDelegate <NSObject>
- (void)client:(FBSSystemServiceClient *)arg1 handleError:(NSError *)arg2;
- (void)client:(FBSSystemServiceClient *)arg1 handleMessage:(FBSXPCMessage *)arg2 withType:(long long)arg3;
- (void)client:(FBSSystemServiceClient *)arg1 configureConnectMessage:(FBSXPCMessage *)arg2;
@end

