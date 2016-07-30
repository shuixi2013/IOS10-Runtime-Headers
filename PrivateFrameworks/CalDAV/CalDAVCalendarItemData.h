//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVLeafDataPayload.h>

#import <CalDAV/CalDAVCalendarItemProtocol-Protocol.h>

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSString;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol>
{
    NSString *_scheduleTag;
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;
    CalDAVUpdateOwnerItem *_createdBy;
    CalDAVUpdateOwnerItem *_updatedBy;
}

@property(retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // @synthesize updatedBy=_updatedBy;
@property(retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
@property(retain, nonatomic) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
- (void).cxx_destruct;

@end

