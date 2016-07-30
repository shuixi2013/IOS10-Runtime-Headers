//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSTCellDictionary : NSObject
{
    TSUIntegerKeyDictionary *mDict;
    struct _opaque_pthread_rwlock_t mDictRWLock;
}

- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;
- (id)allCells;
- (vector_13f93596)removeAllCells;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)dealloc;
- (id)init;

@end

