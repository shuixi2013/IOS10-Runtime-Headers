//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChangeTracking-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SYLegacyStore;

@interface SYTransaction : NSObject <SYChangeTracking>
{
    // Error parsing type: AB, name: _inTransaction
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    CDUnknownBlockType _completion;
    SYLegacyStore *_store;
    NSMutableArray *_changes;
}

@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) SYLegacyStore *store; // @synthesize store=_store;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
- (void).cxx_destruct;
- (void)_transactionDidComplete:(_Bool)arg1;
- (void)rollback;
- (void)commitBlocking:(_Bool)arg1 reportError:(CDUnknownBlockType)arg2;
- (void)commit;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)changeList;
- (_Bool)_endTransaction;
- (_Bool)_beginTransaction;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

