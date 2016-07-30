//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/MDSearchQueryDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate>
{
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}

@property(retain, nonatomic) NSMutableArray *recentMDSearchQueryResults; // @synthesize recentMDSearchQueryResults=_recentMDSearchQueryResults;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *mdQuerySem; // @synthesize mdQuerySem=_mdQuerySem;
- (void).cxx_destruct;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

