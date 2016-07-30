//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKSelectionPath : NSObject
{
    NSArray *mCurrentSelection;
}

+ (id)selectionPathWithSelectionArray:(id)arg1;
- (void)saveToArchive:(struct SelectionPathArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct SelectionPathArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;
- (id)mostSpecificSelectionOfClass:(Class)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;
- (id)selectionPathPoppingToSelection:(id)arg1;
- (id)selectionPathPoppingOffSelection:(id)arg1;
- (id)selectionPathWithAppendedSelections:(id)arg1;
- (id)selectionPathWithAppendedSelection:(id)arg1;
- (unsigned long long)indexForSelection:(id)arg1;
- (id)selectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *orderedSelections;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSelectionArray:(id)arg1;
- (id)tableNameTextEditingSelection;
- (id)containedCellTextEditingSelection;
- (id)singleSelectedTableInfo;
- (id)tableNameSelection;
- (id)formulaSelection;
- (id)strokeSelection;
- (id)controlCellSelection;
- (id)cellSelection;
@property(readonly, nonatomic) _Bool isEditingTableName;
@property(readonly, nonatomic) _Bool isEditingTableCell;
@property(readonly, nonatomic) _Bool selectsMultipleTables;
- (id)selectionPathByFixingUpRowColumnSelection;
- (id)selectionPathWithTableTextEditingSelectionRemoved;
- (id)selectionPathWithControlCellSelectionRemovedForConfiguration;
- (id)selectionPathByFixingUpControlCellSelection;

@end

