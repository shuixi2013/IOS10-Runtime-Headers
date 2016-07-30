//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCSSavedRecordingServiceClientProtocol-Protocol.h>
#import <VoiceMemos/RCSSavedRecordingServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, RCSSavedRecordingServiceProtocol;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    int _compositionAVURLsBeingExportedDistributedNotificationToken;
    int _compositionAVURLsBeingModifiedDistributedNotificationToken;
    NSXPCConnection *_xpcConnection;
    id <RCSSavedRecordingServiceProtocol> _serviceProxy;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSSet *_compositionAVURLsBeingExported;
    NSSet *_compositionAVURLsBeingModified;
}

+ (_Bool)isRunningInSavedRecordingDaemon;
+ (id)sharedService;
@property(retain, nonatomic) NSSet *compositionAVURLsBeingModified; // @synthesize compositionAVURLsBeingModified=_compositionAVURLsBeingModified;
@property(retain, nonatomic) NSSet *compositionAVURLsBeingExported; // @synthesize compositionAVURLsBeingExported=_compositionAVURLsBeingExported;
- (void).cxx_destruct;
- (void)_handleCompositionAVURLsBeingModifiedDidChange;
- (void)_handleCompositionAVURLsBeingExportedDidChange;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(CDUnknownBlockType)arg2 messagingBlock:(CDUnknownBlockType)arg3;
- (void)_sendServiceMessage:(SEL)arg1 importRequestReplyBlock:(CDUnknownBlockType)arg2 messagingBlock:(CDUnknownBlockType)arg3;
- (void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(CDUnknownBlockType)arg2 messagingBlock:(CDUnknownBlockType)arg3;
- (void)_sendServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(CDUnknownBlockType)arg3 messagingBlock:(CDUnknownBlockType)arg4;
- (void)_onQueueCloseServiceConnection;
- (id)serviceProxy;
- (oneway void)removeAllUserDataWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg1 recordingURIsToUpdate:(id)arg2 recordingURIsToDelete:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)fetchCompositionAVURLsBeingModified:(CDUnknownBlockType)arg1;
- (oneway void)fetchCompositionAVURLsBeingExported:(CDUnknownBlockType)arg1;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)endAccessSessionWithToken:(id)arg1;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(_Bool)arg2 accessRequestHandler:(CDUnknownBlockType)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(CDUnknownBlockType)arg2;
- (oneway void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 importCompletionBlock:(CDUnknownBlockType)arg4;
- (void)closeServiceConnection;
- (void)openServiceConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

