//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/BRCRecentDocumentsNotificationDelegate-Protocol.h>

@class BRCAccountSession, NSOperationQueue, NSString, SBSApplicationShortcutService, br_pacer;
@protocol BRCIndexingArbiter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCApplicationShortcutService : NSObject <BRCModule, BRCRecentDocumentsNotificationDelegate>
{
    BRCAccountSession *_session;
    SBSApplicationShortcutService *_shortcutService;
    NSObject<OS_dispatch_queue> *_shortcutServiceQueue;
    br_pacer *_pacer;
    NSOperationQueue *_thumbnailQueue;
    id <BRCIndexingArbiter> _indexingArbiter;
}

@property(nonatomic) __weak id <BRCIndexingArbiter> indexingArbiter; // @synthesize indexingArbiter=_indexingArbiter;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)close;
- (void)cancel;
- (void)resume;
- (id)_searchShortcutItem;
- (id)_shortcutItemForRecentItemDescriptor:(id)arg1;
- (id)_previewImageDataForDocumentAtURL:(id)arg1 dataType:(long long *)arg2;
- (void)recentDocumentsListUpdated;
- (id)_recentDocumentDescriptors;
- (void)_updateShortcuts;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

