//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKeyboardMenuView, UITableView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView : UIView
{
    UITableView *_tableView;
    UITableViewCell *_cell;
    UIKeyboardMenuView *_menu;
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTableView:(id)arg1 cell:(id)arg2;

@end

