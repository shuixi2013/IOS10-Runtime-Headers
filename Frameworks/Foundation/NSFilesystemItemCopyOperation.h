//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation
{
    NSString *_destinationPath;
    NSMutableSet *_skippedPaths;
}

+ (id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;
+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)dealloc;
- (void)_handleFTSEntry:(struct _ftsent *)arg1;
- (_Bool)_validatePaths:(id *)arg1;
- (_Bool)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;
- (_Bool)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)_shouldCopyItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (_Bool)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;

@end

