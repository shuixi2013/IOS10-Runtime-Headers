//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@interface INPaymentRecord : NSObject <INCacheableContainer, NSCopying, NSSecureCoding>
{
    INPerson *_payee;
    INPerson *_payer;
    INCurrencyAmount *_currencyAmount;
    INPaymentMethod *_paymentMethod;
    NSString *_note;
    long long _status;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, copy, nonatomic) INPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly, copy, nonatomic) INCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(readonly, copy, nonatomic) INPerson *payer; // @synthesize payer=_payer;
@property(readonly, copy, nonatomic) INPerson *payee; // @synthesize payee=_payee;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;
- (id)cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

