//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteLeg;

@interface MNTransitWalkingLegInstruction : MNTransitInstruction
{
    GEOComposedWalkingRouteLeg *_walkingLeg;
}

+ (id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2;
@property(readonly, nonatomic) GEOComposedWalkingRouteLeg *walkingLeg; // @synthesize walkingLeg=_walkingLeg;
- (void).cxx_destruct;
- (struct NSDictionary *)overridenInstructionsMapping;
- (id)instructionSet;
- (id)timeZoneForFormattedString;
- (id)initWithWalkingLeg:(id)arg1 context:(long long)arg2;

@end

