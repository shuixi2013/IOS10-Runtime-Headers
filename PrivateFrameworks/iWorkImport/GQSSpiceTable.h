//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQSTable.h>

__attribute__((visibility("hidden")))
@interface GQSSpiceTable : GQSTable
{
    struct __CFDictionary *mVectorUidToAlongMap;
    _Bool mReadingRowVectors;
    vector_ec52ae8c *mRowPositions;
    vector_ec52ae8c *mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}

- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (void)dealloc;
- (id)init;

@end
