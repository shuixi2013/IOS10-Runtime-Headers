//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

@class NSArray;

@interface MCDBrowserTableViewController : MCD_OLD_TableViewController
{
    _Bool _showSubscriptionContent;
    NSArray *_viewControllers;
}

@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_loadCellIdentifiers;
- (void)_updateCellOrdering:(id)arg1;
- (void)_limitedUIDidChange;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

