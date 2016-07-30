//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying>
{
    NSDate *_endDate;
    unsigned long long _occurrenceCount;
}

+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;
@property(readonly, nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) _Bool usesEndDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;
- (id)initWithEndDate:(id)arg1;

@end

