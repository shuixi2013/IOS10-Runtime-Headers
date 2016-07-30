//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject
{
    NSMutableDictionary *_operationsByAttachmentIdentifier;
    NSOperationQueue *_operationQueue;
}

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)arg1;
+ (_Bool)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (id)sharedDownloader;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier; // @synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)downloadRemoteFileForAttachmentObjectID:(id)arg1;
- (void)downloadRemoteFileForAttachment:(id)arg1;
- (void)downloadUndownloadedLegacyAttachments;
- (void)resumeDownloadsAfterDelay;
- (void)dealloc;
- (id)init;

@end

