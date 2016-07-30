//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFileProvider.h>

#import <CloudDocsDaemon/BRCReachabilityDelegate-Protocol.h>
#import <CloudDocsDaemon/BRItemNotificationReceiving-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate>
{
    NSMutableDictionary *_filePresenterByKey;
    NSMutableDictionary *_readersURLAndIDToDocID;
    NSMutableDictionary *_downloadTrackersByDocID;
    NSMutableDictionary *_recursiveReadsByURLAndID;
}

- (void).cxx_destruct;
- (void)_triggerImmediateReadOfDocumentAtPath:(id)arg1;
- (void)_unregisterPresenterForKey:(id)arg1;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (void)cancelFileProvidersForPath:(id)arg1;
- (void)cancelAllCoordinationProviders;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2;
- (void)boostFilePresenterForURL:(id)arg1;
- (id)filePresenterIdentifierForURL:(id)arg1;
- (_Bool)hasFilePresenterForURL:(id)arg1;
- (unsigned long long)_spaceRequiredForReaders;
- (_Bool)hasPendingReaderForDocumentID:(id)arg1;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(_Bool)arg4 updateAccessTime:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 updateAccessTime:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(_Bool)arg3 updateAccessTime:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_physicalURLForURL:(id)arg1;
- (id)_fileReactorID;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)invalidate;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

