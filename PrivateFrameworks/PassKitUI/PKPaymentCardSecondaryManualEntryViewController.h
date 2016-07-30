//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController
{
    _Bool _suppressPrimarySetupFields;
}

@property(nonatomic) _Bool suppressPrimarySetupFields; // @synthesize suppressPrimarySetupFields=_suppressPrimarySetupFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;

@end

