//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject
{
    NSString *_title;
    _Bool _selected;
    int _customGroupType;
    EKCalendar *_calendar;
    UIColor *_color;
    EKGroupInfo *_group;
}

@property(nonatomic) int customGroupType; // @synthesize customGroupType=_customGroupType;
@property(nonatomic) __weak EKGroupInfo *group; // @synthesize group=_group;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *highlightedIcon;
@property(readonly, nonatomic) UIImage *icon;
- (id)description;
@property(readonly, nonatomic) _Bool excludeFromSelectAll;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool isPublished;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) int displayOrder;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithCalendar:(id)arg1;
- (void)_updateCustomGroupType;

@end

