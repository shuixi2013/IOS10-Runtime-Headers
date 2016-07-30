//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ESDContainer, OABReaderState, OABTableSortedIntArray, OADTable;

__attribute__((visibility("hidden")))
@interface OABRTable : NSObject
{
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    struct OABTable2DArray<EshShape *> *mHorzLines;
    struct OABTable2DArray<EshShape *> *mVertLines;
    struct OABTable2DArray<OABTableCell> *mCells;
}

- (void)map;
- (void)createTargetTableContents;
- (id)readStrokeFromShape:(struct EshShape *)arg1;
- (void)validateTable;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (void)mapScale;
- (void)readAnchor;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;

@end

