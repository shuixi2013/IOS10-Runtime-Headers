//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSIndexPath, NSString, TKPickerRowItem, TKTonePickerItem, UITableView, UITableViewCell, UITableViewController;
@protocol TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver;

@protocol TKTonePickerTableViewControllerHelper <NSObject>
- (void)tonePickerTableViewControllerWillBeDeallocated:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
- (void)tonePickerTableViewWillDisappear:(_Bool)arg1;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(UITableView *)arg1;
- (void)updateCell:(UITableViewCell *)arg1 withDetailText:(NSString *)arg2;
- (void)updateCell:(UITableViewCell *)arg1 withCheckedStatus:(_Bool)arg2;
- (TKTonePickerItem *)selectedTonePickerItem;
- (void)tableView:(UITableView *)arg1 updateCell:(UITableViewCell *)arg2 withSeparatorForPickerRowItem:(TKPickerRowItem *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForPickerRowItem:(TKPickerRowItem *)arg2;
- (void)loadViewForTonePickerTableViewController:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
@end

