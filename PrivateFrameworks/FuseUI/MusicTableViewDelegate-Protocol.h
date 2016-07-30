//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/UITableViewDelegate-Protocol.h>

@class MusicTableView, UIButton, UITableViewCell, UIView;
@protocol MusicEntityContentDescriptorViewConfiguring;

@protocol MusicTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableViewTintColorDidChange:(MusicTableView *)arg1;
- (_Bool)tableView:(MusicTableView *)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectAddButtonForCell:(UITableViewCell *)arg2 events:(unsigned long long)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 willSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didDeselectHeaderViewForSection:(long long)arg2;
- (void)tableViewInherritedLayoutInsetsDidChange:(MusicTableView *)arg1;
- (void)tableViewDidLayoutSubviews:(MusicTableView *)arg1;
@end

