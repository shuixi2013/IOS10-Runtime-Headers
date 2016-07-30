//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject <NSSecureCoding>
{
    _Bool _supportsLiveTraffic;
    int _transportType;
    NSDate *_originalConservativeDepartureDate;
    NSDate *_roundedConservativeDepartureDate;
    double _originalConservativeTravelTime;
    double _roundedConservativeTravelTime;
    NSDate *_originalSuggestedDepartureDate;
    NSDate *_roundedSuggestedDepartureDate;
    double _originalEstimatedTravelTime;
    double _roundedEstimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
    unsigned long long _currentTrafficDensity;
    NSString *_trafficDensityDescription;
    long long _travelState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(retain, nonatomic) NSString *trafficDensityDescription; // @synthesize trafficDensityDescription=_trafficDensityDescription;
@property(nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(nonatomic) _Bool supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(retain, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(retain, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(nonatomic) double roundedEstimatedTravelTime; // @synthesize roundedEstimatedTravelTime=_roundedEstimatedTravelTime;
@property(nonatomic) double originalEstimatedTravelTime; // @synthesize originalEstimatedTravelTime=_originalEstimatedTravelTime;
@property(retain, nonatomic) NSDate *roundedSuggestedDepartureDate; // @synthesize roundedSuggestedDepartureDate=_roundedSuggestedDepartureDate;
@property(retain, nonatomic) NSDate *originalSuggestedDepartureDate; // @synthesize originalSuggestedDepartureDate=_originalSuggestedDepartureDate;
@property(nonatomic) double roundedConservativeTravelTime; // @synthesize roundedConservativeTravelTime=_roundedConservativeTravelTime;
@property(nonatomic) double originalConservativeTravelTime; // @synthesize originalConservativeTravelTime=_originalConservativeTravelTime;
@property(retain, nonatomic) NSDate *roundedConservativeDepartureDate; // @synthesize roundedConservativeDepartureDate=_roundedConservativeDepartureDate;
@property(retain, nonatomic) NSDate *originalConservativeDepartureDate; // @synthesize originalConservativeDepartureDate=_originalConservativeDepartureDate;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) double roundedEffectiveTravelTime;
@property(readonly, nonatomic) double originalEffectiveTravelTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKGEORouteHypothesis:(id)arg1;
- (id)initWithSyntheticGEORouteHypothesis:(id)arg1;
- (id)initWithGEORouteHypothesis:(id)arg1;
- (id)init;

@end

