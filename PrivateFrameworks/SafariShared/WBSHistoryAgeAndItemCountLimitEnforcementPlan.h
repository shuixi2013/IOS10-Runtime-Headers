//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, WBSHistoryDeletionPlan, WBSHistorySQLiteStore;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject
{
    WBSHistorySQLiteStore *_store;
    NSSet *_items;
    double _ageLimit;
    unsigned long long _itemCountLimit;
    long long _reason;
    NSSet *_itemsToKeep;
    NSSet *_itemsToDiscard;
    WBSHistoryDeletionPlan *_deletionPlan;
}

@property(readonly, nonatomic) WBSHistoryDeletionPlan *deletionPlan; // @synthesize deletionPlan=_deletionPlan;
@property(readonly, nonatomic) NSSet *itemsToDiscard; // @synthesize itemsToDiscard=_itemsToDiscard;
@property(readonly, nonatomic) NSSet *itemsToKeep; // @synthesize itemsToKeep=_itemsToKeep;
- (void).cxx_destruct;
- (id)_itemsToDiscard;
- (void)execute;
- (void)prepare;
- (id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5;

@end

