//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMLSchema, CPMLStorageManager, NSMutableArray, NSNumber, NSString;
@protocol CPMLAlgorithmProtocol;

@interface CPMLModelEvaluate : NSObject
{
    _Bool enableCacheString;
    _Bool keepInMemory;
    _Bool shouldFail;
    struct sqlite3 *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm *cpMLAlgo;
    struct CPMLSerialization *trainerCPDeSerializer;
    struct CPMLRemapper *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics *trainerCPStatistics;
    struct CPMLDelegate *_cpmlDelegate;
    struct CPMLTunableData *cpTuneableData;
    int mapFunction;
    vector_e0f2bd7e boundedRemappedValues;
    struct CPMLDelegateEngine *_delegateEngine;
    CPMLStorageManager *_storageManager;
    id <CPMLAlgorithmProtocol> _delegateAlgorithm;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)getModelData;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (void)setCPMLAlgorithm:(id)arg1;
- (_Bool)updateModel:(id)arg1;
- (void)boundResult:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (id)doEvaluate:(struct CPMLFeatureVector *)arg1 withBoundedList:(vector_e0f2bd7e *)arg2;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector *)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalDict:(id)arg1;
- (id)evalArray:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)evalCTypesV:(char *)arg1;
- (void)constructVector:(struct CPMLFeatureVector *)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (int)getAttributeType:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;

@end

