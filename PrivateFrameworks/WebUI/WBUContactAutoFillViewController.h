//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CNContact, NSArray;
@protocol WBUContactAutoFillViewControllerFiller;

@interface WBUContactAutoFillViewController : UITableViewController
{
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
    id <WBUContactAutoFillViewControllerFiller> _autoFiller;
}

@property(nonatomic) __weak id <WBUContactAutoFillViewControllerFiller> autoFiller; // @synthesize autoFiller=_autoFiller;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)autoFill:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLoad;
- (id)valuesFromPropertyMatches:(id)arg1;
- (id)matchesForProperty:(id)arg1;
- (id)properties;
- (id)valueForProperty:(id)arg1 label:(id)arg2;
- (id)initWithMatches:(id)arg1 contact:(id)arg2;

@end
