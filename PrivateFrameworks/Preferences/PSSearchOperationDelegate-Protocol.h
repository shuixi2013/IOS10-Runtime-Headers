//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSSet, PSSearchOperation, PSSearchResults;

@protocol PSSearchOperationDelegate <NSObject>
- (void)searchOperationDidCancel:(PSSearchOperation *)arg1;
- (void)searchOperationDidFinish:(PSSearchOperation *)arg1 withResults:(PSSearchResults *)arg2;
- (void)searchOperation:(PSSearchOperation *)arg1 configureSearchResults:(PSSearchResults *)arg2;
- (NSSet *)searchOperation:(PSSearchOperation *)arg1 filteredEntriesForEntries:(NSSet *)arg2;
- (void)searchOperationDidBegin:(PSSearchOperation *)arg1;
@end

