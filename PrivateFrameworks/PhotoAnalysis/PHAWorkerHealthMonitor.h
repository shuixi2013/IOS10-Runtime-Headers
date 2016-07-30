//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject
{
    double _maxScoreRecentnessInterval;
    NSMutableDictionary *_scoresByWorkerType;
}

@property(readonly, nonatomic) NSMutableDictionary *scoresByWorkerType; // @synthesize scoresByWorkerType=_scoresByWorkerType;
@property(nonatomic) double maxScoreRecentnessInterval; // @synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (_Bool)isHealthyForWorkerType:(short)arg1;
- (void)reset;
- (void)recordResultsFromWorkerJob:(id)arg1;
- (float)averageScoreForWorkerType:(short)arg1;
- (id)init;
- (void)_trimScoresForWorkerType:(short)arg1;
- (id)_scoresForWorkerType:(short)arg1;

@end

