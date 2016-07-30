//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKPersistentLocation, NSData, NSDate, NSSet, NSString, NSTimeZone;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>
{
}

+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (_Bool)validate:(id *)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSSet *snoozedAlarms;
@property(retain, nonatomic) EKPersistentAlarm *originalAlarm;
@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;
@property(copy, nonatomic) NSDate *acknowledgedDate;
@property(copy, nonatomic) EKPersistentLocation *location;
@property(nonatomic) long long proximity;
- (void)setCalendarOwner:(id)arg1;
- (id)calendarOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (id)calendarItemOwner;
@property(copy, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSData *externalData;
@property(nonatomic) long long alarmType;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) _Bool isAbsolute;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
@property(readonly, nonatomic) NSString *UUID;
- (int)entityType;
- (id)init;

@end

