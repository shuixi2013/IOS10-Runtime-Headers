//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/SBKTransaction.h>

@class NSArray, NSString, NSURL;
@protocol SBKSyncTransactionProcessing;

@interface SBKSyncTransaction : SBKTransaction
{
    NSString *_syncAnchor;
    NSString *_domain;
    NSArray *_keysToUpdate;
    NSArray *_keysToDelete;
    long long _conflictDetectionType;
    id <SBKSyncTransactionProcessing> _transactionProcessor;
    long long _type;
    NSURL *_syncRequestURL;
}

@property(readonly) NSURL *syncRequestURL; // @synthesize syncRequestURL=_syncRequestURL;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *keysToDelete; // @synthesize keysToDelete=_keysToDelete;
@property(readonly) NSArray *keysToUpdate; // @synthesize keysToUpdate=_keysToUpdate;
@property(readonly) long long conflictDetectionType; // @synthesize conflictDetectionType=_conflictDetectionType;
@property(readonly, copy) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (id)keyValuePairForUpdatedKey:(id)arg1;
- (id)conflictDetectionOrdinalForKey:(id)arg1;
- (id)description;
@property __weak id <SBKSyncTransactionProcessing> transactionProcessor; // @synthesize transactionProcessor=_transactionProcessor;
- (void)_validateTransactionProcessor:(id)arg1;
- (id)newRequest;
- (id)requestURL;
- (id)domain;
- (id)clampsKey;
- (id)initWithStoreBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(long long)arg5;
- (id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(long long)arg6;

@end

