//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask
{
    _Bool _findAttendees;
    _Bool _findLocations;
    _Bool _findUsers;
    _Bool _findGroups;
    _Bool _findResources;
    unsigned long long _resultLimit;
    NSSet *_searchStrings;
}

+ (_Bool)tokensAreLegal:(id)arg1;
@property(retain, nonatomic) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property _Bool findResources; // @synthesize findResources=_findResources;
@property _Bool findGroups; // @synthesize findGroups=_findGroups;
@property _Bool findUsers; // @synthesize findUsers=_findUsers;
@property(nonatomic) _Bool findLocations; // @synthesize findLocations=_findLocations;
@property(nonatomic) _Bool findAttendees; // @synthesize findAttendees=_findAttendees;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)searchItems;
- (id)extraAttributes;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;

@end

