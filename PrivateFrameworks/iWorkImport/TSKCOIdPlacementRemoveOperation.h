//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

#import <iWorkImport/TSKCOObjectCountConstraint-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementRemoveOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>
{
    int mObjectCount;
    int mObjectCounterSpace;
}

@property(readonly, nonatomic) int objectCounterSpace; // @synthesize objectCounterSpace=mObjectCounterSpace;
@property(readonly, nonatomic) int objectCount; // @synthesize objectCount=mObjectCount;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
@property(readonly, copy) NSString *description;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformPlacement:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformRearrange:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformRemove:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformAdd:(id)arg1 isHigherPriority:(_Bool)arg2;
- (id)p_transformObjectCount:(id)arg1;
- (id)operationWithNewObjectCount:(int)arg1;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(_Bool)arg3;
- (id)operationWithNewNoop:(_Bool)arg1;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5 objectCount:(int)arg6 objectCounterSpace:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isNoop;
@property(readonly) Class superclass;

@end

