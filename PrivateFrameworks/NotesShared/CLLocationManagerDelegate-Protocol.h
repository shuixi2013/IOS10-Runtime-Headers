//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class CLBeaconRegion, CLHeading, CLLocation, CLLocationManager, CLRegion, CLVisit, NSArray, NSError;

@protocol CLLocationManagerDelegate <NSObject>

@optional
- (void)locationManager:(CLLocationManager *)arg1 didVisit:(CLVisit *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didFinishDeferredUpdatesWithError:(NSError *)arg2;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didStartMonitoringForRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(CLLocationManager *)arg1 monitoringDidFailForRegion:(CLRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 rangingBeaconsDidFailForRegion:(CLBeaconRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didRangeBeacons:(NSArray *)arg2 inRegion:(CLBeaconRegion *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;
@end

