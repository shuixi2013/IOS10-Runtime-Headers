//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController
{
    NSMutableArray *_items;
}

@property(retain) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasResuls;
- (void)updateItemsForSearchString:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

