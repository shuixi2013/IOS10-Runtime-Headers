//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldCell.h>

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell
{
    _Bool _hasDarkAppearance;
    long long _paymentCredentialType;
}

@property(nonatomic) _Bool hasDarkAppearance; // @synthesize hasDarkAppearance=_hasDarkAppearance;
@property(nonatomic) long long paymentCredentialType; // @synthesize paymentCredentialType=_paymentCredentialType;
- (id)_imageForPaymentCredentialType:(long long)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)dealloc;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

@end

