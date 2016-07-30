//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface PUSnappingController : NSObject
{
    _Bool _accumulateOffsetWhileSnapped;
    _Bool _snappedToTarget;
    _Bool __hasEnteredAttractionThreshold;
    _Bool __hasEnteredRetentionThreshold;
    _Bool __previousOffsetInvalid;
    _Bool __interacting;
    id <UICoordinateSpace> _coordinateSpace;
    double _snappingTarget;
    double _retentionOffsetThreshold;
    double _attractionOffsetThreshold;
    double _attractionVelocityThreshold;
    double __previousOffset;
    double __accumulatedOffset;
}

@property(nonatomic, getter=_isInteracting, setter=_setInteracting:) _Bool _interacting; // @synthesize _interacting=__interacting;
@property(nonatomic, setter=_setAccumulatedOffset:) double _accumulatedOffset; // @synthesize _accumulatedOffset=__accumulatedOffset;
@property(nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) _Bool _previousOffsetInvalid; // @synthesize _previousOffsetInvalid=__previousOffsetInvalid;
@property(nonatomic, setter=_setPreviousOffset:) double _previousOffset; // @synthesize _previousOffset=__previousOffset;
@property(nonatomic, setter=_setHasEnteredRetentionThreshold:) _Bool _hasEnteredRetentionThreshold; // @synthesize _hasEnteredRetentionThreshold=__hasEnteredRetentionThreshold;
@property(nonatomic, setter=_setHasEnteredAttractionThreshold:) _Bool _hasEnteredAttractionThreshold; // @synthesize _hasEnteredAttractionThreshold=__hasEnteredAttractionThreshold;
@property(readonly, nonatomic, getter=isSnappedToTarget) _Bool snappedToTarget; // @synthesize snappedToTarget=_snappedToTarget;
@property(nonatomic) _Bool accumulateOffsetWhileSnapped; // @synthesize accumulateOffsetWhileSnapped=_accumulateOffsetWhileSnapped;
@property(nonatomic) double attractionVelocityThreshold; // @synthesize attractionVelocityThreshold=_attractionVelocityThreshold;
@property(nonatomic) double attractionOffsetThreshold; // @synthesize attractionOffsetThreshold=_attractionOffsetThreshold;
@property(nonatomic) double retentionOffsetThreshold; // @synthesize retentionOffsetThreshold=_retentionOffsetThreshold;
@property(readonly, nonatomic) double snappingTarget; // @synthesize snappingTarget=_snappingTarget;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (void).cxx_destruct;
- (void)updateOffset:(inout double *)arg1 withVelocity:(double)arg2 shouldSnap:(out _Bool *)arg3 shouldBreak:(out _Bool *)arg4;
- (void)_reset;
- (void)interactionEnded;
- (void)interactionBegan;
- (void)_setBoolPointer:(inout _Bool *)arg1 toValue:(_Bool)arg2;
- (_Bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (id)initWithSnappingTarget:(double)arg1 coordinateSpace:(id)arg2;
- (id)init;

@end

