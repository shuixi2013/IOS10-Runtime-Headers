//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    HKSource *_source;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3;
- (void)encodeWithCoder:(id)arg1;

@end

