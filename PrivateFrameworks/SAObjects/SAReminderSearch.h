//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString;

@interface SAReminderSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *listName;
@property(copy, nonatomic) NSDate *dueBefore;
@property(copy, nonatomic) NSDate *dueAfter;
@property(copy, nonatomic) NSNumber *completionStatus;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

