//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol VKLabelNavFeature
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isOnRoute;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
@end

