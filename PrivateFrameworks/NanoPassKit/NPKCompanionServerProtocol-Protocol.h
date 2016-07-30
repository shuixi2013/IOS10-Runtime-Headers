//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSUUID, PKPaymentApplication, PKPaymentPass, PKPaymentWebServiceContext;

@protocol NPKCompanionServerProtocol <NSObject>
- (void)initiateLostModeExitAuthWithCompletion:(void (^)(NSError *))arg1;
- (void)sharedPaymentWebServiceContextForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPaymentWebServiceContext *))arg2;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)handlePendingiCloudSignoutWithCompletion:(void (^)(void))arg1;
- (void)handlePendingUnpairingWithCompletion:(void (^)(void))arg1;
- (void)redownloadAllPaymentPassesWithCompletion:(void (^)(void))arg1;
- (void)initiateConsistencyCheckWithCompletion:(void (^)(void))arg1;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassWithUniqueID:(NSString *)arg2 completion:(void (^)(PKPaymentPass *))arg3;
- (void)defaultPaymentApplicationForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentApplication *))arg2;
- (void)defaultCard:(void (^)(NSString *))arg1;
- (void)setDefaultCard:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removePaymentPassWithUniqueID:(NSString *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)savePaymentPassAtURL:(NSURL *)arg1 withUniqueID:(NSString *)arg2 forPairingID:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)paymentPassWithDeviceAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)paymentPassWithUniqueID:(NSString *)arg1 reply:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassUniqueIDs:(void (^)(NSSet *))arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(_Bool)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(PKPaymentPass *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(NSString *)arg1;
- (void)connect;
@end

