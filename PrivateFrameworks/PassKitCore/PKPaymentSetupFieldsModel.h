//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKPaymentSetupFieldsModel : NSObject
{
    NSMutableArray *_paymentSetupFields;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupFields;
- (void).cxx_destruct;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)submissionValuesForDestination:(id)arg1;
- (_Bool)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFields;
- (void)updateWithPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (id)initWithPaymentSetupFields:(id)arg1;

@end

