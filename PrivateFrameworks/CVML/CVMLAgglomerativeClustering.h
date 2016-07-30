//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLClustering-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface CVMLAgglomerativeClustering : NSObject <CVMLClustering>
{
    NSMutableArray *distances_map;
    _Bool _debugMode;
    NSMutableDictionary *_faceIdsMapping;
}

@property _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(retain) NSMutableDictionary *faceIdsMapping; // @synthesize faceIdsMapping=_faceIdsMapping;
- (void).cxx_destruct;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;
- (void)_addFaceId:(id)arg1 withSimilarityMatrix:(id)arg2;
- (void)addFaceIds:(id)arg1 withSimilarityMatrix:(id)arg2 cancellationSemaphore:(id)arg3 error:(id *)arg4;
- (_Bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 cancellationSemaphore:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

