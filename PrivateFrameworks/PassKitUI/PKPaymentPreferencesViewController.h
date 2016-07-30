//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/CNContactPickerDelegate-Protocol.h>
#import <PassKitUI/CNPostalAddressEditorDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, PKPassSnapshotter, UITableView;

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, CNPostalAddressEditorDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    PKPassSnapshotter *_passSnapshotter;
    int _style;
    NSArray *_preferences;
    UITableView *_tableView;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _pickedContactPropertyHandler;
    CDUnknownBlockType _pickedContactHandler;
}

@property(copy, nonatomic) CDUnknownBlockType pickedContactHandler; // @synthesize pickedContactHandler=_pickedContactHandler;
@property(copy, nonatomic) CDUnknownBlockType pickedContactPropertyHandler; // @synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (_Bool)_showChinaDistrictAddressFlowIfRequiredForPreference:(id)arg1 contact:(id)arg2 labeledValue:(id)arg3;
- (_Bool)_isPaymentStyle;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingProperty:(id)arg2;
- (void)postalAddressEditorDidCancel:(id)arg1;
- (void)_setContactHandlersForPreference:(id)arg1;
- (void)_showContactsPickerForPreference:(id)arg1;
- (void)_showAddressEditorForPreference:(id)arg1 contact:(id)arg2;
- (void)_updateContactName;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_cellOfClass:(Class)arg1;
- (id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_updateNavigationBarButtons;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_isViewTranslucent;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 preferences:(id)arg2 title:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

