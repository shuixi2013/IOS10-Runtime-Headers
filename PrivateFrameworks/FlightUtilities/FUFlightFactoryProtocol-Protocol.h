//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FlightUtilities/NSObject-Protocol.h>

@class FUFlight, NSArray, NSDate, NSString;

@protocol FUFlightFactoryProtocol <NSObject>
+ (FUFlight *)flightWithMoreStepsFromFlights:(NSArray *)arg1;
+ (FUFlight *)bestFlightForDate:(NSDate *)arg1 dateType:(long long)arg2 fromFlights:(NSArray *)arg3;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
@end

