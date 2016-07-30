//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/CNContactDataSourceDelegate-Protocol.h>
#import <ContactsUI/CNQuickActionsViewDelegate-Protocol.h>

@class CNContactFormatter, CNContactGridViewLayout, NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSObject, NSString, UIColor;
@protocol CNContactDataSource, CNContactGridViewControllerDelegate, CNKeyDescriptor;

@interface CNContactGridViewController : UICollectionViewController <CNContactDataSourceDelegate, CNAvatarViewDelegate, CNQuickActionsViewDelegate>
{
    _Bool _inlineActionsEnabled;
    id <CNContactGridViewControllerDelegate> _delegate;
    NSObject<CNContactDataSource> *_dataSource;
    CNContactFormatter *_contactFormatter;
    NSArray *_inlineActionsCategories;
    long long _numberOfColumns;
    long long _monogrammerStyle;
    UIColor *_backgroundColor;
    NSDictionary *_nameTextAttributes;
    CNContactGridViewLayout *_gridLayout;
    NSMutableDictionary *_preloadedActionsManagers;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _avatarMargins;
}

@property(retain, nonatomic) NSMutableDictionary *preloadedActionsManagers; // @synthesize preloadedActionsManagers=_preloadedActionsManagers;
@property(retain) CNContactGridViewLayout *gridLayout; // @synthesize gridLayout=_gridLayout;
@property(copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long monogrammerStyle; // @synthesize monogrammerStyle=_monogrammerStyle;
@property(nonatomic) struct UIEdgeInsets avatarMargins; // @synthesize avatarMargins=_avatarMargins;
@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(copy, nonatomic) NSArray *inlineActionsCategories; // @synthesize inlineActionsCategories=_inlineActionsCategories;
@property(nonatomic) _Bool inlineActionsEnabled; // @synthesize inlineActionsEnabled=_inlineActionsEnabled;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CNContactGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)contactDataSourceDidChange:(id)arg1;
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (void)actionsView:(id)arg1 willShowActions:(id)arg2;
- (id)viewControllerForActionsView:(id)arg1;
- (void)avatarView:(id)arg1 willShowActions:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
@property(readonly, nonatomic) id <CNKeyDescriptor> descriptorForRequiredKeys;
- (void)preloadInlineActionsForContactsAtIndexes:(id)arg1;
@property(nonatomic) long long indexOfContactWithExpandedInlineActions;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 animated:(_Bool)arg2;
@property(copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(_Bool)arg2;
- (id)_contactAtIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_updateItemSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

