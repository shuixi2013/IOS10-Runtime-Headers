//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
{
}

- (id)subtract:(id)arg1 mergeRanges:(_Bool)arg2;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(_Bool)arg3;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)mergeRange:(struct _VMURange)arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)mergeRange:(struct _VMURange)arg1;
- (void)sortAndMergeRanges;
- (void)addOrExtendRange:(struct _VMURange)arg1;

@end

