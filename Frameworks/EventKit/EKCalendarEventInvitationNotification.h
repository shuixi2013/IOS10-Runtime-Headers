//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class EKRecurrenceRule, NSArray, NSDate, NSString, NSTimeZone;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification
{
    _Bool _allDay;
    _Bool _timeChanged;
    _Bool _dateChanged;
    _Bool _locationChanged;
    _Bool _attendeeReplyChanged;
    NSString *_location;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSDate *_participationStatusModifiedDate;
    NSTimeZone *_timeZone;
    long long _participationStatus;
    long long _status;
    EKRecurrenceRule *_recurrenceRule;
    NSArray *_attendees;
    NSString *_invitedBy;
}

@property(readonly, nonatomic) NSString *invitedBy; // @synthesize invitedBy=_invitedBy;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) _Bool attendeeReplyChanged; // @synthesize attendeeReplyChanged=_attendeeReplyChanged;
@property(nonatomic) _Bool locationChanged; // @synthesize locationChanged=_locationChanged;
@property(nonatomic) _Bool dateChanged; // @synthesize dateChanged=_dateChanged;
@property(nonatomic) _Bool timeChanged; // @synthesize timeChanged=_timeChanged;
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule; // @synthesize recurrenceRule=_recurrenceRule;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long participationStatus; // @synthesize participationStatus=_participationStatus;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *participationStatusModifiedDate; // @synthesize participationStatusModifiedDate=_participationStatusModifiedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDateForNextOccurrence; // @synthesize startDateForNextOccurrence=_startDateForNextOccurrence;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)hasRecurrenceRules;
- (id)eventFromEventStore:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end

