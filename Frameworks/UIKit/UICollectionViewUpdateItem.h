//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
}

@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (void).cxx_destruct;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
@property(readonly, nonatomic, getter=_isSectionOperation) _Bool isSectionOperation;
@property(readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property(readonly, nonatomic, getter=_action) long long action;
- (id)description;
@property(retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end

