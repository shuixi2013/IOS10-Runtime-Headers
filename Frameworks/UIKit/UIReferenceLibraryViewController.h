//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UINavigationController, UITableViewController, UIWindow;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate>
{
    NSString *_term;
    NSArray *_definitionValues;
    UINavigationController *_baseNavController;
    UITableViewController *_multiDefViewController;
    UIViewController *_longDefViewController;
    long long _oldPopoverStyle;
    UIWindow *_rotationDecider;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (id)_colorAttributes;
+ (id)_dictionaryDefinitionAttributes;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_pressedButtonImage;
+ (id)_defaultButtonImage;
+ (id)_diddlyDoViewLineColor;
+ (id)_foregroundColor;
+ (id)_backgroundColor;
+ (id)_viewControllerForReferenceWithString:(id)arg1 options:(unsigned long long)arg2;
+ (id)_popoverControllerForReferenceLibraryWithString:(id)arg1;
+ (_Bool)dictionaryHasDefinitionForTerm:(id)arg1;
+ (_Bool)_shouldShowDefineForTermOfLength:(long long)arg1;
+ (_Bool)_shouldShowDefineForTerm:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider; // @synthesize _rotationDecider;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_colorAttributes;
- (id)_dictionaryDefinitionAttributes;
- (id)_localizedDictionaryTitleAttributes;
- (id)_pressedButtonImage;
- (id)_defaultButtonImage;
- (id)_diddlyDoViewLineColor;
- (id)_foregroundColor;
- (id)_backgroundColor;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushDownloadManager:(id)arg1;
- (void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1;
- (void)_installRequiredElementsOnViewController:(id)arg1;
- (void)_dismissModalReferenceView:(id)arg1;
- (void)_searchWeb:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTerm:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

