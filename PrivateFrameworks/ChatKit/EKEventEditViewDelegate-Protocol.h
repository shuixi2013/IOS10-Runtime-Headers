//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class EKCalendar, EKEventEditViewController;

@protocol EKEventEditViewDelegate <NSObject>
- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(long long)arg2;

@optional
- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;
@end

