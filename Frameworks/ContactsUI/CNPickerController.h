//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    _Bool _allowsDiscoveredItems;
    _Bool _allowsCustomItems;
    id _selectedItem;
    NSArray *_discoveredItems;
    NSArray *_builtinItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    CDUnknownBlockType _itemLocalizationBlock;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
    long long _discoveredItemsSection;
    long long _builtinItemsSection;
    long long _customItemsSection;
}

@property(nonatomic) long long customItemsSection; // @synthesize customItemsSection=_customItemsSection;
@property(nonatomic) long long builtinItemsSection; // @synthesize builtinItemsSection=_builtinItemsSection;
@property(nonatomic) long long discoveredItemsSection; // @synthesize discoveredItemsSection=_discoveredItemsSection;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) CDUnknownBlockType itemLocalizationBlock; // @synthesize itemLocalizationBlock=_itemLocalizationBlock;
@property(copy, nonatomic) NSString *itemLocalizationKey; // @synthesize itemLocalizationKey=_itemLocalizationKey;
@property(nonatomic) _Bool allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(nonatomic) _Bool allowsDiscoveredItems; // @synthesize allowsDiscoveredItems=_allowsDiscoveredItems;
@property(copy, nonatomic) NSArray *discoveredItems; // @synthesize discoveredItems=_discoveredItems;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (id)_itemAtIndexPath:(id)arg1;
- (unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isEditing;
- (void)_updateRightButtonItem;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeCustomItem:(id)arg1;
- (void)customLabelUpdated:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (id)_titleForPickerItem:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

