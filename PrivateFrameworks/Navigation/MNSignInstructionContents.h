//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNListInstructionContents.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>
{
    NSArray *_mergeFormats;
    NSArray *_continueFormats;
    NSArray *_maneuverFormats;
    _Bool _useNames;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 useNames:(_Bool)arg4;
@property(retain, nonatomic) NSArray *maneuverFormats; // @synthesize maneuverFormats=_maneuverFormats;
@property(retain, nonatomic) NSArray *continueFormats; // @synthesize continueFormats=_continueFormats;
@property(retain, nonatomic) NSArray *mergeFormats; // @synthesize mergeFormats=_mergeFormats;
@property(nonatomic) _Bool useNames; // @synthesize useNames=_useNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)_instructionsForFormats:(id)arg1;
- (id)_signInstructionForChangeHighwaysWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForExitWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForArrivalWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForFerryWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForRoundaboutWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForUTurnWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForBranchWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForTurnWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForStartWithShorterAlternatives:(id *)arg1;
- (id)_signInstructionForContinueWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForRoundaboutWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForUTurnWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForRightWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForLeftWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForTurnWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForStartWithShorterAlternatives:(id *)arg1;
- (id)_signWalkingInstructionForContinueWithShorterAlternatives:(id *)arg1;
- (_Bool)useTowardNames;
- (_Bool)useDestinationName;
- (_Bool)useIntersectionName;
- (_Bool)useRoadName;
- (void)_populateFromStep:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long context;
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool suppressFallback;
@property(nonatomic) _Bool suppressNames;

@end

