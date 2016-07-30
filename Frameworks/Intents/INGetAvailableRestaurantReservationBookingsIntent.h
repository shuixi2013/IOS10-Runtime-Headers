//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, NSDate, NSNumber;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <NSCopying>
{
    INRestaurant *_restaurant;
    unsigned long long _partySize;
    NSDate *_preferredBookingDate;
    NSNumber *_maximumNumberOfResults;
    NSDate *_earliestBookingDateForResults;
    NSDate *_latestBookingDateForResults;
}

+ (id)intentDescription;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *latestBookingDateForResults; // @synthesize latestBookingDateForResults=_latestBookingDateForResults;
@property(copy, nonatomic) NSDate *earliestBookingDateForResults; // @synthesize earliestBookingDateForResults=_earliestBookingDateForResults;
@property(copy, nonatomic) NSNumber *maximumNumberOfResults; // @synthesize maximumNumberOfResults=_maximumNumberOfResults;
@property(copy, nonatomic) NSDate *preferredBookingDate; // @synthesize preferredBookingDate=_preferredBookingDate;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
