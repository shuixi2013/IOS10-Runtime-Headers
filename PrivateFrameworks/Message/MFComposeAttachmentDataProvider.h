//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)rawDataForContentID:(id)arg1;
- (id)dataForContentID:(id)arg1;
- (id)_dataForAttachment:(id)arg1;
- (void)recordUndoDataForAttachments:(id)arg1;
- (void)recordPasteboardDataForAttachments:(id)arg1;
- (void)removeDataForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

