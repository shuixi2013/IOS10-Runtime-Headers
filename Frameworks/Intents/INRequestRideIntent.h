//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INRequestRideIntent-Protocol.h>

@class CLPlacemark, NSNumber, NSString;

@interface INRequestRideIntent : INIntent <INRequestRideIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (void)setUsesApplePayForPayment:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *usesApplePayForPayment;
- (void)setPaymentMethodName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *paymentMethodName;
- (void)setPartySize:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *partySize;
- (void)setRideOptionName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rideOptionName;
- (void)setDropOffLocation:(id)arg1;
@property(readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
- (void)setPickupLocation:(id)arg1;
@property(readonly, copy, nonatomic) CLPlacemark *pickupLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethodName:(id)arg5 usesApplePayForPayment:(id)arg6;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
