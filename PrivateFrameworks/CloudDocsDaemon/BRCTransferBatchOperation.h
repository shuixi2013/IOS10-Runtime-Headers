//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCTransferBatchOperation : _BRCOperation <BRCOperationSubclass>
{
    NSMutableDictionary *_entriesByRecordID;
    NSMutableDictionary *_entriesBySecondaryRecordID;
    NSMutableDictionary *_entriesByTransferID;
    unsigned long long _totalSize;
    unsigned long long _doneSize;
    unsigned long long _itemsCount;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _didProgressBlock;
    NSObject<OS_dispatch_group> *_pendingGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *pendingGroup; // @synthesize pendingGroup=_pendingGroup;
@property(copy) CDUnknownBlockType didProgressBlock; // @synthesize didProgressBlock=_didProgressBlock;
@property unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property unsigned long long doneSize; // @synthesize doneSize=_doneSize;
- (void).cxx_destruct;
- (id)transferredObjectsPrettyName;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)actionPrettyName;
- (void)finishedTransferForRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (id)_finishedTransferForRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)sendBatchProgressedCallback;
- (void)_finishedTransfer:(id)arg1 error:(id)arg2;
- (void)setProgress:(double)arg1 forRecordID:(id)arg2;
- (void)_setProgress:(double)arg1 forTransfer:(id)arg2;
- (double)progressForTransferID:(id)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2;
- (void)cancelTransferID:(id)arg1;
- (void)_cancelTransferID:(id)arg1;
- (void)addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)main;
- (void)mainWithTransfers:(id)arg1;
- (id)createActivity;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
@property(readonly) unsigned long long itemsCount;
- (id)fetchOperationForTransfers:(id)arg1 traceCode:(int)arg2;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

