//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNContact, CNContactNavigationController, CNContactProperty, CNContactViewController, NSIndexPath;

@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>

@optional
- (_Bool)contactNavigationController:(CNContactNavigationController *)arg1 presentContactViewController:(CNContactViewController *)arg2 animated:(_Bool)arg3;
- (CNContactViewController *)contactNavigationController:(CNContactNavigationController *)arg1 contactViewControllerForContact:(CNContact *)arg2 preferredMode:(long long)arg3;
- (_Bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(CNContactNavigationController *)arg1;
- (void)contactNavigationController:(CNContactNavigationController *)arg1 didDeleteContact:(CNContact *)arg2;
- (_Bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
- (_Bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldShowCardForContact:(CNContact *)arg2;
- (_Bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)contactNavigationController:(CNContactNavigationController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)contactNavigationControllerDidComplete:(CNContactNavigationController *)arg1;
- (void)contactNavigationControllerDidCancel:(CNContactNavigationController *)arg1;
@end

