//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKCalendarItemEditItem, NSDate, NSIndexPath, NSIndexSet, NSString, UITableViewCell, UIView, UIViewController;

@protocol EKCalendarItemEditItemDelegate <NSObject>
- (NSString *)defaultAlertTitleForEditItem:(EKCalendarItemEditItem *)arg1;

@optional
- (UITableViewCell *)cellWithReuseIdentifier:(NSString *)arg1 forEditItem:(EKCalendarItemEditItem *)arg2;
- (UIViewController *)viewControllerForEditItem:(EKCalendarItemEditItem *)arg1;
- (void)editItem:(EKCalendarItemEditItem *)arg1 textViewShouldReturn:(UIView *)arg2;
- (void)editItemRequiresPopoverSizeUpdate:(EKCalendarItemEditItem *)arg1;
- (void)editItemRequiresHeightChange:(EKCalendarItemEditItem *)arg1;
- (void)editItem:(EKCalendarItemEditItem *)arg1 didEndDatePickingAnimated:(_Bool)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 willBeginDatePickingWithDate:(NSDate *)arg2 action:(SEL)arg3 animated:(_Bool)arg4 forSubitem:(unsigned long long)arg5;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowsScrolledToVisible:(NSIndexSet *)arg2;
- (long long)rowNumberForEditItem:(EKCalendarItemEditItem *)arg1;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowReload:(NSIndexPath *)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(void (^)(UITableViewCell *))arg3;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowInsertions:(NSIndexSet *)arg2 rowDeletions:(NSIndexSet *)arg3 rowReloads:(NSIndexSet *)arg4;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowInsertions:(NSIndexSet *)arg2 rowDeletions:(NSIndexSet *)arg3;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsDoneButtonDisabled:(_Bool)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsKeyboardPinned:(_Bool)arg2;
- (void)editItemWantsInjectableViewControllerToBeShown:(EKCalendarItemEditItem *)arg1;
- (void)editItemVisibilityChanged:(EKCalendarItemEditItem *)arg1;
- (void)editItemTextChanged:(EKCalendarItemEditItem *)arg1;
- (void)editItemDidEndEditing:(EKCalendarItemEditItem *)arg1;
- (void)editItem:(EKCalendarItemEditItem *)arg1 didSaveFromDetailViewController:(_Bool)arg2;
- (void)editItemDidStartEditing:(EKCalendarItemEditItem *)arg1;
@end

