//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, TSTMergeOwner;

__attribute__((visibility("hidden")))
@interface TSTMergeRangeCache : NSObject
{
    TSTMergeOwner *_mergeOwner;
    struct unordered_map<unsigned long, TSUCellRect, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSUCellRect>>> _mergeRanges;
    NSMutableIndexSet *_mergeIndexes;
    struct TSCEBitGrid _mergedAtCellIds;
    struct TSCEBitGridTransaction *_transaction;
}

@property(readonly, nonatomic) TSTMergeOwner *mergeOwner; // @synthesize mergeOwner=_mergeOwner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (_Bool)hasRangeSpanningRowsForCellRange:(struct TSUCellRect)arg1;
- (_Bool)partiallyIntersectsCellRegion:(id)arg1;
- (_Bool)partiallyIntersectsCellRange:(struct TSUCellRect)arg1;
- (struct TSUCellRect)mergedRangeForCellID:(struct TSUCellCoord)arg1;
- (vector_db509b29)mergeRangesIntersectingCellRegion:(id)arg1;
- (vector_db509b29)mergeRangesIntersectingRange:(struct TSUCellRect)arg1;
- (vector_db509b29)mergeRanges;
- (id)mergedGridIndicesForDimension:(long long)arg1;
- (void)enumerateCacheItemsIntersectingCellRegion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCacheItemsIntersectingRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCacheItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeMergeRangeAtIndex:(unsigned long long)arg1;
- (void)setMerge:(struct TSUCellRect)arg1 atIndex:(unsigned long long)arg2;
- (void)p_updateGridForReplacingRange:(struct TSUCellRect)arg1 withRange:(struct TSUCellRect)arg2;
- (void)commitRewritingTransaction;
- (void)openRewritingTransaction;
- (struct TSUCellRect)mergeRangeAtIndex:(unsigned long long)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSIndexSet *mergeIndexes;
- (void)dealloc;
- (id)initWithMergeOwner:(id)arg1;

@end

