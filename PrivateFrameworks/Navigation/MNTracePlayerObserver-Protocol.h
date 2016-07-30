//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class CLHeading, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNLocation, MNTracePlayer, NSDate, NSError;

@protocol MNTracePlayerObserver <NSObject>
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayer:(MNTracePlayer *)arg1 didReceiveLocationError:(NSError *)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateLocation:(MNLocation *)arg2;
- (void)tracePlayerDidStayOnRoute:(MNTracePlayer *)arg1;
- (void)tracePlayer:(MNTracePlayer *)arg1 didJumpToRouteResponse:(GEODirectionsResponse *)arg2 request:(GEODirectionsRequest *)arg3 destination:(GEOComposedWaypoint *)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTime:(double)arg2 location:(MNLocation *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPause:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStop:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStart:(MNTracePlayer *)arg1;
@end

