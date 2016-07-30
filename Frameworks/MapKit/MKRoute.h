//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, MKPolyline, MKRoutePolyline, NSArray, NSString;

@interface MKRoute : NSObject
{
    GEOComposedRoute *_geoComposedRoute;
    MKRoutePolyline *_polyline;
    NSArray *_steps;
}

@property(readonly, nonatomic, getter=_geoComposedRoute) GEOComposedRoute *geoComposedRoute; // @synthesize geoComposedRoute=_geoComposedRoute;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) MKPolyline *polyline; // @synthesize polyline=_polyline;
- (void).cxx_destruct;
@property(readonly, nonatomic) double expectedTravelTime;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSArray *advisoryNotices;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long transportType;
- (id)_initWithGEOComposedRoute:(id)arg1;
- (id)_maneuverImageForStep:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end

