//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>

@class CKDMMCS, CKDMMCSItem, CKDMMCSItemGroup, CKDOperation, NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling>
{
    CKDOperation *_operation;
    id _operationInfo;
    CKDMMCS *_MMCS;
    CKDMMCSItemGroup *_itemGroup;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _commandBlock;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _completionBlock;
    CKDMMCSItem *_MMCSPackageSectionItem;
    NSMapTable *_MMCSItemsByItemID;
    long long _mmcsOperationType;
}

@property(nonatomic) long long mmcsOperationType; // @synthesize mmcsOperationType=_mmcsOperationType;
@property(retain, nonatomic) NSMapTable *MMCSItemsByItemID; // @synthesize MMCSItemsByItemID=_MMCSItemsByItemID;
@property(retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem; // @synthesize MMCSPackageSectionItem=_MMCSPackageSectionItem;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) CDUnknownBlockType commandBlock; // @synthesize commandBlock=_commandBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) CKDMMCSItemGroup *itemGroup; // @synthesize itemGroup=_itemGroup;
@property(retain, nonatomic) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(retain, nonatomic) id operationInfo; // @synthesize operationInfo=_operationInfo;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg1 error:(id *)arg2;
- (struct MMCSItemReaderWriter *)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (void)didGetMetricsForRequest:(id)arg1;
- (void)didPutSectionWithSignature:(id)arg1 receipt:(id)arg2 error:(id)arg3;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 results:(id)arg3;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 results:(id)arg5;
- (void)handleCommand:(id)arg1 forItem:(id)arg2;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;
- (void)updateProgressForPackageSectionState:(int)arg1 progress:(double)arg2 results:(id)arg3;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 results:(id)arg4;
- (void)didCompleteRequestWithError:(id)arg1;
- (void)_cleanupMMCSItems;
- (void)_cleanupMMCSRegisterItems;
- (_Bool)_setupMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupGetMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupPutMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupRegisterMMCSItemsWithError:(id *)arg1;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)arg1;
- (void)_stopTrackingMMCSItems:(id)arg1;
- (void)_startTrackingMMCSItems:(id)arg1;
- (_Bool)shouldFetchAssetContentInMemory;
- (void)start;
- (void)cancel;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(CDUnknownBlockType)arg4 command:(CDUnknownBlockType)arg5 start:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end

