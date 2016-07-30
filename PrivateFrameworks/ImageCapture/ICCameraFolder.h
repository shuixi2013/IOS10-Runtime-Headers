//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCapture/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem
{
    void *_folderProperties;
    int _filesLock;
    int _foldersLock;
}

- (void)requestMetadata;
- (void)requestThumbnail;
- (id)metadata;
- (struct CGImage *)thumbnail;
- (_Bool)hasThumbnail;
- (id)folders;
- (id)files;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly) NSArray *contents;
- (void)deleteFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addFile:(id)arg1;
- (id)description;
- (void)unlockFolders;
- (void)lockFolders;
- (void)unlockFiles;
- (void)lockFiles;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end

