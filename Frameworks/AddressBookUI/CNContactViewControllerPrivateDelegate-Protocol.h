//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, CNContactViewController;

@protocol CNContactViewControllerPrivateDelegate <CNContactViewControllerDelegate>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didChangeToEditMode:(_Bool)arg2;
- (void)contactViewController:(CNContactViewController *)arg1 didDeleteContact:(CNContact *)arg2;
@end

