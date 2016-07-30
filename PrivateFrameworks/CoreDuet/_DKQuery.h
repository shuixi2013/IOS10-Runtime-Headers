//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKQuery : NSObject <NSSecureCoding>
{
}

+ (id)queryNotExecutableError;
+ (id)exectuableQueryForQuery:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)endDateSortDescriptorAscending:(_Bool)arg1;
+ (id)startDateSortDescriptorAscending:(_Bool)arg1;
+ (id)predicateForEventsWithStringValue:(id)arg1;
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;
+ (id)predicateForEventsWithDoubleValue:(double)arg1;
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithQuantityValue:(id)arg1;
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;
+ (id)predicateForEventsWithCategoryValue:(id)arg1;
+ (id)predicateForEventsWithStreamNames:(id)arg1;
+ (id)predicateForEventsWithStreamName:(id)arg1;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

