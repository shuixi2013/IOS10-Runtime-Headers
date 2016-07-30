//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

__attribute__((visibility("hidden")))
@interface EDReferenceCollection : EDCollection
{
    _Bool mCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;
- (void)coalesceProgressiveCellReferencesCollection;
- (id)reverseReferencesByRow:(_Bool)arg1;
- (id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(_Bool)arg2;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;
- (id)initWihNoCoalesce;
- (id)init;
- (_Bool)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2;
- (void)coalesce;

@end

