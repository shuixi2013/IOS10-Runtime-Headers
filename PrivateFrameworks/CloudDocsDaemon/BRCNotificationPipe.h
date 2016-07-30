//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRItemNotificationSending-Protocol.h>

@class BRCDataOrDocsScopeGatherer, BRCItemID, BRCNotificationManager, BRCXPCClient, BRFileObjectID, BRNotificationQueue, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BRCNotificationPipeDelegate, BRItemNotificationReceiving, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationPipe : NSObject <BRItemNotificationSending>
{
    id <BRItemNotificationReceiving> _receiver;
    BRNotificationQueue *_notifs;
    CDUnknownBlockType _boostReply;
    BRCXPCClient *_client;
    BRCItemID *_oldWatchedAncestorItemID;
    BRCItemID *_watchedAncestorItemID;
    BRFileObjectID *_watchedAncestorFileObjectID;
    NSString *_watchedAncestorFilenameToItem;
    BRCDataOrDocsScopeGatherer *_gatherer;
    _Bool _hasUpdatesInFlight;
    _Bool _volumeIsCaseSensitive;
    NSMutableDictionary *_pendingProgressUpdatesByID;
    _Bool _hasProgressUpdatesInFlight;
    unsigned short _watchItemOptions;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalAppLibraries;
    NSSet *_watchedAppLibraries;
    NSSet *_watchedAppLibraryIDs;
    unsigned long long _watchedAppLibrariesFlags;
    BRCNotificationManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    id <BRCNotificationPipeDelegate> _delegate;
}

@property(nonatomic) __weak id <BRCNotificationPipeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BRCNotificationManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;
- (void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 reply:(CDUnknownBlockType)arg4;
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatheringDone:(CDUnknownBlockType)arg3;
- (void)close;
- (void)_stopWatchingItems;
- (void)_gatherIfNeededAndFlushAsync;
- (void)__flush;
- (void)processProgressUpdates:(id)arg1;
- (void)_processProgressUpdates:(id)arg1;
- (void)_flushProgressUpdates;
- (void)processUpdates:(id)arg1;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (int)_isInterestingUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3;
- (id)_initWithManager:(id)arg1;
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;
- (void)dealloc;
- (oneway void)invalidate;
- (void)boostPriority:(CDUnknownBlockType)arg1;
- (void)watchScopes:(unsigned short)arg1 gatheringDone:(CDUnknownBlockType)arg2;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatheringDone:(CDUnknownBlockType)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatheringDone:(CDUnknownBlockType)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

