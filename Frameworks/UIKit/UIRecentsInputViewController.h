//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSLayoutConstraint, NSString, UILexicon;
@protocol UIRecentsInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIRecentsInputViewController : UITableViewController
{
    id <UIRecentsInputViewControllerDelegate> _recentInputDelegate;
    UILexicon *_recentInputs;
    long long _containingEffectStyle;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSString *_previouslyUsedString;
    NSString *_clearAllString;
    NSString *_addNewString;
}

@property(retain, nonatomic) NSString *addNewString; // @synthesize addNewString=_addNewString;
@property(retain, nonatomic) NSString *clearAllString; // @synthesize clearAllString=_clearAllString;
@property(retain, nonatomic) NSString *previouslyUsedString; // @synthesize previouslyUsedString=_previouslyUsedString;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) long long containingEffectStyle; // @synthesize containingEffectStyle=_containingEffectStyle;
@property(retain, nonatomic) UILexicon *recentInputs; // @synthesize recentInputs=_recentInputs;
@property(nonatomic) __weak id <UIRecentsInputViewControllerDelegate> recentInputDelegate; // @synthesize recentInputDelegate=_recentInputDelegate;
- (void).cxx_destruct;
- (id)_uiktest_UnfocusedCellBackgroundView;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellLabel;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)preferredFocusedView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)updateTableViewWidth;
- (void)ensureConstraints;
- (void)didSelectButtonAtIndexPath:(id)arg1;

@end

