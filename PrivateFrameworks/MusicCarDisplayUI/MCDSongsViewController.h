//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDTableViewController.h>

@interface MCDSongsViewController : MCDTableViewController
{
}

+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_updateQuery;
- (void)_limitedUIDidChange;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end

