//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKContinuityPaymentServiceDelegate-Protocol.h>

@class NSArray, PKContinuityPaymentCoordinator, PKPayment;

@protocol PKContinuityPaymentCoordinatorDelegate <PKContinuityPaymentServiceDelegate>
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(PKContinuityPaymentCoordinator *)arg1;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceivePayment:(PKPayment *)arg2;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceiveUpdatedPaymentDevices:(NSArray *)arg2;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(PKContinuityPaymentCoordinator *)arg1;
@end

