//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEONavigationGuidanceState, MNActiveRouteDetails, MNLocation, MNRoutePlanningDetails, NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationDetails : NSObject
{
    MNActiveRouteDetails *_activeRouteDetails;
    MNLocation *_location;
    GEOComposedRoute *_route;
    unsigned long long _routeIndex;
    _Bool _isDetour;
    GEONavigationGuidanceState *_guidanceState;
    NSMutableDictionary *_routes;
    _Bool _isNavigating;
    _Bool _guidancePromptsEnabled;
    _Bool _traceIsPlaying;
    int _headingOrientation;
    int _navigationState;
    int _guidanceLevel;
    MNRoutePlanningDetails *_routePlanningDetails;
    unsigned long long _reconnectionRouteIndex;
    double _proceedToRouteDistance;
    NSString *_displayString;
    double _remainingTime;
    double _remainingDistance;
    unsigned long long _closestStepIndex;
    double _distanceUntilManeuver;
    double _timeUntilManeuver;
    NSString *_tracePath;
    double _traceDuration;
    double _tracePosition;
    NSArray *_traceBookmarks;
}

@property(retain, nonatomic) NSArray *traceBookmarks; // @synthesize traceBookmarks=_traceBookmarks;
@property(nonatomic) double tracePosition; // @synthesize tracePosition=_tracePosition;
@property(nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property(nonatomic) _Bool traceIsPlaying; // @synthesize traceIsPlaying=_traceIsPlaying;
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(nonatomic) double timeUntilManeuver; // @synthesize timeUntilManeuver=_timeUntilManeuver;
@property(nonatomic) double distanceUntilManeuver; // @synthesize distanceUntilManeuver=_distanceUntilManeuver;
@property(nonatomic) unsigned long long closestStepIndex; // @synthesize closestStepIndex=_closestStepIndex;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(nonatomic) double proceedToRouteDistance; // @synthesize proceedToRouteDistance=_proceedToRouteDistance;
@property(readonly, nonatomic) unsigned long long reconnectionRouteIndex; // @synthesize reconnectionRouteIndex=_reconnectionRouteIndex;
@property(readonly, nonatomic) unsigned long long routeIndex; // @synthesize routeIndex=_routeIndex;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) int guidanceLevel; // @synthesize guidanceLevel=_guidanceLevel;
@property(retain, nonatomic) GEONavigationGuidanceState *guidanceState; // @synthesize guidanceState=_guidanceState;
@property(nonatomic) int navigationState; // @synthesize navigationState=_navigationState;
@property(nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
@property(nonatomic) _Bool isDetour; // @synthesize isDetour=_isDetour;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(nonatomic) _Bool isNavigating; // @synthesize isNavigating=_isNavigating;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) MNRoutePlanningDetails *routePlanningDetails; // @synthesize routePlanningDetails=_routePlanningDetails;
@property(retain, nonatomic) MNActiveRouteDetails *activeRouteDetails; // @synthesize activeRouteDetails=_activeRouteDetails;
- (void).cxx_destruct;
- (id)routeForRouteDetailsID:(id)arg1;
@property(readonly, nonatomic) unsigned long long legIndex;
@property(readonly, nonatomic) unsigned long long stepIndex;
@property(readonly, nonatomic) int navigationType;

@end

