//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/BRNonLocalVersionSending-Protocol.h>

@class BRCAppLibrary, BRCItemID, BRCServerZone, BRCStatInfo, BRCXPCClient, CKRecordID, NSString, NSURL;
@protocol BRNonLocalVersionReceiving;

__attribute__((visibility("hidden")))
@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass>
{
    id <BRNonLocalVersionReceiving> _receiver;
    BRCItemID *_itemID;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    NSString *_storagePathPrefix;
    struct NSObject *_storage;
    BRCXPCClient *_client;
    BRCServerZone *_serverZone;
    BRCAppLibrary *_appLibrary;
    CKRecordID *_recordID;
    CDUnknownBlockType _reply;
    _Bool _includeCachedVersions;
    NSURL *_logicalURL;
    NSURL *_physicalURL;
}

+ (id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id *)arg4;
@property(nonatomic) _Bool includeCachedVersions; // @synthesize includeCachedVersions=_includeCachedVersions;
@property(readonly, nonatomic) NSURL *physicalURL; // @synthesize physicalURL=_physicalURL;
@property(readonly, nonatomic) NSURL *logicalURL; // @synthesize logicalURL=_logicalURL;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)main;
- (id)_depsTrackingOperation;
- (id)_fetchVersionsOperationWithDepsOp:(id)arg1;
- (id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2;
- (id)createActivity;
- (id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 logicalURL:(id)arg4 client:(id)arg5 XPCReceiver:(id)arg6 error:(id *)arg7;
- (oneway void)invalidate;
- (void)listNonLocalVersionsWithReply:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

