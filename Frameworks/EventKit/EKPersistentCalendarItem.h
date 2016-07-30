//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentAttendee, EKPersistentCalendar, EKPersistentLocation, EKPersistentOrganizer, NSData, NSDate, NSSet, NSString, NSTimeZone, NSURL;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (void)deleteSelfAndDetached;
- (void)removeDetachedItem:(id)arg1;
- (void)addDetachedItem:(id)arg1;
@property(copy, nonatomic) NSSet *detachedItems;
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;
@property(readonly, nonatomic, getter=isDetached) _Bool detached;
@property(readonly, nonatomic) int sequenceNumber;
@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemModifiedDate;
@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;
@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;
@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;
@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemCreatedDate;
@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;
@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;
@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
- (void)removeAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
@property(copy, nonatomic) NSSet *attachments;
- (_Bool)hasAttachments;
@property(copy, nonatomic) NSData *externalData;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSString *uniqueID;
@property(copy, nonatomic) NSDate *participationStatusModifiedDate;
@property(readonly, nonatomic) long long selfParticipantStatus;
@property(retain, nonatomic) EKPersistentOrganizer *organizer;
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
@property(copy, nonatomic) NSSet *attendees;
- (int)attendeeCount;
@property(readonly, nonatomic) _Bool hasAttendees;
- (void)removeExceptionDate:(id)arg1;
- (void)addExceptionDate:(id)arg1;
@property(copy, nonatomic) NSSet *exceptionDates;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSSet *recurrenceRules;
@property(readonly, nonatomic) _Bool hasRecurrenceRules;
- (void)primitiveValueChangedForKey:(id)arg1;
@property(nonatomic, getter=isDefaultAlarmRemoved) _Bool defaultAlarmRemoved;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
@property(copy, nonatomic) NSSet *alarms;
@property(readonly, nonatomic) _Bool hasAlarms;
- (id)exportToICS;
@property(copy, nonatomic) NSData *appLink;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSURL *action;
@property(nonatomic) int sequence;
@property(nonatomic) int priority;
@property(nonatomic, getter=isAllDay) _Bool allDay;
@property(copy, nonatomic) NSTimeZone *endTimeZone;
@property(copy, nonatomic) NSTimeZone *startTimeZone;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) EKPersistentLocation *startLocation;
@property(copy, nonatomic) EKPersistentLocation *clientLocation;
@property(copy, nonatomic) EKPersistentLocation *location;
@property(copy, nonatomic) NSString *calendarScale;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasNotes;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) EKPersistentCalendar *calendar;
- (_Bool)validate:(id *)arg1;
@property(readonly, nonatomic) NSString *UUID;
- (id)init;

@end

