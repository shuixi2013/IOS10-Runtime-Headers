//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/KeychainSyncViewController-Protocol.h>

@class PSKeychainSyncHeaderView, PSSpecifier;
@protocol KeychainSyncViewControllerDelegate;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController>
{
    PSKeychainSyncHeaderView *_headerView;
    PSSpecifier *_groupSpecifier;
    id <KeychainSyncViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <KeychainSyncViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (id)groupSpecifier;
- (id)headerView;

@end

