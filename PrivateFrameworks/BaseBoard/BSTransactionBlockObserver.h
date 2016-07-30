//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSTransactionObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver>
{
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}

- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidFinishWork:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionWillBegin:(id)arg1;
- (void)addTransactionDidCompleteBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidFinishWorkBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionWillBeginBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

