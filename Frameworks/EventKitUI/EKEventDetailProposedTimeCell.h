//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, EKEventDetailsHighlightControl;

__attribute__((visibility("hidden")))
@interface EKEventDetailProposedTimeCell : EKEventDetailCell
{
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    EKEvent *_event;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (_Bool)update;
- (_Bool)shouldDisplayForEvent;
- (_Bool)hasCustomLayout;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;

@end

