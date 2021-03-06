//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate;

@interface HKLocationSeriesDatum : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
+ (id)datumWithLocation:(id)arg1 date:(id)arg2;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_validateWithError:(id *)arg1;

@end

