//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SFBLEDevice, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFEventMessage, SFRemoteInteractionSession, SFRequestMessage, SFResponseMessage, SFService, SFSession;

@protocol SDXPCInterface
- (void)sessionSendResponse:(SFResponseMessage *)arg1;
- (void)sessionSendRequest:(SFRequestMessage *)arg1;
- (void)sessionSendEvent:(SFEventMessage *)arg1;
- (void)sessionActivate:(SFSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceSendResponse:(SFResponseMessage *)arg1;
- (void)serviceSendRequest:(SFRequestMessage *)arg1;
- (void)serviceSendEvent:(SFEventMessage *)arg1;
- (void)serviceUpdate:(SFService *)arg1;
- (void)serviceActivate:(SFService *)arg1 completion:(void (^)(NSError *))arg2;
- (void)remoteInteractionSessionSetText:(NSString *)arg1;
- (void)remoteInteractionSessionInsertText:(NSString *)arg1;
- (void)remoteInteractionSessionDeleteTextBackward;
- (void)remoteInteractionSessionCommitText;
- (void)remoteInteractionSessionClearText;
- (void)remoteInteractionSessionActivate:(SFRemoteInteractionSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticUnlockTestServer;
- (void)diagnosticUnlockTestClientWithDevice:(SFBLEDevice *)arg1;
- (void)diagnosticShow:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticGetVersionWithCompletion:(void (^)(NSString *))arg1;
- (void)diagnosticControl:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticBLEModeWithCompletion:(void (^)(NSError *))arg1;
- (void)bluetoothUserInteraction;
- (void)deviceDiscoveryUpdate:(SFDeviceDiscovery *)arg1;
- (void)deviceDiscoveryActivate:(SFDeviceDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
- (void)coordinatedAlertsRequestFinish;
- (void)coordinatedAlertsRequestStart:(SFCoordinatedAlertRequest *)arg1 completion:(void (^)(NSError *, _Bool, NSDictionary *))arg2;
@end

