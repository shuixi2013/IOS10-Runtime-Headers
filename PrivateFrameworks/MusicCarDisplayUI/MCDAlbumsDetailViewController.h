//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDTableViewController.h>

@interface MCDAlbumsDetailViewController : MCDTableViewController
{
    double _maximumDurationWidth;
}

+ (id)actionCellConfigurationClasses;
- (void)_updateTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
@property(readonly, nonatomic) double maximumDurationWidth;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end

