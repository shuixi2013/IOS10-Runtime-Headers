//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentSummaryItem;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating>
{
    PKPaymentSummaryItem *_item;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
@property(readonly, nonatomic) PKPaymentSummaryItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithPaymentSummaryItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

