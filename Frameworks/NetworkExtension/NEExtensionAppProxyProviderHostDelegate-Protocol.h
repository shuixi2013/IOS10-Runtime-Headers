//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostDelegate-Protocol.h>

@class NEAppRule, NEExtensionAppProxyProviderHostContext, NSUUID;

@protocol NEExtensionAppProxyProviderHostDelegate <NEExtensionTunnelProviderHostDelegate>
- (void)extension:(NEExtensionAppProxyProviderHostContext *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg2;
- (void)extension:(NEExtensionAppProxyProviderHostContext *)arg1 didRequestMatchAppPID:(long long)arg2 uuid:(NSUUID *)arg3 withAppRule:(NEAppRule *)arg4 completionHandler:(void (^)(_Bool))arg5;
@end

