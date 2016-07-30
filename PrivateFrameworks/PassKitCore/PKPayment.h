//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKContact, PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding>
{
    PKPaymentToken *_token;
    PKContact *_billingContact;
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentWithProtobuf:(id)arg1;
@property(retain, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) PKContact *billingContact; // @synthesize billingContact=_billingContact;
@property(retain, nonatomic) PKPaymentToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) const void *billingAddress;
@property(readonly, nonatomic) const void *shippingAddress;
- (id)initWithToken:(id)arg1;
- (id)protobuf;

@end

