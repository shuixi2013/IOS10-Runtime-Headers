//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, TSDCommandSelectionBehavior;

@protocol TSDLayoutManipulatingTracker
- (_Bool)operationShouldBeDynamic;
- (_Bool)supportsAlignmentGuides;
- (void)commitChangesForReps:(NSSet *)arg1;
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(NSSet *)arg1;
- (void)changeDynamicLayoutsForReps:(NSSet *)arg1;

@optional
- (TSDCommandSelectionBehavior *)selectionBehaviorForReps:(NSSet *)arg1;
- (void)didEndDynamicOperationForReps:(NSSet *)arg1;
- (void)didChangeCurrentlyTransformingReps;
- (void)willBeginDynamicOperationForReps:(NSSet *)arg1;
@end

