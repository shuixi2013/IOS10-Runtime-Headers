//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class NSString, SGEvent;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification
{
    SGEvent *_suggestedEvent;
    NSString *_fromName;
}

+ (id)_queue;
@property(retain, nonatomic) NSString *fromName; // @synthesize fromName=_fromName;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGEvent *suggestedEvent;
- (void)updateSuggestedEventWithEventStore:(id)arg1;
- (Class)_SGSuggestionsServiceClass;
- (_Bool)hiddenFromNotificationCenter;

@end
