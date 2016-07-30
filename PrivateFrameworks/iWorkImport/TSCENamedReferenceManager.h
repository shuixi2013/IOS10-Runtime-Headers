//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEReferenceTrackerDelegate-Protocol.h>

@class NSLock, TSCECalculationEngine, TSCENamedReferenceTrie, TSCEReferenceTracker;

__attribute__((visibility("hidden")))
@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate>
{
    TSCENamedReferenceTrie *mNames;
    struct __CFDictionary *mStringsByTrackedReferenceByTable;
    struct __CFSet *mTablesBeingTracked;
    NSLock *mNRMLock;
    TSCEReferenceTracker *mReferenceTracker;
    TSCECalculationEngine *mCalculationEngine;
}

- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)description;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID *)arg2;
- (id)cellRangeWasInserted:(CDStruct_fc93c73e)arg1;
- (_Bool)shouldRewriteOnTableIDReassignment;
- (_Bool)shouldRewriteOnTranspose;
- (_Bool)shouldRewriteOnCellMerge;
- (_Bool)shouldRewriteOnTectonicShift;
- (_Bool)shouldRewriteOnRangeMove;
- (_Bool)shouldRewriteOnSort;
- (void)referencedCellWasModified:(id)arg1;
- (_Bool)trackedReferencesExistForTable:(struct __CFUUID *)arg1;
- (void)updateTrackedHeaders:(struct __CFUUID *)arg1;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(struct __CFUUID *)arg2;
- (id)trackedReferencesMatchingPrefix:(id)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(struct __CFUUID *)arg2;
- (_Bool)referenceNameIsUnique:(id)arg1 forReference:(CDStruct_fc93c73e)arg2 contextTable:(struct __CFUUID *)arg3;
- (id)stringForTrackedReference:(id)arg1 inTable:(struct __CFUUID *)arg2;
- (id)referenceForTrackedReference:(id)arg1 sticky:(_Bool)arg2;
- (CDStruct_fc93c73e)rangeForTrackedReference:(id)arg1 gettingTrackedCell:(CDStruct_de21cb60 *)arg2;
- (id)referenceTracker;
- (void)endTrackingNamesInTable:(struct __CFUUID *)arg1;
- (void)beginTrackingNameInCell:(struct TSUCellCoord)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3;
- (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3;
- (id)beginTrackingNamesInTable:(struct __CFUUID *)arg1 limitedToRange:(struct TSCERangeCoordinate)arg2;
- (void)headerCellContentWasModified:(id)arg1;
- (struct __CFUUID *)formulaOwnerID;
- (void)setCalculationEngine:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

