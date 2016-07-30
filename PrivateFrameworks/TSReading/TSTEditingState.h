//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSWPStorageObserver-Protocol.h>

@class NSArray, TSKCommandController, TSTCell, TSTSearchReference, TSTTableInfo, TSTTableModel, TSTTableSelection, TSTTextStatisticsTracker, TSUPointerKeyDictionary, TSWPStorage;

@interface TSTEditingState : TSPObject <TSWPStorageObserver>
{
    TSWPStorage *mEditingStorage;
    TSTTableInfo *mTableInfo;
    TSTCell *mEditingCell;
    CDStruct_0441cfb5 mEditingCellID;
    int mEditingMode;
    TSTTableSelection *mSelection;
    TSTTableSelection *mSelectionReflectingEditingState;
    TSTSearchReference *mSearchReference;
    int mPreviousEditingMode;
    unsigned char mLastColumnHitByTap;
    TSUPointerKeyDictionary *mColoredReferences;
    _Bool mCellWasEditedInCurrentSession;
    _Bool mEditingCellInProxy;
    TSTTextStatisticsTracker *mTracker;
    _Bool mEndingEditingDueToCancelOperation;
    _Bool _dispatchingPreflight;
    CDStruct_0441cfb5 _lastEditingCellID;
    NSArray *_coloredReferences;
    TSKCommandController *_commandController;
}

@property(nonatomic, getter=isDispatchingPreflight) _Bool dispatchingPreflight; // @synthesize dispatchingPreflight=_dispatchingPreflight;
@property(readonly, nonatomic) TSKCommandController *commandController; // @synthesize commandController=_commandController;
@property(readonly, nonatomic) NSArray *coloredReferences; // @synthesize coloredReferences=_coloredReferences;
@property(nonatomic) CDStruct_0441cfb5 lastEditingCellID; // @synthesize lastEditingCellID=_lastEditingCellID;
@property(readonly, nonatomic) int previousEditingMode; // @synthesize previousEditingMode=mPreviousEditingMode;
@property(nonatomic) unsigned char lastColumnHitByTap; // @synthesize lastColumnHitByTap=mLastColumnHitByTap;
@property(nonatomic) TSTTextStatisticsTracker *tracker; // @synthesize tracker=mTracker;
@property(nonatomic, getter=isEndingEditingDueToCancelOperation) _Bool endingEditingDueToCancelOperation; // @synthesize endingEditingDueToCancelOperation=mEndingEditingDueToCancelOperation;
@property(retain, nonatomic) TSTSearchReference *searchReference; // @synthesize searchReference=mSearchReference;
@property(nonatomic) _Bool editingCellInProxy; // @synthesize editingCellInProxy=mEditingCellInProxy;
@property(retain, nonatomic) TSWPStorage *editingStorage; // @synthesize editingStorage=mEditingStorage;
- (void)didEndEditingDueToCancelOperation;
- (void)willEndEditingDueToCancelOperation;
- (_Bool)p_shouldSetCellPostFlight;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)p_unregisterStorageObserver;
- (void)p_registerStorageObserver;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)changeEditingMode:(int)arg1;
@property(readonly, nonatomic) int editingMode;
- (void)reloadValueFromFocusedCell;
- (void)reloadValue;
- (void)performEndRichTextEditing;
- (id)prepareEditingStorageToEditCell:(CDStruct_0441cfb5)arg1;
- (id)storageForCellID:(CDStruct_0441cfb5)arg1;
@property(readonly, nonatomic) CDStruct_5f1f7aa9 editingCellRange;
@property(retain, nonatomic) TSTCell *editingCell;
@property(copy, nonatomic) TSTTableSelection *selection;
@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
@property(readonly, nonatomic) TSTTableModel *tableModel;
- (void)p_performRichTextStorageDOLC:(id)arg1 newStorage:(id)arg2;
- (void)dealloc;
- (id)initForPasteboardFromSourceInfo:(id)arg1 stylesheet:(id)arg2;
- (id)initWithTableInfo:(id)arg1;
@property(nonatomic) _Bool cellWasEditedInCurrentSession;
@property(nonatomic) CDStruct_0441cfb5 editingCellID;

@end

