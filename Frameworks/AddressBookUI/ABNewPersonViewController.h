//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ABContactViewController, ABContactsFilter, ABPersonTableViewDataSource, ABPersonViewControllerHelper, CNContact, _UIAccessDeniedView;
@protocol ABNewPersonViewControllerDelegate, ABStyleProvider, CNPresenterDelegate;

@interface ABNewPersonViewController : UIViewController
{
    id <ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
    _Bool _isRealViewLoaded;
    ABPersonTableViewDataSource *_dataSource;
    _UIAccessDeniedView *_accessDeniedView;
    ABContactViewController *_contactViewController;
    id <CNPresenterDelegate> _presentingDelegate;
    void *_parentSource;
    CNContact *_mergeContact;
}

@property(retain, nonatomic) CNContact *mergeContact; // @synthesize mergeContact=_mergeContact;
@property(nonatomic) void *parentSource; // @synthesize parentSource=_parentSource;
@property(nonatomic) id <CNPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(readonly, nonatomic) ABContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(nonatomic) _Bool isRealViewLoaded; // @synthesize isRealViewLoaded=_isRealViewLoaded;
@property(readonly, nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABContactsFilter *parentContactsFilter; // @synthesize parentContactsFilter=_parentGroup;
- (void)accessChanged;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)supportedInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)loadView;
@property(readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
- (void)updateNavigationButtons;
- (void *)recordForNewPerson;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (double)ab_heightToFitForViewInPopoverView;
- (void)save:(id)arg1;
- (void)attemptSaveAndTellDelegate:(_Bool)arg1;
- (void)cancel:(id)arg1;
- (void)saveAndTellDelegate:(_Bool)arg1;
- (void)savePerson:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) _Bool savesNewContactOnSuspend;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) const void *parentGroup;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
@property(nonatomic) const void *displayedPerson;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) const void *addressBook;
@property(nonatomic) id <ABNewPersonViewControllerDelegate> newPersonViewDelegate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;

@end

