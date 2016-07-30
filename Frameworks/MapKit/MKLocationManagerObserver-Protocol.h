//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKLocationManager, NSDate, NSError;

@protocol MKLocationManagerObserver <NSObject>
- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidResumeLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MKLocationManager *)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg1;
@end

