//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint
{
    NSMutableArray *mPresentations;
}

- (void)addAssociatedPresentation:(id)arg1;
- (void)addPresentation:(id)arg1 order:(unsigned long long)arg2;
- (id)presentations;
- (void)dealloc;

@end

