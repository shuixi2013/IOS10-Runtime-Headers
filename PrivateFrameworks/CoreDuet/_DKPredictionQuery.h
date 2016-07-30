//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKEventQuery.h>

@interface _DKPredictionQuery : _DKEventQuery
{
    _Bool _isTopNPrediction;
    int _slotDuration;
    int _totalSlotsInDay;
    unsigned long long _type;
    CDUnknownBlockType _predictionHandler;
    long long _topN;
    double _minLikelihood;
}

+ (_Bool)supportsSecureCoding;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;
+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
@property(nonatomic) double minLikelihood; // @synthesize minLikelihood=_minLikelihood;
@property(nonatomic) long long topN; // @synthesize topN=_topN;
@property(nonatomic) _Bool isTopNPrediction; // @synthesize isTopNPrediction=_isTopNPrediction;
@property(nonatomic) int totalSlotsInDay; // @synthesize totalSlotsInDay=_totalSlotsInDay;
@property(copy) CDUnknownBlockType predictionHandler; // @synthesize predictionHandler=_predictionHandler;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int slotDuration; // @synthesize slotDuration=_slotDuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3;
- (id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2;
- (void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 observations:(id)arg4;
- (void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 observations:(id)arg3 lastDate:(id *)arg4 lastSlot:(int *)arg5;
- (id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withPredictionStartDate:(id)arg3;
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;

@end

