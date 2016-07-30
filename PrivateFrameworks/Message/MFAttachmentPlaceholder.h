//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject
{
    NSMutableDictionary *_jsonDictionary;
}

+ (id)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (id)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)placeholderDirectory;
+ (void)removePlaceholderForContentID:(id)arg1;
+ (void)removePlaceholder:(id)arg1;
+ (void)removePlaceholderForFileURL:(id)arg1;
+ (_Bool)writeData:(id)arg1 forURL:(id)arg2;
+ (id)dataForPlaceholder:(id)arg1;
+ (id)placeholderForMediaURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (id)placeholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)placeholderForFileURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (id)placeholderRepresentations:(id)arg1;
+ (_Bool)hasPlaceholderRepresentation:(id)arg1;
+ (_Bool)isPlaceholderSerializedRepresentation:(id)arg1;
+ (id)_placeholderMagic;
+ (id)placeholderFromSerializedRepresentation:(id)arg1;
+ (id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2;
+ (id)_localStoreURLForFileURL:(id)arg1 contentID:(id)arg2;
+ (id)placeholder;
- (id)serializedRepresentation;
- (void)setUseMailDrop:(_Bool)arg1;
- (_Bool)useMailDrop;
- (void)setContentID:(id)arg1;
- (id)contentID;
- (id)fileURL;
- (void)setFileURLString:(id)arg1;
- (id)fileURLString;
- (void)setMimeType:(id)arg1;
- (id)mimeType;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileName:(id)arg1;
- (id)fileName;
- (void)_setJSONDictionary:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

