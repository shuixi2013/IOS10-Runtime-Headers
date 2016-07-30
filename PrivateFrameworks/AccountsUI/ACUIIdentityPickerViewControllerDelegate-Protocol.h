//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACUIIdentityPickerViewController, NSArray, NSString;

@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
- (_Bool)allowEditingForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (NSArray *)emailAddressesForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (struct __SecTrust *)copyTrustForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1 identity:(struct __SecIdentity *)arg2;
- (NSArray *)copyIdentitiesForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (NSString *)localizedSwitchNameForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (void)identityPickerController:(ACUIIdentityPickerViewController *)arg1 setPropertyEnabled:(_Bool)arg2 withIdentity:(struct __SecIdentity *)arg3;
- (struct __SecIdentity *)selectedIdentityForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (_Bool)isPropertyEnabledForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
@end

