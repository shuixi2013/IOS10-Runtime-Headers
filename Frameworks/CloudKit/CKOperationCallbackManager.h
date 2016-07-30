//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject
{
    NSMutableDictionary *_progressCallbacks;
    NSMutableDictionary *_commandCallbacks;
    NSMutableDictionary *_completionCallbacks;
    NSMutableDictionary *_checkpointCallbacks;
}

@property(retain) NSMutableDictionary *checkpointCallbacks; // @synthesize checkpointCallbacks=_checkpointCallbacks;
@property(retain) NSMutableDictionary *completionCallbacks; // @synthesize completionCallbacks=_completionCallbacks;
@property(retain) NSMutableDictionary *commandCallbacks; // @synthesize commandCallbacks=_commandCallbacks;
@property(retain) NSMutableDictionary *progressCallbacks; // @synthesize progressCallbacks=_progressCallbacks;
- (void).cxx_destruct;
- (void)removeAllCallbacks;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)unregisterAllCallbacksForOperation:(id)arg1;
- (void)registerCheckpointCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCompletionCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCommandCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (id)init;

@end

